/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Czech
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 * Translated by Petr Zahradnik, Computer Laboratory
 * Blog and video blog Zahradnik se bavi
 * http://www.zahradniksebavi.cz
 *
 */

#define DISPLAY_CHARSET_ISO10646_CZ

namespace Language_cz {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 2;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Czech");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" připraven.");
  PROGMEM Language_Str MSG_YES                             = _UxGT("ANO");
  PROGMEM Language_Str MSG_NO                              = _UxGT("NE");
  PROGMEM Language_Str MSG_BACK                            = _UxGT("Zpět");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("Karta vložena");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("Karta vyjmuta");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Endstopy"); // max 8 znaku
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               = _UxGT("Soft Endstopy");
  PROGMEM Language_Str MSG_MAIN                            = _UxGT("Hlavní nabídka");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               = _UxGT("Další nastavení");
  PROGMEM Language_Str MSG_CONFIGURATION                   = _UxGT("Konfigurace");
  PROGMEM Language_Str MSG_AUTOSTART                       = _UxGT("Autostart");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Uvolnit motory");
  PROGMEM Language_Str MSG_DEBUG_MENU                      = _UxGT("Nabídka ladění");
  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_PROGRESS_BAR_TEST             = _UxGT("Test ukaz. průběhu");
  #else
    PROGMEM Language_Str MSG_PROGRESS_BAR_TEST             = _UxGT("Test uk. průběhu");
  #endif
  PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Domovská pozice");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("Domů osa X");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Domů osa Y");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Domů osa Z");
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    = _UxGT("Auto srovnání Z");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("Měření podložky");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Kliknutím spusťte");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Další bod");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("Měření hotovo!");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   = _UxGT("Výška srovnávání");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                = _UxGT("Nastavit ofsety");
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Ofsety nastaveny");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT("Nastavit počátek");
  PROGMEM Language_Str MSG_PREHEAT_1                       = _UxGT("Zahřát ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_1_H0                    = _UxGT("Zahřát ") PREHEAT_1_LABEL " " LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_1_H1                    = _UxGT("Zahřát ") PREHEAT_1_LABEL " " LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_1_H2                    = _UxGT("Zahřát ") PREHEAT_1_LABEL " " LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_1_H3                    = _UxGT("Zahřát ") PREHEAT_1_LABEL " " LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_1_H4                    = _UxGT("Zahřát ") PREHEAT_1_LABEL " " LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_1_H5                    = _UxGT("Zahřát ") PREHEAT_1_LABEL " " LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_1_END                   = _UxGT("Zahřát ") PREHEAT_1_LABEL _UxGT(" end");
  PROGMEM Language_Str MSG_PREHEAT_1_END_E0                = _UxGT("Zahřát ") PREHEAT_1_LABEL _UxGT(" end ") LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E1                = _UxGT("Zahřát ") PREHEAT_1_LABEL _UxGT(" end ") LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E2                = _UxGT("Zahřát ") PREHEAT_1_LABEL _UxGT(" end ") LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E3                = _UxGT("Zahřát ") PREHEAT_1_LABEL _UxGT(" end ") LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E4                = _UxGT("Zahřát ") PREHEAT_1_LABEL _UxGT(" end ") LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E5                = _UxGT("Zahřát ") PREHEAT_1_LABEL _UxGT(" end ") LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_1_ALL                   = _UxGT("Zahřát ") PREHEAT_1_LABEL _UxGT(" vše");
  PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY               = _UxGT("Zahřát ") PREHEAT_1_LABEL _UxGT(" podlož");
  PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS              = _UxGT("Zahřát ") PREHEAT_1_LABEL _UxGT(" nast");
  PROGMEM Language_Str MSG_PREHEAT_2                       = _UxGT("Zahřát ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_2_H0                    = _UxGT("Zahřát ") PREHEAT_2_LABEL " " LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_2_H1                    = _UxGT("Zahřát ") PREHEAT_2_LABEL " " LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_2_H2                    = _UxGT("Zahřát ") PREHEAT_2_LABEL " " LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_2_H3                    = _UxGT("Zahřát ") PREHEAT_2_LABEL " " LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_2_H4                    = _UxGT("Zahřát ") PREHEAT_2_LABEL " " LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_2_H5                    = _UxGT("Zahřát ") PREHEAT_2_LABEL " " LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_2_END                   = _UxGT("Zahřát ") PREHEAT_2_LABEL _UxGT(" end");
  PROGMEM Language_Str MSG_PREHEAT_2_END_E0                = _UxGT("Zahřát ") PREHEAT_2_LABEL _UxGT(" end ") LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E1                = _UxGT("Zahřát ") PREHEAT_2_LABEL _UxGT(" end ") LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E2                = _UxGT("Zahřát ") PREHEAT_2_LABEL _UxGT(" end ") LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E3                = _UxGT("Zahřát ") PREHEAT_2_LABEL _UxGT(" end ") LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E4                = _UxGT("Zahřát ") PREHEAT_2_LABEL _UxGT(" end ") LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E5                = _UxGT("Zahřát ") PREHEAT_2_LABEL _UxGT(" end ") LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_2_ALL                   = _UxGT("Zahřát ") PREHEAT_2_LABEL _UxGT(" vše");
  PROGMEM Language_Str MSG_PREHEAT_2_BEDONLY               = _UxGT("Zahřát ") PREHEAT_2_LABEL _UxGT(" podlož");
  PROGMEM Language_Str MSG_PREHEAT_2_SETTINGS              = _UxGT("Zahřát ") PREHEAT_2_LABEL _UxGT(" nast");
  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  = _UxGT("Zahřát vlastní");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Zchladit");
  PROGMEM Language_Str MSG_LASER_MENU                      = _UxGT("Ovládání laseru");
  PROGMEM Language_Str MSG_LASER_OFF                       = _UxGT("Vypnout laser");
  PROGMEM Language_Str MSG_LASER_ON                        = _UxGT("Zapnout laser");
  PROGMEM Language_Str MSG_LASER_POWER                     = _UxGT("Výkon laseru");
  PROGMEM Language_Str MSG_SPINDLE_REVERSE                 = _UxGT("Vřeteno opačně");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Zapnout napájení");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Vypnout napájení");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Vytlačit (extr.)");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Zatlačit (retr.)");
  PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Posunout osy");
  PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Vyrovnat podložku");
  PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Vyrovnat podložku");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Vyrovnat rohy");
  PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Další roh");
  PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Upravit síť bodů");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 = _UxGT("Konec úprav sítě");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Index X");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Index Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Hodnota Z");

  PROGMEM Language_Str MSG_USER_MENU                       = _UxGT("Vlastní příkazy");
  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("Režim IDEX");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Ofsety nástrojů");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Auto-Park");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Duplikace");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Zrcadlení");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Plná kontrola");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 = _UxGT("2. tryska X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 = _UxGT("2. tryska Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 = _UxGT("2. tryska Z");

  PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("Provádím G29");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("UBL nástroje");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("Unified Bed Leveling");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Manuální síť bodů");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   = _UxGT("Vložte kartu, změřte");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Změřte");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   = _UxGT("Odstraňte a změřte");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Přesun na další");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Aktivovat UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Deaktivovat UBL");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                = _UxGT("Teplota podložky");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             = _UxGT("Teplota podložky");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             = _UxGT("Teplota hotendu");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          = _UxGT("Teplota hotendu");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Úprava sítě bodů");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Upravit vlastní síť");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Doladit síť bodů");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           = _UxGT("Konec úprav sítě");
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           = _UxGT("Vlastní síť");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Vytvořit síť");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M1               = _UxGT("Síť bodů ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M2               = _UxGT("Síť bodů ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             = _UxGT("Studená síť bodů");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Upravit výšku sítě");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Výška");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Zkontrolovat síť");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M1            = _UxGT("Kontrola sítě ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M2            = _UxGT("Kontrola sítě ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Kontrola vlast. sítě");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Pokračovat v síťi");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Síťové rovnání");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        = _UxGT("3-bodové rovnání");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Mřížkové rovnání");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Srovnat podložku");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Postranní body");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Typ sítě bodu");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Exportovat síť");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Exportovat do PC");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Exportovat do CSV");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Záloha do PC");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("Info o UBL do PC");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Hustota mřížky");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Ruční hustota");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Chytrá hustota");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Zaplnit mřížku");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Zrušit všechno");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Zrušit poslední");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Upravit všechny");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("Upravit poslední");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Uložiště sítí");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Paměťový slot");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Načíst síť bodů");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Uložit síť bodů");
  PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("M117 Síť %i načtena");
  PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("M117 Síť %i uložena");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Nedostatek místa");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Ch.: Uložit UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Ch.: Obnovit UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT("Konec Z-Offsetu");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("UBL Postupně");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("1. Studená síť bodů");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("2. Chytrá hustota");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("3. Zkontrolovat síť");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("4. Upravit všechny");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("5. Zkontrolovat síť");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("6. Upravit všechny");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7. Uložit síť bodů");

  PROGMEM Language_Str MSG_LED_CONTROL                     = _UxGT("Nastavení LED");
  PROGMEM Language_Str MSG_LEDS                            = _UxGT("Světla");
  PROGMEM Language_Str MSG_LED_PRESETS                     = _UxGT("Světla Předvolby");
  PROGMEM Language_Str MSG_SET_LEDS_RED                    = _UxGT("Červená");
  PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 = _UxGT("Oranžová");
  PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 = _UxGT("Žlutá");
  PROGMEM Language_Str MSG_SET_LEDS_GREEN                  = _UxGT("Zelená");
  PROGMEM Language_Str MSG_SET_LEDS_BLUE                   = _UxGT("Modrá");
  PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 = _UxGT("Indigo");
  PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 = _UxGT("Fialová");
  PROGMEM Language_Str MSG_SET_LEDS_WHITE                  = _UxGT("Bílá");
  PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                = _UxGT("Výchozí");
  PROGMEM Language_Str MSG_CUSTOM_LEDS                     = _UxGT("Vlastní světla");
  PROGMEM Language_Str MSG_INTENSITY_R                     = _UxGT("Červená intenzita");
  PROGMEM Language_Str MSG_INTENSITY_G                     = _UxGT("Zelená intezita");
  PROGMEM Language_Str MSG_INTENSITY_B                     = _UxGT("Modrá intenzita");
  PROGMEM Language_Str MSG_INTENSITY_W                     = _UxGT("Bílá intenzita");
  PROGMEM Language_Str MSG_LED_BRIGHTNESS                  = _UxGT("Jas");

  PROGMEM Language_Str MSG_MOVING                          = _UxGT("Posouvání...");
  PROGMEM Language_Str MSG_FREE_XY                         = _UxGT("Uvolnit XY");
  PROGMEM Language_Str MSG_MOVE_X                          = _UxGT("Posunout X");
  PROGMEM Language_Str MSG_MOVE_Y                          = _UxGT("Posunout Y");
  PROGMEM Language_Str MSG_MOVE_Z                          = _UxGT("Posunout Z");
  PROGMEM Language_Str MSG_MOVE_E                          = _UxGT("Extrudér");
  PROGMEM Language_Str MSG_MOVE_E0                         = _UxGT("Extrudér ") LCD_STR_E0;
  PROGMEM Language_Str MSG_MOVE_E1                         = _UxGT("Extrudér ") LCD_STR_E1;
  PROGMEM Language_Str MSG_MOVE_E2                         = _UxGT("Extrudér ") LCD_STR_E2;
  PROGMEM Language_Str MSG_MOVE_E3                         = _UxGT("Extrudér ") LCD_STR_E3;
  PROGMEM Language_Str MSG_MOVE_E4                         = _UxGT("Extrudér ") LCD_STR_E4;
  PROGMEM Language_Str MSG_MOVE_E5                         = _UxGT("Extrudér ") LCD_STR_E5;
  PROGMEM Language_Str MSG_HOTEND_TOO_COLD                 = _UxGT("Hotend je studený");
  PROGMEM Language_Str MSG_MOVE_Z_DIST                     = _UxGT("Posunout o %smm");
  PROGMEM Language_Str MSG_MOVE_01MM                       = _UxGT("Posunout o 0,1mm");
  PROGMEM Language_Str MSG_MOVE_1MM                        = _UxGT("Posunout o 1mm");
  PROGMEM Language_Str MSG_MOVE_10MM                       = _UxGT("Posunout o 10mm");
  PROGMEM Language_Str MSG_SPEED                           = _UxGT("Rychlost");
  PROGMEM Language_Str MSG_BED_Z                           = _UxGT("Výška podl.");
  PROGMEM Language_Str MSG_NOZZLE                          = _UxGT("Tryska");
  PROGMEM Language_Str MSG_NOZZLE_0                        = _UxGT("Tryska ") LCD_STR_N0;
  PROGMEM Language_Str MSG_NOZZLE_1                        = _UxGT("Tryska ") LCD_STR_N1;
  PROGMEM Language_Str MSG_NOZZLE_2                        = _UxGT("Tryska ") LCD_STR_N2;
  PROGMEM Language_Str MSG_NOZZLE_3                        = _UxGT("Tryska ") LCD_STR_N3;
  PROGMEM Language_Str MSG_NOZZLE_4                        = _UxGT("Tryska ") LCD_STR_N4;
  PROGMEM Language_Str MSG_NOZZLE_5                        = _UxGT("Tryska ") LCD_STR_N5;
  PROGMEM Language_Str MSG_BED                             = _UxGT("Podložka");
  PROGMEM Language_Str MSG_CHAMBER                         = _UxGT("Komora");
  PROGMEM Language_Str MSG_FAN_SPEED                       = _UxGT("Rychlost vent.");
  PROGMEM Language_Str MSG_FAN_SPEED_1                     = _UxGT("Rychlost vent. 1");
  PROGMEM Language_Str MSG_FAN_SPEED_2                     = _UxGT("Rychlost vent. 2");
  PROGMEM Language_Str MSG_FAN_SPEED_3                     = _UxGT("Rychlost vent. 3");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED                 = _UxGT("Rychlost ex. vent.");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_1               = _UxGT("Rychlost ex. vent. 1");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_2               = _UxGT("Rychlost ex. vent. 2");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_3               = _UxGT("Rychlost ex. vent. 3");
  PROGMEM Language_Str MSG_FLOW                            = _UxGT("Průtok");
  PROGMEM Language_Str MSG_FLOW_0                          = _UxGT("Průtok ") LCD_STR_N0;
  PROGMEM Language_Str MSG_FLOW_1                          = _UxGT("Průtok ") LCD_STR_N1;
  PROGMEM Language_Str MSG_FLOW_2                          = _UxGT("Průtok ") LCD_STR_N2;
  PROGMEM Language_Str MSG_FLOW_3                          = _UxGT("Průtok ") LCD_STR_N3;
  PROGMEM Language_Str MSG_FLOW_4                          = _UxGT("Průtok ") LCD_STR_N4;
  PROGMEM Language_Str MSG_FLOW_5                          = _UxGT("Průtok ") LCD_STR_N5;
  PROGMEM Language_Str MSG_CONTROL                         = _UxGT("Ovládaní");
  PROGMEM Language_Str MSG_MIN                             = " " LCD_STR_THERMOMETER _UxGT(" Min");
  PROGMEM Language_Str MSG_MAX                             = " " LCD_STR_THERMOMETER _UxGT(" Max");
  PROGMEM Language_Str MSG_FACTOR                          = " " LCD_STR_THERMOMETER _UxGT(" Fakt");
  PROGMEM Language_Str MSG_AUTOTEMP                        = _UxGT("Autoteplota");
  PROGMEM Language_Str MSG_LCD_ON                          = _UxGT("Zap");
  PROGMEM Language_Str MSG_LCD_OFF                         = _UxGT("Vyp");
  PROGMEM Language_Str MSG_SELECT                          = _UxGT("Vybrat");
  PROGMEM Language_Str MSG_SELECT_E0                       = _UxGT("Vybrat ") LCD_STR_E0;
  PROGMEM Language_Str MSG_SELECT_E1                       = _UxGT("Vybrat ") LCD_STR_E1;
  PROGMEM Language_Str MSG_SELECT_E2                       = _UxGT("Vybrat ") LCD_STR_E2;
  PROGMEM Language_Str MSG_SELECT_E3                       = _UxGT("Vybrat ") LCD_STR_E3;
  PROGMEM Language_Str MSG_SELECT_E4                       = _UxGT("Vybrat ") LCD_STR_E4;
  PROGMEM Language_Str MSG_SELECT_E5                       = _UxGT("Vybrat ") LCD_STR_E5;
  PROGMEM Language_Str MSG_ACC                             = _UxGT("Zrychl");
  PROGMEM Language_Str MSG_JUNCTION_DEVIATION              = _UxGT("Odchylka spoje");
  PROGMEM Language_Str MSG_VELOCITY                        = _UxGT("Rychlost");
  PROGMEM Language_Str MSG_ACCELERATION                    = _UxGT("Akcelerace");
  PROGMEM Language_Str MSG_A_RETRACT                       = _UxGT("A-retrakt");
  PROGMEM Language_Str MSG_A_TRAVEL                        = _UxGT("A-přejezd");
  PROGMEM Language_Str MSG_STEPS_PER_MM                    = _UxGT("Kroků/mm");
  PROGMEM Language_Str MSG_A_STEPS                         = LCD_STR_A _UxGT("kroků/mm");
  PROGMEM Language_Str MSG_B_STEPS                         = LCD_STR_B _UxGT("kroků/mm");
  PROGMEM Language_Str MSG_C_STEPS                         = LCD_STR_C _UxGT("kroků/mm");
  PROGMEM Language_Str MSG_E_STEPS                         = _UxGT("Ekroků/mm");
  PROGMEM Language_Str MSG_E0_STEPS                        = LCD_STR_E0 _UxGT("kroků/mm");
  PROGMEM Language_Str MSG_E1_STEPS                        = LCD_STR_E1 _UxGT("kroků/mm");
  PROGMEM Language_Str MSG_E2_STEPS                        = LCD_STR_E2 _UxGT("kroků/mm");
  PROGMEM Language_Str MSG_E3_STEPS                        = LCD_STR_E3 _UxGT("kroků/mm");
  PROGMEM Language_Str MSG_E4_STEPS                        = LCD_STR_E4 _UxGT("kroků/mm");
  PROGMEM Language_Str MSG_E5_STEPS                        = LCD_STR_E5 _UxGT("kroků/mm");
  PROGMEM Language_Str MSG_TEMPERATURE                     = _UxGT("Teplota");
  PROGMEM Language_Str MSG_MOTION                          = _UxGT("Pohyb");
  PROGMEM Language_Str MSG_FILAMENT                        = _UxGT("Filament");
  PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              = _UxGT("E na mm3");
  PROGMEM Language_Str MSG_FILAMENT_DIAM                   = _UxGT("Fil. Prum.");
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E0                = _UxGT("Fil. Prum. ") LCD_STR_E0;
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E1                = _UxGT("Fil. Prum. ") LCD_STR_E1;
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E2                = _UxGT("Fil. Prum. ") LCD_STR_E2;
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E3                = _UxGT("Fil. Prum. ") LCD_STR_E3;
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E4                = _UxGT("Fil. Prum. ") LCD_STR_E4;
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E5                = _UxGT("Fil. Prum. ") LCD_STR_E5;
  PROGMEM Language_Str MSG_FILAMENT_UNLOAD                 = _UxGT("Vysunout mm");
  PROGMEM Language_Str MSG_FILAMENT_LOAD                   = _UxGT("Zavést mm");
  PROGMEM Language_Str MSG_ADVANCE_K                       = _UxGT("K pro posun");
  PROGMEM Language_Str MSG_ADVANCE_K_E0                    = _UxGT("K pro posun ") LCD_STR_E0;
  PROGMEM Language_Str MSG_ADVANCE_K_E1                    = _UxGT("K pro posun ") LCD_STR_E1;
  PROGMEM Language_Str MSG_ADVANCE_K_E2                    = _UxGT("K pro posun ") LCD_STR_E2;
  PROGMEM Language_Str MSG_ADVANCE_K_E3                    = _UxGT("K pro posun ") LCD_STR_E3;
  PROGMEM Language_Str MSG_ADVANCE_K_E4                    = _UxGT("K pro posun ") LCD_STR_E4;
  PROGMEM Language_Str MSG_ADVANCE_K_E5                    = _UxGT("K pro posun ") LCD_STR_E5;
  PROGMEM Language_Str MSG_CONTRAST                        = _UxGT("Kontrast LCD");
  PROGMEM Language_Str MSG_STORE_EEPROM                    = _UxGT("Uložit nastavení");
  PROGMEM Language_Str MSG_LOAD_EEPROM                     = _UxGT("Načíst nastavení");
  PROGMEM Language_Str MSG_RESTORE_FAILSAFE                = _UxGT("Obnovit výchozí");
  PROGMEM Language_Str MSG_INIT_EEPROM                     = _UxGT("Inic. EEPROM");
  PROGMEM Language_Str MSG_MEDIA_UPDATE                    = _UxGT("Aktualizace z SD");
  PROGMEM Language_Str MSG_RESET_PRINTER                   = _UxGT("Reset tiskárny");
  PROGMEM Language_Str MSG_REFRESH                         = LCD_STR_REFRESH  _UxGT("Obnovit");
  PROGMEM Language_Str MSG_WATCH                           = _UxGT("Info obrazovka");
  PROGMEM Language_Str MSG_PREPARE                         = _UxGT("Připrava tisku");
  PROGMEM Language_Str MSG_TUNE                            = _UxGT("Doladění tisku");
  PROGMEM Language_Str MSG_START_PRINT                     = _UxGT("Spustit tisk");
  PROGMEM Language_Str MSG_BUTTON_PRINT                    = _UxGT("Tisk");
  PROGMEM Language_Str MSG_BUTTON_CANCEL                   = _UxGT("Zrušit");
  PROGMEM Language_Str MSG_PAUSE_PRINT                     = _UxGT("Pozastavit tisk");
  PROGMEM Language_Str MSG_RESUME_PRINT                    = _UxGT("Obnovit tisk");
  PROGMEM Language_Str MSG_STOP_PRINT                      = _UxGT("Zastavit tisk");
  PROGMEM Language_Str MSG_OUTAGE_RECOVERY                 = _UxGT("Obnova výpadku");
  PROGMEM Language_Str MSG_MEDIA_MENU                      = _UxGT("Tisknout z SD");
  PROGMEM Language_Str MSG_NO_MEDIA                        = _UxGT("Žádná SD karta");
  PROGMEM Language_Str MSG_DWELL                           = _UxGT("Uspáno...");
  PROGMEM Language_Str MSG_USERWAIT                        = _UxGT("Čekání na uživ...");
  PROGMEM Language_Str MSG_PRINT_PAUSED                    = _UxGT("Tisk pozastaven");
  PROGMEM Language_Str MSG_PRINTING                        = _UxGT("Tisknu...");
  PROGMEM Language_Str MSG_PRINT_ABORTED                   = _UxGT("Tisk zrušen");
  PROGMEM Language_Str MSG_NO_MOVE                         = _UxGT("Žádný pohyb.");
  PROGMEM Language_Str MSG_KILLED                          = _UxGT("PŘERUSENO. ");
  PROGMEM Language_Str MSG_STOPPED                         = _UxGT("ZASTAVENO. ");
  PROGMEM Language_Str MSG_CONTROL_RETRACT                 = _UxGT("Retrakt mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP            = _UxGT("Výměna Re.mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                = _UxGT("Retraktovat  V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            = _UxGT("Zvednuti Z mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         = _UxGT("UnRet mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP    = _UxGT("S UnRet mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        = _UxGT("UnRet  V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF   = _UxGT("S UnRet V");
  PROGMEM Language_Str MSG_AUTORETRACT                     = _UxGT("AutoRetr.");
  PROGMEM Language_Str MSG_FILAMENT_SWAP_LENGTH            = _UxGT("Délka retrakce");
  PROGMEM Language_Str MSG_TOOL_CHANGE                     = _UxGT("Výměna nástroje");
  PROGMEM Language_Str MSG_TOOL_CHANGE_ZLIFT               = _UxGT("Zdvih Z");
  PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPD          = _UxGT("Rychlost primár.");
  PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPD        = _UxGT("Rychlost retrak.");
  PROGMEM Language_Str MSG_NOZZLE_STANDBY                  = _UxGT("Tryska standby");
  PROGMEM Language_Str MSG_FILAMENTCHANGE                  = _UxGT("Vyměnit filament");
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E0               = _UxGT("Vyměnit filament ") LCD_STR_E0;
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E1               = _UxGT("Vyměnit filament ") LCD_STR_E1;
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E2               = _UxGT("Vyměnit filament ") LCD_STR_E2;
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E3               = _UxGT("Vyměnit filament ") LCD_STR_E3;
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E4               = _UxGT("Vyměnit filament ") LCD_STR_E4;
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E5               = _UxGT("Vyměnit filament ") LCD_STR_E5;
  PROGMEM Language_Str MSG_FILAMENTLOAD                    = _UxGT("Zavést filament");
  PROGMEM Language_Str MSG_FILAMENTLOAD_E0                 = _UxGT("Zavést filament ") LCD_STR_E0;
  PROGMEM Language_Str MSG_FILAMENTLOAD_E1                 = _UxGT("Zavést filament ") LCD_STR_E1;
  PROGMEM Language_Str MSG_FILAMENTLOAD_E2                 = _UxGT("Zavést filament ") LCD_STR_E2;
  PROGMEM Language_Str MSG_FILAMENTLOAD_E3                 = _UxGT("Zavést filament ") LCD_STR_E3;
  PROGMEM Language_Str MSG_FILAMENTLOAD_E4                 = _UxGT("Zavést filament ") LCD_STR_E4;
  PROGMEM Language_Str MSG_FILAMENTLOAD_E5                 = _UxGT("Zavést filament ") LCD_STR_E5;
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E0               = _UxGT("Vysunout filament ") LCD_STR_E0;
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E1               = _UxGT("Vysunout filament ") LCD_STR_E1;
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E2               = _UxGT("Vysunout filament ") LCD_STR_E2;
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E3               = _UxGT("Vysunout filament ") LCD_STR_E3;
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E4               = _UxGT("Vysunout filament ") LCD_STR_E4;
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E5               = _UxGT("Vysunout filament ") LCD_STR_E5;
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_ALL              = _UxGT("Vysunout vše");

  PROGMEM Language_Str MSG_INIT_MEDIA                      = _UxGT("Načíst SD kartu");
  PROGMEM Language_Str MSG_CHANGE_MEDIA                    = _UxGT("Vyměnit SD kartu");
  PROGMEM Language_Str MSG_ZPROBE_OUT                      = _UxGT("Sonda Z mimo podl");
  PROGMEM Language_Str MSG_SKEW_FACTOR                     = _UxGT("Faktor zkosení");
  PROGMEM Language_Str MSG_BLTOUCH                         = _UxGT("BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                = _UxGT("BLTouch self-test");
  PROGMEM Language_Str MSG_BLTOUCH_RESET                   = _UxGT("BLTouch reset");
  PROGMEM Language_Str MSG_BLTOUCH_DEPLOY                  = _UxGT("BLTouch vysunout");
  PROGMEM Language_Str MSG_BLTOUCH_SW_MODE                 = _UxGT("SW výsun BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_5V_MODE                 = _UxGT("BLTouch 5V režim");
  PROGMEM Language_Str MSG_BLTOUCH_OD_MODE                 = _UxGT("BLTouch OD režim");
  PROGMEM Language_Str MSG_BLTOUCH_STOW                    = _UxGT("BLTouch zasunout");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY                   = _UxGT("Vysunout Z-sondu");
  PROGMEM Language_Str MSG_MANUAL_STOW                     = _UxGT("Zasunout Z-sondu");
  PROGMEM Language_Str MSG_HOME_FIRST                      = _UxGT("Domů %s%s%s první");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  = _UxGT("Z ofset");
  PROGMEM Language_Str MSG_BABYSTEP_X                      = _UxGT("Babystep X");
  PROGMEM Language_Str MSG_BABYSTEP_Y                      = _UxGT("Babystep Y");
  PROGMEM Language_Str MSG_BABYSTEP_Z                      = _UxGT("Babystep Z");
  PROGMEM Language_Str MSG_BABYSTEP_TOTAL                  = _UxGT("Celkem");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   = _UxGT("Endstop abort");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              = _UxGT("Chyba zahřívání");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD_BED          = _UxGT("Chyba zahř.podl.");
  PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              = _UxGT("REDUND. TEPLOTA");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 = _UxGT("TEPLOTNÍ ÚNIK");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_BED             = _UxGT("TEPL. ÚNIK PODL.");
  PROGMEM Language_Str MSG_ERR_MAXTEMP                     = _UxGT("VYSOKÁ TEPLOTA");
  PROGMEM Language_Str MSG_ERR_MINTEMP                     = _UxGT("NÍZKA TEPLOTA");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_BED                 = _UxGT("VYS. TEPL. PODL.");
  PROGMEM Language_Str MSG_ERR_MINTEMP_BED                 = _UxGT("NÍZ. TEPL. PODL.");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_CHAMBER             = _UxGT("Err: MAXTEMP KOMORA");
  PROGMEM Language_Str MSG_ERR_MINTEMP_CHAMBER             = _UxGT("Err: MINTEMP KOMORA");
  PROGMEM Language_Str MSG_ERR_Z_HOMING                    = _UxGT("Domů XY první");
  PROGMEM Language_Str MSG_HALTED                          = _UxGT("TISK. ZASTAVENA");
  PROGMEM Language_Str MSG_PLEASE_RESET                    = _UxGT("Proveďte reset");
  PROGMEM Language_Str MSG_SHORT_DAY                       = _UxGT("d");
  PROGMEM Language_Str MSG_SHORT_HOUR                      = _UxGT("h");
  PROGMEM Language_Str MSG_SHORT_MINUTE                    = _UxGT("m");
  PROGMEM Language_Str MSG_HEATING                         = _UxGT("Zahřívání...");
  PROGMEM Language_Str MSG_COOLING                         = _UxGT("Chlazení...");
  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_BED_HEATING                   = _UxGT("Zahřívání podložky");
  #else
    PROGMEM Language_Str MSG_BED_HEATING                   = _UxGT("Zahřívání podl.");
  #endif
  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_BED_COOLING                   = _UxGT("Chlazení podložky");
  #else
    PROGMEM Language_Str MSG_BED_COOLING                   = _UxGT("Chlazení podl.");
  #endif
  PROGMEM Language_Str MSG_DELTA_CALIBRATE                 = _UxGT("Delta Kalibrace");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               = _UxGT("Kalibrovat X");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               = _UxGT("Kalibrovat Y");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               = _UxGT("Kalibrovat Z");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          = _UxGT("Kalibrovat Střed");
  PROGMEM Language_Str MSG_DELTA_SETTINGS                  = _UxGT("Delta nastavení");
  PROGMEM Language_Str MSG_DELTA_AUTO_CALIBRATE            = _UxGT("Autokalibrace");
  PROGMEM Language_Str MSG_DELTA_HEIGHT_CALIBRATE          = _UxGT("Nast.výšku delty");
  PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE        = _UxGT("Nast. Z-ofset");
  PROGMEM Language_Str MSG_DELTA_DIAG_ROD                  = _UxGT("Diag rameno");
  PROGMEM Language_Str MSG_DELTA_HEIGHT                    = _UxGT("Výška");
  PROGMEM Language_Str MSG_DELTA_RADIUS                    = _UxGT("Poloměr");
  PROGMEM Language_Str MSG_INFO_MENU                       = _UxGT("O tiskárně");
  PROGMEM Language_Str MSG_INFO_PRINTER_MENU               = _UxGT("Info o tiskárně");
  PROGMEM Language_Str MSG_3POINT_LEVELING                 = _UxGT("3-bodové rovnání");
  PROGMEM Language_Str MSG_LINEAR_LEVELING                 = _UxGT("Lineárni rovnání");
  PROGMEM Language_Str MSG_BILINEAR_LEVELING               = _UxGT("Bilineární rovnání");
  PROGMEM Language_Str MSG_UBL_LEVELING                    = _UxGT("Unified Bed Leveling");
  PROGMEM Language_Str MSG_MESH_LEVELING                   = _UxGT("Mřížkové rovnání");
  PROGMEM Language_Str MSG_INFO_STATS_MENU                 = _UxGT("Statistika");
  PROGMEM Language_Str MSG_INFO_BOARD_MENU                 = _UxGT("Info o desce");
  PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            = _UxGT("Termistory");
  PROGMEM Language_Str MSG_INFO_EXTRUDERS                  = _UxGT("Extrudéry");
  PROGMEM Language_Str MSG_INFO_BAUDRATE                   = _UxGT("Rychlost");
  PROGMEM Language_Str MSG_INFO_PROTOCOL                   = _UxGT("Protokol");
  PROGMEM Language_Str MSG_CASE_LIGHT                      = _UxGT("Osvětlení");
  PROGMEM Language_Str MSG_CASE_LIGHT_BRIGHTNESS           = _UxGT("Jas světla");

  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Počet tisků");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Dokončeno");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Celkový čas");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Nejdelší tisk");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Celkem vytlačeno");
  #else
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Tisky");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Hotovo");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Čas");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Nejdelší");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Vytlačeno");
  #endif

  PROGMEM Language_Str MSG_INFO_MIN_TEMP                   = _UxGT("Teplota min");
  PROGMEM Language_Str MSG_INFO_MAX_TEMP                   = _UxGT("Teplota max");
  PROGMEM Language_Str MSG_INFO_PSU                        = _UxGT("Nap. zdroj");
  PROGMEM Language_Str MSG_DRIVE_STRENGTH                  = _UxGT("Buzení motorů");
  PROGMEM Language_Str MSG_DAC_PERCENT                     = _UxGT("Motor %");
  PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                = _UxGT("Uložit do EEPROM");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER          = _UxGT("VÝMĚNA FILAMENTU");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_PAUSE    = _UxGT("TISK POZASTAVEN");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_LOAD     = _UxGT("ZAVEDENÍ FILAMENTU");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_UNLOAD   = _UxGT("VYSUNUTÍ FILAMENTU");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_HEADER   = _UxGT("MOŽNOSTI OBNOVENÍ:");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_PURGE    = _UxGT("Vytlačit víc");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   = _UxGT("Obnovit tisk");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_NOZZLE          = _UxGT("  Tryska: ");
  PROGMEM Language_Str MSG_RUNOUT_SENSOR                   = _UxGT("Senzor filamentu");
  PROGMEM Language_Str MSG_LCD_HOMING_FAILED               = _UxGT("Parkování selhalo");
  PROGMEM Language_Str MSG_LCD_PROBING_FAILED              = _UxGT("Kalibrace selhala");
  PROGMEM Language_Str MSG_M600_TOO_COLD                   = _UxGT("M600: Moc studený");

  PROGMEM Language_Str MSG_MMU2_CHOOSE_FILAMENT_HEADER     = _UxGT("VYBERTE FILAMENT");
  PROGMEM Language_Str MSG_MMU2_MENU                       = _UxGT("MMU");
  PROGMEM Language_Str MSG_MMU2_WRONG_FIRMWARE             = _UxGT("Aktual. MMU firmware!");
  PROGMEM Language_Str MSG_MMU2_NOT_RESPONDING             = _UxGT("MMU potř. pozornost.");
  PROGMEM Language_Str MSG_MMU2_RESUME                     = _UxGT("Obnovit tisk");
  PROGMEM Language_Str MSG_MMU2_RESUMING                   = _UxGT("Obnovování...");
  PROGMEM Language_Str MSG_MMU2_LOAD_FILAMENT              = _UxGT("Zavést filament");
  PROGMEM Language_Str MSG_MMU2_LOAD_ALL                   = _UxGT("Zavést všechny");
  PROGMEM Language_Str MSG_MMU2_LOAD_TO_NOZZLE             = _UxGT("Zavést do trysky");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT             = _UxGT("Vysunout filament");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT0            = _UxGT("Vysun. filament 1");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT1            = _UxGT("Vysun. filament 2");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT2            = _UxGT("Vysun. filament 3");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT3            = _UxGT("Vysun. filament 4");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT4            = _UxGT("Vysun. filament 5");
  PROGMEM Language_Str MSG_MMU2_UNLOAD_FILAMENT            = _UxGT("Vytáhnout filament");
  PROGMEM Language_Str MSG_MMU2_LOADING_FILAMENT           = _UxGT("Zavádění fil. %i...");
  PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT          = _UxGT("Vytahování fil. ...");
  PROGMEM Language_Str MSG_MMU2_UNLOADING_FILAMENT         = _UxGT("Vysouvání fil....");
  PROGMEM Language_Str MSG_MMU2_ALL                        = _UxGT("Všechny");
  PROGMEM Language_Str MSG_MMU2_FILAMENT0                  = _UxGT("Filament 1");
  PROGMEM Language_Str MSG_MMU2_FILAMENT1                  = _UxGT("Filament 2");
  PROGMEM Language_Str MSG_MMU2_FILAMENT2                  = _UxGT("Filament 3");
  PROGMEM Language_Str MSG_MMU2_FILAMENT3                  = _UxGT("Filament 4");
  PROGMEM Language_Str MSG_MMU2_FILAMENT4                  = _UxGT("Filament 5");
  PROGMEM Language_Str MSG_MMU2_RESET                      = _UxGT("Resetovat MMU");
  PROGMEM Language_Str MSG_MMU2_RESETTING                  = _UxGT("Resetování MMU...");
  PROGMEM Language_Str MSG_MMU2_EJECT_RECOVER              = _UxGT("Vytáhněte, klikněte");

  PROGMEM Language_Str MSG_MIX                             = _UxGT("Mix");
  PROGMEM Language_Str MSG_MIX_COMPONENT_1                 = _UxGT("Komponenta 1");
  PROGMEM Language_Str MSG_MIX_COMPONENT_2                 = _UxGT("Komponenta 2");
  PROGMEM Language_Str MSG_MIX_COMPONENT_3                 = _UxGT("Komponenta 3");
  PROGMEM Language_Str MSG_MIX_COMPONENT_4                 = _UxGT("Komponenta 4");
  PROGMEM Language_Str MSG_MIX_COMPONENT_5                 = _UxGT("Komponenta 5");
  PROGMEM Language_Str MSG_MIX_COMPONENT_6                 = _UxGT("Komponenta 6");
  PROGMEM Language_Str MSG_MIXER                           = _UxGT("Mixér");
  PROGMEM Language_Str MSG_GRADIENT                        = _UxGT("Přechod");
  PROGMEM Language_Str MSG_FULL_GRADIENT                   = _UxGT("Celý přechod");
  PROGMEM Language_Str MSG_TOGGLE_MIX                      = _UxGT("Přepnout mix");
  PROGMEM Language_Str MSG_CYCLE_MIX                       = _UxGT("Střídat mix");
  PROGMEM Language_Str MSG_GRADIENT_MIX                    = _UxGT("Přechod mix");
  PROGMEM Language_Str MSG_REVERSE_GRADIENT                = _UxGT("Opačný přechod");
  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_ACTIVE_VTOOL                  = _UxGT("Aktivní V-nástroj");
    PROGMEM Language_Str MSG_START_VTOOL                   = _UxGT("Spustit V-nástroj");
    PROGMEM Language_Str MSG_END_VTOOL                     = _UxGT("Ukončit V-nástroj");
    PROGMEM Language_Str MSG_GRADIENT_ALIAS                = _UxGT("Alias V-nástroje");
    PROGMEM Language_Str MSG_RESET_VTOOLS                  = _UxGT("Resetovat V-nástroj");
    PROGMEM Language_Str MSG_COMMIT_VTOOL                  = _UxGT("Uložit V-nástroj mix");
    PROGMEM Language_Str MSG_VTOOLS_RESET                  = _UxGT("V-nástroj resetovat");
  #else
    PROGMEM Language_Str MSG_ACTIVE_VTOOL                  = _UxGT("Aktivní V-nástr.");
    PROGMEM Language_Str MSG_START_VTOOL                   = _UxGT("Spustit V-nástr.");
    PROGMEM Language_Str MSG_END_VTOOL                     = _UxGT("Ukončit V-nástr.");
    PROGMEM Language_Str MSG_GRADIENT_ALIAS                = _UxGT("Alias V-nástr.");
    PROGMEM Language_Str MSG_RESET_VTOOLS                  = _UxGT("Reset. V-nástr.");
    PROGMEM Language_Str MSG_COMMIT_VTOOL                  = _UxGT("Uložit V-nás. mix");
    PROGMEM Language_Str MSG_VTOOLS_RESET                  = _UxGT("V-nástr. reset.");
  #endif
  PROGMEM Language_Str MSG_START_Z                         = _UxGT("Počáteční Z:");
  PROGMEM Language_Str MSG_END_Z                           = _UxGT("  Koncové Z:");
  PROGMEM Language_Str MSG_BRICKOUT                        = _UxGT("Brickout");
  PROGMEM Language_Str MSG_INVADERS                        = _UxGT("Invaders");
  PROGMEM Language_Str MSG_SNAKE                           = _UxGT("Sn4k3");
  PROGMEM Language_Str MSG_MAZE                            = _UxGT("Bludiště");

  PROGMEM Language_Str MSG_EXPECTED_PRINTER                = _UxGT("Nesprávná tiskárna");

  #if LCD_HEIGHT >= 4
    // Up to 3 lines allowed
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_2_LINE("Stikněte tlačítko", "pro obnovení tisku"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Parkování..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_3_LINE("Čekejte prosím", "na zahájení", "výměny filamentu"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_3_LINE("Vložte filament", "a stiskněte", "tlačítko..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_2_LINE("Klikněte pro", "nahřátí trysky"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_2_LINE("Čekejte prosím", "na nahřátí tr."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_3_LINE("Čekejte prosím", "na vysunuti", "filamentu"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_3_LINE("Čekejte prosím", "na zavedení", "filamentu"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_2_LINE("Vyčkejte na", "vytlačení"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_3_LINE("Klikněte pro", "ukončení", "vytlačování"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_3_LINE("Čekejte prosím", "na pokračování", "tisku"));
  #else // LCD_HEIGHT < 4
    // Up to 2 lines allowed
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_2_LINE("Stikněte tlač.", "pro obnovení"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Parkování..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_1_LINE("Čekejte..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_1_LINE("Vložte, klikněte"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_2_LINE("Klikněte pro", "nahřátí"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_1_LINE("Nahřívání..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_1_LINE("Vysouvání..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_1_LINE("Zavádění..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_1_LINE("Vytlačování..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_2_LINE("Klikněte pro", "ukončení"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_1_LINE("Pokračování..."));
  #endif // LCD_HEIGHT < 4

  PROGMEM Language_Str MSG_TMC_DRIVERS                     = _UxGT("TMC budiče");
  PROGMEM Language_Str MSG_TMC_CURRENT                     = _UxGT("Proud budičů");
  PROGMEM Language_Str MSG_TMC_HYBRID_THRS                 = _UxGT("Hybridní práh");
  PROGMEM Language_Str MSG_TMC_HOMING_THRS                 = _UxGT("Domů bez senzorů");
  PROGMEM Language_Str MSG_TMC_STEPPING_MODE               = _UxGT("Režim kroků");
  PROGMEM Language_Str MSG_TMC_STEALTH_ENABLED             = _UxGT("StealthChop povolen");
  PROGMEM Language_Str MSG_SERVICE_RESET                   = _UxGT("Reset");
  PROGMEM Language_Str MSG_SERVICE_IN                      = _UxGT(" za:");
  PROGMEM Language_Str MSG_BACKLASH                        = _UxGT("Vůle");
  PROGMEM Language_Str MSG_BACKLASH_A                      = LCD_STR_A;
  PROGMEM Language_Str MSG_BACKLASH_B                      = LCD_STR_B;
  PROGMEM Language_Str MSG_BACKLASH_C                      = LCD_STR_C;
  PROGMEM Language_Str MSG_BACKLASH_CORRECTION             = _UxGT("Korekce");
  PROGMEM Language_Str MSG_BACKLASH_SMOOTHING              = _UxGT("Vyhlazení");
}
