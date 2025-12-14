/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((-((32767 ? var_8 : (32767 > 32767))))))));
    var_11 -= (min(var_3, var_7));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_12 = var_2;
        var_13 = (min(var_13, ((((arr_0 [i_0 + 2]) ? var_5 : var_7)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 -= (201500259 & -32767);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 3] [i_0 - 3] [i_2] [i_0 - 3] [i_4 + 1] = (arr_5 [i_0] [i_0] [i_0]);
                                var_15 += (((((var_9 ? var_3 : var_8))) ? var_2 : (arr_9 [i_0] [i_0] [i_2] [i_3 - 1] [6] [i_4 - 1])));
                                arr_15 [i_3] [16] [22] [i_3 - 2] [i_2] [i_0] [i_4] = ((!(var_6 < var_6)));
                                arr_16 [10] [i_1] [10] [i_3 + 1] [i_4] = (~var_9);
                            }
                        }
                    }
                    var_16 = var_2;
                }
            }
        }
        var_17 = ((32767 == (arr_3 [i_0 + 2])));
        var_18 &= ((var_3 ? ((512673154 ? 4294967295 : var_8)) : 63));
    }
    for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_19 = ((!((min(1585, (arr_11 [i_5] [i_5 + 2] [i_5 - 2] [15] [i_5 + 1] [i_5 + 1] [i_5 + 1]))))));
        arr_19 [i_5] = ((((max((~42005), ((max(var_5, -13)))))) ? ((((var_9 ? 360044038 : var_9)) / var_1)) : var_1));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_20 = (max(var_4, 85));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_21 = -1;
                                var_22 += -1960741361;
                                var_23 -= ((var_8 < (arr_5 [i_5 - 3] [i_5 - 1] [5])));
                            }
                        }
                    }
                }
            }
        }
        var_24 &= (((((((min(-63, var_8))) ? (1 < -85) : ((var_3 ? var_0 : 65535))))) ? (((var_8 && var_6) & var_7)) : var_2));
        var_25 = (min(var_25, (((-63 ? -85 : 0)))));
    }
    #pragma endscop
}
