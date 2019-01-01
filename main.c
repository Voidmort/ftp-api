/*
 * Copyright (c) 2016 Intel Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "ftp_api.h"

#include <stdio.h>
 
//ftp_storfile( int c_sock, char *s, char *d ,unsigned long long *stor_size, int *stop);
int main()
{
	char host[64] = "192.168.1.225";
	int port = 21;
	char user[64] = "admin";
	char pwd[64] = "1234";
	unsigned long long *stor_size = NULL;
	int c_sock;
	int i;
	printf("*********************\n");

	c_sock = ftp_connect(host, port, user, pwd);

	i = ftp_storfile(c_sock, "/home/root/dataM2017071716504410", "/opt/ftp/test/sl", stor_size, NULL);
	printf("%d\n",i);
	ftp_quit(c_sock);
	return 0;
}
