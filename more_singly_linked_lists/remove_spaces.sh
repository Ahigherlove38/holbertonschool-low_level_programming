#!/bin/bash
find . -type f -name "*.c" -exec sed -i 's/^[[:space:]]*//; s/[[:space:]]*$//' {} +
