/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 171;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [8] [8] [i_0] = (min((arr_1 [i_0] [i_0 + 1]), ((((arr_1 [i_0] [i_0 - 1]) < var_4)))));
                var_21 = ((var_15 ? var_4 : ((((arr_1 [i_0] [i_1]) ? (min(var_16, 0)) : ((((arr_2 [i_0]) != (arr_5 [i_0])))))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_22 &= var_19;
                    var_23 *= ((max(((~(arr_8 [i_2] [i_2])), ((var_19 << (((arr_8 [i_2] [i_1]) - 9147))))))));
                    arr_10 [i_0] [i_1] [i_0] = var_12;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] = ((-(((((arr_2 [i_0]) ? (arr_0 [i_0]) : var_6))))));
                    var_24 = (var_12 > 10);
                    arr_14 [i_0 + 2] [i_1] [i_0] [i_0] = (arr_11 [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_25 = ((((~(arr_4 [i_0 + 2] [i_4]))) + (arr_4 [i_0 - 2] [i_3])));
                                var_26 = ((var_17 ? var_18 : (((0 ? ((min(25, 16364))) : 0)))));
                            }
                        }
                    }
                }
                var_27 |= var_6;
            }
        }
    }
    #pragma endscop
}
