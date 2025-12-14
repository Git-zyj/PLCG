/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = (min((((((var_15 ? var_17 : var_17)) / ((var_5 ? var_13 : var_3))))), var_3));
    var_22 += (((max((min(2929635036, 1)), var_0))) ? ((((!(((var_9 ? var_11 : var_6))))))) : ((var_2 & (((var_11 ? 1 : 218))))));
    var_23 -= (max((0 <= var_9), ((((min(var_5, 18446744073709551595))) ? ((var_0 ? var_12 : var_15)) : (171 + 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_4] [i_4] [i_3] [i_4] [i_2] = ((var_1 <= (arr_2 [i_3])));
                                var_24 = (min(var_24, (((arr_3 [i_0] [i_3]) ? (var_11 == var_10) : var_10))));
                                arr_14 [i_0] [i_1] [i_4] [i_3] [i_4 + 1] = var_11;
                            }
                        }
                    }
                    var_25 = (min(var_25, ((((((118 & -6669704994301257854) ? ((var_18 ? var_16 : var_16)) : (arr_11 [i_0] [i_0] [i_1] [i_0] [i_2]))) == -1)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_5] = ((!(arr_16 [i_0] [i_0] [i_1] [i_2] [i_5 - 1] [i_6])));
                                var_26 = (min(var_26, (arr_4 [i_1] [i_2] [i_5 - 1] [i_6])));
                                var_27 = (min(var_27, var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
