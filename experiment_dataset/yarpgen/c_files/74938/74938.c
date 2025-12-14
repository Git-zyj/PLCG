/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((!((max(4090668885, var_4))))) ? (((~var_3) ? (min(4090668885, var_2)) : var_10)) : (var_2 < var_8)));
    var_14 = (min(var_14, var_0));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 ^= (max((var_1 != var_9), (max((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_3 [i_0] = (min(var_12, (((max(3999058655127297177, var_5)) * (!var_10)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_16 = (max(var_16, (350244383273463917 == 3206112936)));
                                var_17 = (min(var_17, -4967880193744001367));
                                arr_16 [i_1] [i_2] [i_3] [i_1] [7] = ((((((arr_8 [i_5 - 1] [i_3 + 3]) ? 5651988544430400137 : (arr_13 [i_5 - 2] [i_5 - 2] [i_5] [i_4 - 1] [i_3 - 1])))) ? (min((arr_13 [i_1] [i_2] [i_1] [i_4] [i_5]), (arr_9 [i_1] [i_1]))) : (arr_12 [i_1] [i_1] [5] [i_1] [i_1] [i_1])));
                                var_18 &= 350244383273463913;
                            }
                        }
                    }
                }
                var_19 += (((arr_5 [i_2]) > (arr_15 [i_1])));
                var_20 &= (((204298387 ? var_10 : (arr_8 [i_1] [i_1]))));
            }
        }
    }
    #pragma endscop
}
