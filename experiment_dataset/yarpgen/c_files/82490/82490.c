/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_0 ? (!var_9) : 0)) << (((((min(17503628773732005850, var_8)) ^ var_6)) - 1923669434))));
    var_18 = (min(((381 ? var_12 : var_16)), (((max(var_9, var_14))))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_19 = ((var_9 - (min(3900672784, 576460752303423487))));
        arr_3 [19] = 0;
        var_20 = ((((((((arr_0 [i_0]) * var_14)) + (arr_0 [i_0])))) ? ((27746 ? 3135254300 : 3540)) : (arr_2 [i_0 - 1])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            {
                var_21 = (arr_2 [i_1]);
                var_22 = max(4202641911, (arr_6 [i_2 + 2] [i_2 + 3]));
                var_23 = (max(var_2, 0));
                /* LoopNest 3 */
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1] [1] = (max(-13802, ((207 ? -3546 : 1))));
                                arr_17 [i_1] [i_3] [i_2 + 2] [i_3 + 3] [i_2 + 2] [i_3] = (max((min(((~(arr_4 [i_1]))), 1118178382)), var_5));
                                arr_18 [i_3] [i_3] [i_3 + 2] [i_4] [i_5] [i_4] [9] = ((((((arr_0 [i_1]) / var_14))) ? (arr_0 [9]) : ((((!(arr_0 [i_4])))))));
                            }
                        }
                    }
                }
                var_24 *= (((((((-(arr_7 [i_2])))) | (min((arr_5 [i_1] [i_2 + 2]), (arr_2 [i_2]))))) % (((((var_5 ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_2]) : -1)))))));
            }
        }
    }
    #pragma endscop
}
