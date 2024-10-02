#ifndef ANSI_CSI_H
#define ANSI_CSI_H

#define ANSI_CURSOR_UP(n)                  "\033[" #n "A"
#define ANSI_CURSOR_UP                     "\033[A"
#define ANSI_CURSOR_DOWN(n)                "\033[" #n "B"
#define ANSI_CURSOR_DOWN                   "\033[B"
#define ANSI_CURSOR_FORWARD(n)             "\033[" #n "C"
#define ANSI_CURSOR_FORWARD                "\033[C"
#define ANSI_CURSOR_BACKWARD(n)            "\033[" #n "D"
#define ANSI_CURSOR_BACKWARD               "\033[D"
#define ANSI_CURSOR_NEXT_LINE(n)           "\033[" #n "E"
#define ANSI_CURSOR_NEXT_LINE              "\033[E"
#define ANSI_CURSOR_PREVIOUS_LINE(n)       "\033[" #n "F"
#define ANSI_CURSOR_PREVIOUS_LINE          "\033[F"
#define ANSI_CURSOR_HORIZONTAL_ABSOLUTE(n) "\033[" #n "G" // Move to column n
#define ANSI_CURSOR_HORIZONTAL_ABSOLUTE    "\033[G"
#define ANSI_CURSOR_POSITION(row, col)     "\033[" #row ";" #col "H"
#define ANSI_CURSOR_RESET                  "\033[H"
#define ANSI_CLEAR_SCREEN_AFTER_CURSOR     "\033[0J"
#define ANSI_CLEAR_SCREEN_BEFORE_CURSOR    "\033[1J"
#define ANSI_CLEAR_SCREEN                  "\033[2J"
#define ANSI_CLEAR_SCREEN_INCLUDE_BUFFER   "\033[3J" // Includes scrolling buffer
#define ANSI_CLEAR_LINE_AFTER_CURSOR       "\033[0K"
#define ANSI_CLEAR_LINE_BEFORE_CURSOR      "\033[1K"
#define ANSI_CLEAR_LINE                    "\033[2K"
#define ANSI_SCROLL_UP(n)                  "\033[" #n "S"
#define ANSI_SCROLL_DOWN(n)                "\033[" #n "T"
#define ANSI_HORIZONTAL_ABSOLUTE(row, col) "\033[" #row ";" #col "f" // Same as ANSI_CURSOR_POSITION
#define ANSI_SGR(n)                        "\033[" #n "m" // You can find more info in ansi_csi_agr.h
#define ANSI_REPORT_CURSOR_POSITION        "\033[6n" // Get ESC[n;mR as input by the terminal
#define ANSI_SAVE_CURSOR                   "\033[s"
#define ANSI_RESTORE_CURSOR                "\033[u"

#endif // ANSI_CSI_H