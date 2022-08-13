/* Name: Ronney Sanchez
 * Date: 3/30/19
 * Course: COMP3080 Operating System
 * Assignment 4
 * Email: Ronney_Sanchez@student.uml.edu
 */
#define _GNU_SOURCE
#include <sched.h>
#include <utmpx.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <linux/unistd.h>
#include <strings.h>
#include <signal.h>
#include <sys/time.h>
#include <pthread.h>
#include <sys/fcntl.h>
#include <stdio.h>
#include <errno.h>


#define         NUMFLAVORS       	4
#define         NUMSLOTS        	600
#define         NUMCONSUMERS     	50
#define		NUMPRODUCERS		30


typedef struct {
	int     	flavor [NUMFLAVORS] [NUMSLOTS];
	int     	outptr [NUMFLAVORS];
	int		in_ptr [NUMFLAVORS];
	int		serial [NUMFLAVORS];
	int		spaces [NUMFLAVORS];
	int		donuts [NUMFLAVORS];
} DONUT_SHOP;

	void	*sig_waiter ( void *arg );
	void	*producer   ( void *arg );
	void	*consumer ( void *arg) ;
	void    sig_handler ( int );
