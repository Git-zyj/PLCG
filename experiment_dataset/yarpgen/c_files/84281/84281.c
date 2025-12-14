/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_17 = (min((-32767 - 1), 28));
                        var_18 = (((((18446744073709551615 ? (arr_0 [i_0] [i_1 + 2]) : (arr_0 [i_0] [i_1 + 2])))) ? ((max(32767, var_15))) : (arr_0 [i_0] [i_1 + 2])));
                        var_19 = (max((((((7 <= (arr_4 [i_0] [i_1] [i_0]))) && (arr_5 [i_0])))), (max(1239779125, (arr_3 [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_20 = ((((((min((arr_12 [15] [18] [0] [i_4]), var_0))) ? (min(var_0, 127)) : (((var_7 ? (arr_1 [i_0] [i_1]) : var_14)))))) ? (max(0, var_2)) : (((-6042323286592453659 ? (((arr_6 [i_4] [i_2] [i_1 + 3] [i_0]) + (arr_2 [i_0]))) : (19648 / 28)))));
                        arr_14 [11] [i_1] [i_2] [i_0] = ((((((min((arr_12 [i_0] [i_1] [i_2] [i_4]), (arr_8 [i_0] [i_0])))) ? (arr_8 [i_0] [i_0]) : var_12)) & var_9));
                    }
                    var_21 = 108;
                    var_22 = ((((((!239) ? var_7 : 9619))) ? (((arr_1 [i_1 - 2] [i_1]) + (arr_11 [16] [i_1] [i_1 + 3] [i_2]))) : (arr_3 [i_0])));
                    var_23 = (min(var_23, (((((((arr_4 [i_1 + 1] [i_1] [i_1 + 2]) ? var_15 : (arr_4 [i_1 - 2] [4] [i_1 - 2])))) ? ((var_6 & (arr_4 [i_1 + 2] [i_1 + 1] [i_1 + 2]))) : (((arr_4 [i_1 + 2] [i_1] [i_1 + 2]) + 13090326462580949120)))))));
                    arr_15 [i_0] [i_1] [i_0] [i_2] = max((!9223372036854775807), (var_5 >> 11));
                }
            }
        }
    }
    var_24 = (((((var_14 < (var_9 & 0)))) >> (((((-1227952352 ? -109 : -86)) > ((max(var_7, var_3))))))));
    var_25 = (48876 == 511);
    var_26 = 2892617376;
    #pragma endscop
}
