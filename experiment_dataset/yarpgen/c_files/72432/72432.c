/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (!var_4);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = ((((((arr_1 [5]) ? -var_6 : var_3))) ? ((((min(var_3, (arr_1 [12])))) ? var_5 : (arr_1 [11]))) : (~var_4)));
                    var_14 &= ((((((var_10 / var_8) ? var_3 : ((var_5 ? var_3 : var_9))))) ? ((((max(var_10, (arr_5 [7] [7] [7])))) ? (((var_11 ? var_5 : var_1))) : var_10)) : ((((((var_6 ? var_4 : var_0))) ? ((max(var_5, (arr_1 [i_2])))) : (max((arr_0 [i_0]), var_1)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 |= var_0;
                                var_16 &= -var_0;
                            }
                        }
                    }
                    var_17 = (arr_7 [i_0] [i_1]);
                    arr_14 [i_2] [i_2] = ((var_9 ? (((var_2 / var_10) * (((var_4 ? var_11 : (arr_7 [i_2 - 3] [12])))))) : ((-(arr_8 [i_2] [i_2] [14] [i_2] [9])))));
                }
            }
        }
        var_18 = var_2;
    }
    var_19 += (((min(((max(var_9, var_0))), -var_0))) ? ((-((var_1 ? var_3 : var_3)))) : var_11);
    var_20 = (((((~(var_9 ^ var_3)))) ? ((((var_2 + 2147483647) >> (((~var_0) + 24100))))) : (min((~var_5), ((var_11 ? var_7 : var_1))))));
    #pragma endscop
}
