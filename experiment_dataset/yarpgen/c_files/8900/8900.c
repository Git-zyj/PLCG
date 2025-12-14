/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~var_7) ? 16988 : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = ((~(((var_0 <= (arr_6 [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_2 - 1]))))));
                    var_15 = (0 || 57526);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_16 = var_11;
                    var_17 = (~var_12);

                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        arr_18 [i_5] [i_4] [i_5] [i_4] [i_5] [i_6] = (((arr_12 [i_6] [i_5] [i_3]) >= (arr_17 [i_4] [i_4] [i_4 + 1] [i_4 - 1])));

                        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_18 = ((64848 ? (arr_14 [i_3] [i_4] [i_5] [i_6]) : (((arr_10 [i_5] [i_3]) & var_1))));
                            var_19 = 52474;
                            var_20 = ((((((arr_17 [i_3] [i_3] [i_5] [i_7]) ? var_2 : -24754))) ? ((var_4 ? (arr_20 [i_3] [i_4] [i_3] [i_6] [i_6] [i_6]) : 15862)) : ((var_4 >> (((arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) - 9999))))));
                            arr_23 [i_3] [i_3] [i_5] [i_6 + 1] [i_6 + 1] [i_7] = (62397 <= -1271795661);
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_21 = (max(var_21, ((((arr_25 [i_3]) & (arr_26 [i_8] [i_6] [i_5] [i_3] [i_4] [i_3] [i_3]))))));
                            arr_27 [i_4] [i_4] [i_5] [i_6] [i_8] [i_3] [i_3] = (((arr_25 [i_8 - 1]) > (arr_11 [i_6 + 1] [i_6])));
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_30 [i_4 + 1] [i_4 + 1] = ((var_7 >= ((23846 ? var_6 : -4079))));
                            arr_31 [i_6] [i_6] [i_5] [i_4 + 1] [i_3] = ((arr_28 [i_3] [i_4] [i_5] [i_6] [i_9]) ? (arr_21 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_5]) : var_3);
                            arr_32 [i_3] = ((~((var_11 ? 128 : 127))));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_36 [i_6] [i_6 - 1] [i_4] [i_6 - 1] [i_10] = -var_0;
                            var_22 ^= (arr_11 [i_6] [i_5]);
                            var_23 = (((((((arr_10 [i_10] [i_3]) + 2147483647)) >> (var_3 + 9058805745538335432))) / (((var_6 && (arr_34 [i_5] [i_5] [i_5] [i_6 + 2] [i_5]))))));
                        }
                    }
                    var_24 = (((((-1570312286 & (arr_14 [i_3] [i_3] [i_3] [i_3])))) + (arr_11 [i_5] [i_4 + 1])));
                }
            }
        }
        arr_37 [i_3] = var_12;
        arr_38 [i_3] [i_3] = (((((arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) + (arr_16 [i_3] [i_3] [i_3] [i_3]))) - (!var_12)));
    }
    var_25 -= (((((min(134201344, 63)) + -32201)) == (((~8188) ? ((min((-127 - 1), 31))) : ((-109 ? 170 : var_11))))));
    var_26 = (max((((!(((-16 ? 7 : var_4)))))), (max(54, -8216524459886511936))));
    #pragma endscop
}
