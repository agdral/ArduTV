#ifndef VARIABLES_H
#define VARIABLES_H

#define VARIABLES                                                              \
  X(POWEROFF, 1)                                                               \
  X(UP, 2)                                                                     \
  X(RIGHT, 3)                                                                  \
  X(LEFT, 4)                                                                   \
  X(DOWN, 5)                                                                   \
  X(ENTER, 6)                                                                  \
  X(MUTE, 7)                                                                   \
  X(CH_UP, 8)                                                                  \
  X(CH_DOWN, 9)                                                                \
  X(VOL_UP, 10)                                                                \
  X(VOL_DOWN, 11)                                                              \
  X(SOURCE, 12)                                                                \
  X(MENU, 13)                                                                  \
  X(TOOLS, 14)                                                                 \
  X(RETURN, 15)                                                                \
  X(INFO, 16)                                                                  \
  X(EXIT, 17)                                                                  \
  X(NUM_1, 18)                                                                 \
  X(NUM_2, 19)                                                                 \
  X(NUM_3, 20)                                                                 \
  X(NUM_4, 21)                                                                 \
  X(NUM_5, 22)                                                                 \
  X(NUM_6, 23)                                                                 \
  X(NUM_7, 24)                                                                 \
  X(NUM_8, 25)                                                                 \
  X(NUM_9, 26)                                                                 \
  X(NUM_0, 27)                                                                 \
  X(SAMSUNG_D, 101)                                                            \
  X(SONY_D, 102)

#define X(name, value) enum { name = value };
VARIABLES
#undef X

const char *getNameVariable(int value) {
  switch (value) {
#define X(name, value)                                                         \
  case value:                                                                  \
    return #name;
    VARIABLES // <-- Expande todos los cases aquí
#undef X
        default : return "UNKNOWN";
  }
}

#endif
