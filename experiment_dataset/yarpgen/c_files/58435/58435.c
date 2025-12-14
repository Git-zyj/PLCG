/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_3 / var_9) ? ((var_9 ? 9223372036854775807 : var_10)) : (var_10 / var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = arr_2 [i_0] [i_0];
                var_14 = ((((max(446015080, 1))) ? (((-(arr_2 [i_1 + 1] [i_1 - 2])))) : (((arr_3 [9]) | (arr_0 [i_1 - 2] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = ((~(((var_5 ? 1 : (arr_4 [9] [i_1]))))));
                                var_16 = ((((212 ? (arr_0 [i_1 - 2] [i_1 + 1]) : var_0)) * ((((((max(var_9, (arr_2 [i_3] [i_3])))) || 0))))));
                            }
                        }
                    }
                }
                var_17 = (max(var_17, var_5));
            }
        }
    }
    #pragma endscop
}
