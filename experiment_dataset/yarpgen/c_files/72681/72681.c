/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = (max(var_3, var_0));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (((((((min((arr_0 [6]), -698695545))) ? (-5558 || 5561) : (~-108474600)))) ? (((arr_1 [6]) * 765791284)) : ((max((max(-5562, var_11)), (((var_7 < (arr_1 [2])))))))));
        arr_2 [i_0] = (((((35357 ? -765791284 : var_17)) ? var_18 : ((765791284 | (-2147483647 - 1))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            arr_14 [i_1] [i_2] [i_3 - 1] [i_4] [i_1] = (arr_9 [i_1] [i_5]);
                            arr_15 [i_5] [i_1] [i_3] [i_1] [i_1] = (((arr_9 [i_1] [i_5 - 3]) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 1])));
                            arr_16 [17] [i_2] [i_2 - 2] [15] [i_1] = (~87);
                        }
                        arr_17 [i_1] [i_1] [10] = ((((((var_16 == var_4) ? (((var_13 ? var_4 : (arr_8 [15] [i_1] [i_3 - 1] [i_3])))) : (max((arr_5 [i_1]), -242363807))))) ? (765791284 << 1) : ((((!(arr_7 [10])))))));
                    }
                    arr_18 [i_1] [i_1] [i_3 - 1] [i_1] = (max(159, (((arr_9 [i_1] [i_1]) ? (arr_9 [i_1] [i_1]) : (arr_11 [i_1] [i_3] [i_2 + 1] [i_1 + 3] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
