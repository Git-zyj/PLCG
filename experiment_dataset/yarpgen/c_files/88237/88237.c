/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [12] [12] |= (arr_1 [1]);
                var_11 = 0;

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_12 = (((arr_4 [i_0] [i_0] [i_1]) * (((288230374004228096 / var_3) * (8315599110864326927 / var_10)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_1 + 1] [i_2] |= ((((min(1, 1))) ? (arr_2 [i_0] [i_0] [1]) : (((((min((arr_7 [i_0] [i_0] [i_2]), 60152))) && (-5547 < 1035489051002753027))))));
                                var_13 |= (((!1035489051002753027) ? (arr_2 [i_0] [i_1] [0]) : ((((max(24168, 17411255022706798588))) ? var_5 : (max((arr_1 [i_2]), 1035489051002753047))))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_2] [8] &= (+(((((arr_0 [i_2] [i_3]) ? 1 : var_0)) + (arr_0 [i_2] [i_1]))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_0] = ((((((min(var_5, 6022153457994261920))) ? var_0 : (arr_0 [i_0] [i_0])))) ? (((((5212970289046553717 + (arr_8 [i_0] [i_2] [i_0])))) ? (1 <= 17411255022706798589) : (max((arr_0 [i_0] [i_0]), var_3)))) : (-1 & var_3));
                    arr_17 [i_2] [i_0] [i_2] [0] &= ((max((min(17411255022706798588, var_3)), (arr_13 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 2]))));
                    arr_18 [i_1 + 2] [i_0] [i_0] = (min((((((55641 ? var_2 : var_7))) ? (min((arr_10 [i_0] [i_0] [i_2] [i_0]), var_6)) : (~17411255022706798588))), ((max((arr_10 [i_1 + 1] [i_0] [i_1 + 3] [i_1 - 1]), var_9)))));
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    var_14 = var_8;
                    arr_22 [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_0]);
                    arr_23 [i_0] [i_0] [i_0] = ((-(min(((255 ? 1 : 7100)), ((min((arr_2 [7] [7] [5]), 0)))))));
                }
            }
        }
    }
    var_15 = var_2;
    #pragma endscop
}
