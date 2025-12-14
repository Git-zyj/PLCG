/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0] = 1848069876;
                                var_18 = (min(var_18, var_4));
                                arr_14 [i_0 + 1] [i_0] = (-9223372036854775807 - 1);
                                arr_15 [2] [i_1] [i_2] [2] [i_3 + 1] [i_3] [i_0] = ((((((((arr_11 [i_0] [i_0] [i_1] [i_1] [i_3 + 3] [i_0] [i_4]) ^ 32704))) ? (arr_2 [i_4 + 1]) : ((var_14 << (var_12 - 143))))) >= 65535));
                            }
                        }
                    }
                    var_19 = (min(var_19, 3856000991));
                    var_20 -= ((!((((((arr_6 [i_0 + 1] [i_0] [i_1] [i_0]) ? 8712248276724292536 : 18)) & -1)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_21 = ((((((arr_18 [i_0] [i_0] [i_2] [i_2]) * 174))) || var_0));
                                var_22 = (((((var_4 ? var_5 : var_13))) ? (((!var_11) ? 1197491540 : (((127 ? -19 : 39494))))) : ((((!(!var_4)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, var_15));
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_24 = var_2;
                        var_25 = -13;
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_26 -= var_5;
                        var_27 = ((!((!(arr_27 [i_7] [i_7 - 4] [i_11])))));
                    }
                    var_28 -= (min(((~(arr_31 [i_7] [i_8] [i_8] [i_8]))), (((-1 ? 33695 : 7)))));
                }
            }
        }
    }
    #pragma endscop
}
