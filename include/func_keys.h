#ifndef KEYS_FUNC_H
#define KEYS_FUNC_H

#define S_SAMSUNG(...) IrSender.sendSamsung(__VA_ARGS__)
#define S_SONY(...) IrSender.sendSony(__VA_ARGS__)

#define SEND_FUNCTION(BRAND, CODE) \
void send_##BRAND(int tecla) { \
  switch (tecla) { \
  case 1: S_##BRAND(POWEROFF_##CODE); break; \
  case 2: S_##BRAND(UP_##CODE); break; \
  case 3: S_##BRAND(RIGHT_##CODE); break; \
  case 4: S_##BRAND(LEFT_##CODE); break; \
  case 5: S_##BRAND(DOWN_##CODE); break; \
  case 6: S_##BRAND(ENTER_##CODE); break; \
  case 7: S_##BRAND(MUTE_##CODE); break; \
  case 8: S_##BRAND(CH_UP_##CODE); break; \
  case 9: S_##BRAND(CH_DOWN_##CODE); break; \
  case 10: S_##BRAND(VOL_UP_##CODE); break; \
  case 11: S_##BRAND(VOL_DOWN_##CODE); break; \
  case 12: S_##BRAND(SOURCE_##CODE); break; \
  case 13: S_##BRAND(MENU_##CODE); break; \
  case 14: S_##BRAND(TOOLS_##CODE); break; \
  case 15: S_##BRAND(RETURN_##CODE); break; \
  case 16: S_##BRAND(INFO_##CODE); break; \
  case 17: S_##BRAND(EXIT_##CODE); break; \
  case 18: S_##BRAND(NUM_1_##CODE); break; \
  case 19: S_##BRAND(NUM_2_##CODE); break; \
  case 20: S_##BRAND(NUM_3_##CODE); break; \
  case 21: S_##BRAND(NUM_4_##CODE); break; \
  case 22: S_##BRAND(NUM_5_##CODE); break; \
  case 23: S_##BRAND(NUM_6_##CODE); break; \
  case 24: S_##BRAND(NUM_7_##CODE); break; \
  case 25: S_##BRAND(NUM_8_##CODE); break; \
  case 26: S_##BRAND(NUM_9_##CODE); break; \
  case 27: S_##BRAND(NUM_0_##CODE); break; \
  } \
}

#endif
