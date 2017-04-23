#!/bin/bash

sudo mysqldump -u root wineTage1 -pTagTalk78388! > /tmp/wineTage1_dump_backup.sql;
echo "Backup on " $(date '+%Y %b %d - %H:%M') "UTC" | mail -r 'support <support@tagtalk.co>' -s "TagTalk DataBase Backup" -t s810011@gmail.com,s810434@gmail.com,qing0325@gmail.com,zhangzhaoyu1985@gmail.com,yliu182@gmail.com -A /tmp/wineTage1_dump_backup.sql; 
