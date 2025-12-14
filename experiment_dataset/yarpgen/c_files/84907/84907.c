/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((-var_0 ? (max(var_13, (var_5 / var_8))) : var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((max(var_4, (~34))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (min((((arr_13 [i_0] [i_1 - 2] [i_2] [i_3 + 1] [i_1 - 2] [i_1 - 2] [i_3 - 1]) ? 43 : (min(var_1, (arr_9 [i_0] [i_1] [i_0] [i_2]))))), (((~(222 / 230))))));
                                var_21 = (min(var_21, ((+((((((arr_11 [1] [i_1 + 1] [10] [i_3] [i_0]) ? (arr_5 [i_0] [i_1] [i_3] [i_4]) : 1))) ? -221 : var_2))))));
                            }
                        }
                    }
                    var_22 = (max(var_22, 222));
                }
            }
        }
    }
    var_23 *= (max(((213 ? 43 : var_11)), (((87 ? var_1 : 35)))));
    #pragma endscop
}
