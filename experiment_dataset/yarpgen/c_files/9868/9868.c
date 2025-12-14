/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 ^= (((((max(7, -2202712395648930927)))) ? var_14 : 1));
                var_20 = (min(var_20, ((min((((var_11 ? (arr_2 [i_0]) : 1))), (((((1 ? (arr_2 [i_0]) : 83))) ? (min(6057491821672764165, 249)) : (((max((arr_2 [i_0]), 1)))))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((arr_3 [i_0] [i_0]) ? (max(5056313115248942339, (((arr_3 [i_0] [i_0]) ? 12720116853119555702 : -1069185333)))) : ((min(((29660 ? var_7 : var_4)), (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                                var_21 = (-127 - 1);
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_2] = 239;
                                var_22 = (max(var_22, var_8));
                                arr_19 [i_2] [i_1] [i_1] [i_1] = ((((var_13 ? var_2 : -852286115))));
                            }
                        }
                    }
                    var_23 = var_12;
                }
            }
        }
    }
    var_24 = var_15;
    var_25 = (min(((((var_11 ? 1 : var_12)))), var_6));
    #pragma endscop
}
