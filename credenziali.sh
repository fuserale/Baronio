#!/usr/bin/expect
set user "alessandrofsr@gmail.com"
set passw "$Devcpp20#"

expect "Username for 'https://github.com':"
send "$user"
expect "Password for 'https://alessandrofsr@gmail.com@github.com':"
send "$passw"
