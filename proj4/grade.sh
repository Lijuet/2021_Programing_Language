#!/bin/bash

if [ "$#" -lt 1 ]; then
    echo "Usage: ./grade.sh MAXPOINTS"
    exit 1
fi

maxScore=$1
sourceList=`find ./ -name "*.c"`

for src in $sourceList
do    
    gcc $src
    ./a.out > result.txt

    diff -bwi result.txt output.txt > diff.txt
    left_cnt=`grep -o '<' diff.txt | wc -l`
    right_cnt=`grep -o '>' diff.txt | wc -l`
    # echo $left_cnt $right_cnt

    let diff_cnt=$left_cnt+$right_cnt
    let final_score=$maxScore-$diff_cnt
    
    echo ${src:2} "has earned a score of" $final_score
done

