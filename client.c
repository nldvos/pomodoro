
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* #include "pomodoro.h" */
#include "client.h"

#define CMD_REMAINING "remaining"
#define CMD_PAUSE "pause"
#define CMD_CONTINUE "continue"
#define CMD_SKIP "skip"
#define CMD_START "start"
#define CMD_STOP "stop"
#define CMD_HELP "help"

static void usage()
{
	printf("pomodoro client usage:\n");
	printf("TODO\n");
	exit(EXIT_SUCCESS);
}

static void cmd_unknown()
{
	printf("use poc --help for more information\n");
	exit(EXIT_SUCCESS);
}

static void cmd_remaining(int argc, char *argv[])
{
	/* TODO */
	printf("remaining\n");
	exit(EXIT_SUCCESS);
}

static void cmd_pause(int argc, char *argv[])
{
	/* TODO */
	printf("pause\n");
	exit(EXIT_SUCCESS);
}

static void cmd_continue(int argc, char *argv[])
{
	/* TODO */
	printf("continue\n");
	exit(EXIT_SUCCESS);
}

static void cmd_skip(int argc, char *argv[])
{
	/* TODO */
	printf("skip\n");
	exit(EXIT_SUCCESS);
}

static void cmd_start(int argc, char *argv[])
{
	/* TODO */
	printf("start\n");
	exit(EXIT_SUCCESS);
}

static void cmd_stop(int argc, char *argv[])
{
	/* TODO */
	printf("stop\n");
	exit(EXIT_SUCCESS);
}

int main(int argc, char *argv[])
{
	if (argc < 2) {
		cmd_unknown();
	}

	char *cmd = argv[1];
	argc--;
	argv++;
	if (!strcmp(cmd, CMD_REMAINING)) {
		cmd_remaining(argc, argv);
	}
	else if (!strcmp(cmd, CMD_PAUSE)) {
		cmd_pause(argc, argv);
	}
	else if (!strcmp(cmd, CMD_CONTINUE)) {
		cmd_continue(argc, argv);
	}
	else if (!strcmp(cmd, CMD_SKIP)) {
		cmd_skip(argc, argv);
	}
	else if (!strcmp(cmd, CMD_START)) {
		cmd_start(argc, argv);
	}
	else if (!strcmp(cmd, CMD_STOP)) {
		cmd_stop(argc, argv);
	}
	else if (!strcmp(cmd, CMD_HELP)) {
		usage();
	}
	else {
		cmd_unknown();
	}

	return EXIT_FAILURE;
}

