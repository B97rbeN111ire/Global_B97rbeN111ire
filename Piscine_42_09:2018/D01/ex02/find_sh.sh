#!/bin/sh
find . -type f -name "*.sh" 2> /dev/null | Rev | cut -d/ -f 1 | Rev | cut -d. -f1
