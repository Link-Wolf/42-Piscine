grep -v '^#' /etc/passwd | sed -n 'n;p' | sed 's/^/,/' | rev | sort -r | head -n $FT_LINE2 | tail -n $(($FT_LINE2 - $FT_LINE1)) | sed 's/.*\*://' | tr "\n" " " | sed 's/, $/./'
