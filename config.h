/* See LICENSE file for copyright and license details. */

static const struct arg args[] = {
	/* function   format                               argument  */
	{ cpu_perc,   "^c#b15e7c^ \uE021^c#9aa4bd^%s |",   NULL       },
	{ datetime,   "^c#b15e7c^ \uE015^c#9aa4bd^%s ",    "%A %H:%M" }
};

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048
