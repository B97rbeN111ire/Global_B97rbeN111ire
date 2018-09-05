ldapsearch -LLLQ "(uid=z*)" | grep ^cn | cut -c 5- | sort -b -f -r
