/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_11 |= arr_1 [8];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = ((!((min(((min(1012070334, (arr_4 [i_0])))), (arr_6 [i_0 - 1] [i_1 + 2] [i_1] [i_3]))))));
                            var_13 = ((~(((((-8581342673430595058 ? 1012070334 : 1012070320))) - var_3))));
                            var_14 ^= ((((var_0 ? ((var_5 ? (arr_6 [i_0] [i_0] [1] [15]) : var_6)) : (((-1012070342 ? (arr_2 [9]) : -1012070352)))))) ? var_6 : ((max((arr_2 [i_0]), (arr_5 [i_0] [i_2] [i_1 - 3])))));
                            arr_8 [i_1] [i_1] = (!-75);
                            var_15 = arr_2 [i_2];
                        }
                    }
                }
                var_16 ^= (arr_6 [2] [i_1] [i_0] [i_0 + 3]);
                var_17 = (max(var_17, ((max((min((arr_6 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_1 + 2]), (arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_1 - 2]))), var_3)))));
                var_18 *= -23;
            }
        }
    }
    var_19 = ((!((min((~var_10), (~67))))));
    var_20 = (-(((!((max(4702246921208923912, 7465156507274832467)))))));
    var_21 = var_10;
    var_22 = ((-77 ? ((((!(var_6 != var_6))))) : (max(var_3, ((-1012070335 ? var_3 : var_9))))));
    #pragma endscop
}
