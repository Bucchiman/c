#!/bin/zsh
#
# FileName:     8u
# Author:       8ucchiman
# CreatedDate:  2023-08-28 11:08:32
# LastModified: 2023-01-23 14:11:45 +0900
# Reference:    https://qiita.com/iwatake2222/items/1fdd2e0faaaa868a2db2
# Description:  ---
#


function func_lst () {
    echo "***********************************"
    echo "The following function is prepared."
    echo "***********************************"
    cat go | awk '/^function/ {printf "| %s\n", $2}'
    echo "***********************************"
}


function run () {
    make
    sudo insmod test.ko
    sudo rmmod test.ko
    dmesg
}

########################################
function main00 () {
    # https://ex1.m-yabe.com/archives/4548
    if [[ ! -n $@ ]]; then
        run
    else
        eval $@
    fi
}

main00 $@
########################################



########################################
#while getopts :i:c:g OPT
#do
#    case $OPT in
#        i) image_name=$OPTARG;;
#        g) gpu_flag=true;;
#        c) container_name=$OPTARG;;
#        :|\?) _usage;;
#    esac
#done
#function _usage () {
#    echo 
#}
#function help () {
#
#}
#
#
#function main01 () {
#    
#}
########################################

return

