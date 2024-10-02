#ifndef ANSI_CSI_SGR_H
#define ANSI_CSI_SGR_H

#define ANSI_SGR_RESET                     "\033[0m"
// Font format
#define ANSI_SGR_BOLD                      "\033[1m"
#define ANSI_SGR_DIM                       "\033[2m" // Not widely supported
#define ANSI_SGR_ITALIC                    "\033[3m" // Not widely supported, sometimes treated as inverse
#define ANSI_SGR_UNDERLINE                 "\033[4m"
#define ANSI_SGR_BLINK                     "\033[5m" // Less than 150 per minute
#define ANSI_SGR_BLINK_RAPID               "\033[6m" // Not widely supported, More than 150 per minute
#define ANSI_SGR_REVERSE                   "\033[7m" // Swap foreground and background colors
#define ANSI_SGR_HIDDEN                    "\033[8m" // Not widely supported
#define ANSI_SGR_CROSSED_OUT               "\033[9m" // Not widely supported, Characters legible, but marked for deletion
// Font style
#define ANSI_SGR_FONT_RESET                "\033[10m"
#define ANSI_SGR_FONT_ALT(n)               "\033[1" #n "m" // requires in the range of 0-9 (0 is the same as ANSI_SGR_FONT_RESET)
#define ANSI_SGR_FRAKTUR                   "\033[20m" // Almost not supported
// Reset format
#define ANSI_SGR_BOLD_RESET                "\033[21m"
#define ANSI_SGR_INTENSITY_RESET           "\033[22m"
#define ANSI_SGR_ITALIC_RESET              "\033[23m"
#define ANSI_SGR_UNDERLINE_RESET           "\033[24m"
#define ANSI_SGR_BLINK_RESET               "\033[25m"
#define ANSI_SGR_REVERSE_RESET             "\033[27m"
#define ANSI_SGR_HIDDEN_RESET              "\033[28m"
#define ANSI_SGR_CROSSED_OUT_RESET         "\033[29m"
// 3/4 bit colors foreground
#define ANSI_SGR_FOREGROUND_BLACK          "\033[30m"
#define ANSI_SGR_FOREGROUND_RED            "\033[31m"
#define ANSI_SGR_FOREGROUND_GREEN          "\033[32m"
#define ANSI_SGR_FOREGROUND_YELLOW         "\033[33m"
#define ANSI_SGR_FOREGROUND_BLUE           "\033[34m"
#define ANSI_SGR_FOREGROUND_MAGENTA        "\033[35m"
#define ANSI_SGR_FOREGROUND_CYAN           "\033[36m"
#define ANSI_SGR_FOREGROUND_WHITE          "\033[37m"
#define ANSI_SGR_FOREGROUND_BRIGHT_BLACK   "\033[90m" // Not standard
#define ANSI_SGR_FOREGROUND_BRIGHT_RED     "\033[91m" // Not standard
#define ANSI_SGR_FOREGROUND_BRIGHT_GREEN   "\033[92m" // Not standard
#define ANSI_SGR_FOREGROUND_BRIGHT_YELLOW  "\033[93m" // Not standard
#define ANSI_SGR_FOREGROUND_BRIGHT_BLUE    "\033[94m" // Not standard
#define ANSI_SGR_FOREGROUND_BRIGHT_MAGENTA "\033[95m" // Not standard
#define ANSI_SGR_FOREGROUND_BRIGHT_CYAN    "\033[96m" // Not standard
#define ANSI_SGR_FOREGROUND_BRIGHT_WHITE   "\033[97m" // Not standard
// 3/4 bit colors background
#define ANSI_SGR_BACKGROUND_BLACK          "\033[40m"
#define ANSI_SGR_BACKGROUND_RED            "\033[41m"
#define ANSI_SGR_BACKGROUND_GREEN          "\033[42m"
#define ANSI_SGR_BACKGROUND_YELLOW         "\033[43m"
#define ANSI_SGR_BACKGROUND_BLUE           "\033[44m"
#define ANSI_SGR_BACKGROUND_MAGENTA        "\033[45m"
#define ANSI_SGR_BACKGROUND_CYAN           "\033[46m"
#define ANSI_SGR_BACKGROUND_WHITE          "\033[47m"
#define ANSI_SGR_BACKGROUND_BRIGHT_BLACK   "\033[100m" // Not standard
#define ANSI_SGR_BACKGROUND_BRIGHT_RED     "\033[101m" // Not standard
#define ANSI_SGR_BACKGROUND_BRIGHT_GREEN   "\033[102m" // Not standard
#define ANSI_SGR_BACKGROUND_BRIGHT_YELLOW  "\033[103m" // Not standard
#define ANSI_SGR_BACKGROUND_BRIGHT_BLUE    "\033[104m" // Not standard
#define ANSI_SGR_BACKGROUND_BRIGHT_MAGENTA "\033[105m" // Not standard
#define ANSI_SGR_BACKGROUND_BRIGHT_CYAN    "\033[106m" // Not standard
#define ANSI_SGR_BACKGROUND_BRIGHT_WHITE   "\033[107m" // Not standard
// 8 bit colors
// https://en.wikipedia.org/wiki/ANSI_escape_code#8-bit
#define ANSI_SGR_FOREGROUND_8BIT(n)       "\033[38;5;" #n "m"
#define ANSI_SGR_BACKGROUND_8BIT(n)       "\033[48;5;" #n "m"
// 24 bit colors
// https://en.wikipedia.org/wiki/ANSI_escape_code#24-bit
#define ANSI_SGR_FOREGROUND_24BIT(r, g, b) "\033[38;2;" #r ";" #g ";" #b "m"
#define ANSI_SGR_BACKGROUND_24BIT(r, g, b) "\033[48;2;" #r ";" #g ";" #b "m"

#endif // ANSI_CSI_SGR_H