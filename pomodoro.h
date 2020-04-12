
#define POMODORO_SOCKET "/tmp/pomodoro.socket"

#define POMODORO_SMALL_BREAK (5)
#define POMODORO_LARGE_BREAK (15)
#define POMODORO_WORK_TIME (25)
#define POMODORO_CYCLES (4)

typedef POMODORO_HDL void*;

POMODORO_HDL pomodoro_create();
extern void pomodoro_destroy(POMODORO_HDL hdl);
extern int pomodoro_connect(POMODORO_HDL hdl);

extern int pomodoro_start(POMODORO_HDL hdl);
extern int pomodoro_stop(POMODORO_HDL hdl);

extern int pomodoro_continue(POMODORO_HDL hdl);
extern int pomodoro_pause(POMODORO_HDL hdl);
extern int pomodoro_skip(POMODORO_HDL hdl);
