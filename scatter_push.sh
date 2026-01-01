#!/bin/bash

# Configuration
TARGET_REPO_PATH="/path/to/your/new/repo"
START_DATE="2026-01-01" # When you want the streak to start

# Get a list of all files in the source (excluding .git)
FILES=$(find . -type f -not -path '*/.*')

current_day=0

for file in $FILES; do
    # 1. Decide if we skip this day to look "scattered"
    # This skips roughly 20% of days randomly
    if [ $((RANDOM % 5)) -eq 0 ]; then
        ((current_day++))
    fi

    # 2. Calculate the fake date
    # Adjusts the date by adding 'current_day' to START_DATE
    FAKE_DATE=$(date -I -d "$START_DATE + $current_day days")
    
    # 3. Randomize the time (e.g., between 10:00 and 22:00)
    HOUR=$(shuf -i 10-22 -n 1)
    MINUTE=$(shuf -i 10-59 -n 1)
    TIMESTAMP="$FAKE_DATE $HOUR:$MINUTE:00"

    # 4. Copy file to target, stage, and commit
    cp "$file" "$TARGET_REPO_PATH/$file"
    cd "$TARGET_REPO_PATH"
    git add .
    
    GIT_AUTHOR_DATE="$TIMESTAMP" GIT_COMMITTER_DATE="$TIMESTAMP" \
    git commit -m "Day $((current_day+1)): Added $file"

    # Move back to source for next file
    cd - > /dev/null
    
    ((current_day++))
done
