/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (min(((min(-2018201438, 32336))), var_9));
    var_15 = (min(var_15, 1));
    var_16 = (var_13 + 2425593254);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (min(var_11, ((var_8 ? ((min(var_4, 15990))) : (min(var_5, 0))))));
        var_17 |= (((min(var_6, (arr_1 [i_0 + 1]))) >= (((-309598879 + (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 = var_9;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_2] [0] [i_3] = (((arr_10 [i_1] [i_2] [i_2]) ? -109 : (~var_3)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_19 = (((((arr_9 [i_5] [i_2]) ? (arr_8 [i_2]) : var_12)) >= -20794));
                                arr_19 [i_1] [i_2] [i_1] [i_1] [16] |= (((arr_6 [i_2]) ? ((var_8 ? (arr_6 [i_1]) : (arr_6 [i_1]))) : (min((arr_6 [i_4]), var_6))));
                            }
                        }
                    }
                    arr_20 [i_2] = (min((min((((var_10 >= (arr_5 [7] [i_3])))), (((arr_4 [i_1]) ? 233 : (arr_4 [i_1]))))), (((~(((arr_8 [i_3]) | 0)))))));
                }
            }
        }
    }
    #pragma endscop
}
