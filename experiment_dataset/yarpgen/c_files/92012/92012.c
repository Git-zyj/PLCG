/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (max(var_12, var_8));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_13 = ((((((arr_3 [i_1] [i_1] [i_1]) >> (7927270305152523876 - 7927270305152523862)))) ? var_9 : (min((min(6001498349729304908, 8028490277735659530)), var_6))));
                                var_14 ^= (-8028490277735659536 / 6725);
                                var_15 = (max(var_15, (((~((((!(arr_7 [i_0] [i_1] [i_2] [6]))) ? (((max((arr_8 [i_0] [i_1] [i_1] [i_3]), (arr_2 [i_1] [10]))))) : (max(6987699978800618739, var_6)))))))));
                                var_16 = (max(var_16, (arr_2 [5] [i_4])));
                                arr_13 [i_0] [i_3] [i_0] [i_0] [i_0] = (max(var_3, (((min(var_4, 965602140)) * var_4))));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                var_17 = (max(var_17, var_6));
                                arr_16 [13] [i_3] [i_0] = (min(2523584859, var_1));
                            }

                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 11;i_6 += 1)
                            {
                                arr_20 [i_6] [i_0] [i_3] [i_1] [i_3] [3] [i_0] = ((!((((arr_19 [i_3] [i_3] [2] [i_3]) ? 6001498349729304908 : var_5)))));
                                var_18 = var_3;
                            }
                        }
                    }
                }
                arr_21 [i_1] &= (!1548416067);
                var_19 ^= (arr_19 [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_20 &= ((!(~var_10)));
    #pragma endscop
}
