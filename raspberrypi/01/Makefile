#
# FileName:     Makefile
# Author: 		8ucchiman
# CreatedDate:  2023-07-27 13:18:00
# LastModified: 2023-02-03 21:27:40 +0900
# Reference: 	https://qiita.com/chibi929/items/b8c5f36434d5d3fbfa4a
#               https://qiita.com/iwatake2222/items/1fdd2e0faaaa868a2db2
# Description:	---
#



obj-m := test.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) clean



