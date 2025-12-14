/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (!-3305);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] &= ((25349 ? -25330 : 137));
                            var_14 ^= (!25349);

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 10;i_4 += 1)
                            {
                                var_15 = (arr_1 [i_0] [i_1]);
                                arr_15 [i_0] [i_1] [i_2] [i_1] [0] = (arr_3 [i_0] [i_1]);
                                var_16 = (max(var_16, (arr_8 [i_0] [i_0])));
                                var_17 = (min(var_17, var_11));
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_0] [i_1] = (((min(var_3, (((arr_2 [i_0] [i_0]) ? 4251779767639125326 : var_12)))) <= (arr_1 [i_0] [i_1])));
            }
        }
    }
    var_18 += (!var_7);
    var_19 = (((!-3309) ? var_9 : var_2));
    var_20 = -3305;
    #pragma endscop
}
