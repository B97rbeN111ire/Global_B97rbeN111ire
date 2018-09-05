#!/bin/sh
cat /etc/passwd | cut -d\: -f 1 | grep -v "#" | sed -n "n;p" | rev | sort -r | head -n +$FT_LINE2 | tail -n +$FT_LINE1 | tr "\n" "@" | sed "s/@/, /g" | tr "\n" "@" | sed "s/, @/./" | tr -d "\n"
