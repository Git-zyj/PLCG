/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((-((min(-109, var_1)))))) ? ((((((256 ? -12187 : 16)) >= (var_7 > 12207))))) : ((-54 ? 12186 : 776931463))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] &= (((((16383 ? 117 : 255))) ? 4294967295 : (max(-1440234624, (~772502563)))));
                arr_7 [i_0] = (((((arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 1]) | ((max(var_17, var_12)))))) ? ((((~61) ? (12138 * -16387) : ((17896239167435583525 ? -1 : 4294967274))))) : (((((3522464725 ? -17 : 58))) ? (((772502558 ? (arr_2 [i_0 - 1]) : (arr_5 [i_0] [i_0] [i_0])))) : var_14)));
                var_20 = (max(((var_6 ? var_11 : (-127 - 1))), ((min(var_10, 32978)))));
                var_21 = (((((-2147483644 ? -536870400 : (((arr_5 [i_1 + 1] [i_1 + 1] [8]) ? (arr_1 [i_1]) : var_2))))) ? (((((8388352 ? (arr_5 [i_1 + 1] [8] [8]) : (arr_5 [i_0] [i_0 + 1] [i_0])))) ? (12187 + -1) : ((20767 ? -2147483644 : -1043629120)))) : ((2147483634 ? ((var_2 ? (arr_1 [i_0]) : 0)) : -12174))));
                arr_8 [i_0 - 1] [i_0 - 1] [4] = ((536870425 != (-9223372036854775807 - 1)));
            }
        }
    }
    #pragma endscop
}
