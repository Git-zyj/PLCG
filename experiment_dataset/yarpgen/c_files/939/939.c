/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((-1 ? -14 : -1))) >= ((((min(var_8, 1))) ? var_17 : (((min(var_7, var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (((!var_9) || ((((arr_1 [i_1 - 1] [i_1 + 1]) + (arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                var_20 = (min((min((max(0, var_0)), 0)), (max(((max((arr_1 [i_0] [i_0]), 55995))), ((1 / (arr_1 [15] [i_1])))))));
                var_21 = (((((var_10 == -14355) | ((max(1, var_5))))) >= (((!((((arr_3 [i_0]) ? (arr_4 [i_1]) : var_14))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 = (((!(((~(arr_4 [i_3])))))));
                            arr_11 [i_0] [i_0] [i_2] [i_0] = (max((((!(((65336 ? 9223372036854775807 : 92)))))), (((min((arr_4 [i_0]), var_16)) + 0))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_23 ^= (arr_7 [i_3 + 2] [i_1 - 1] [i_1]);
                                var_24 = 2;
                            }
                            var_25 *= (max(((-14349 / (arr_5 [i_1 - 1] [i_1 + 1] [i_2] [i_3 + 1]))), ((197 ? (arr_5 [i_1 - 1] [i_1 + 1] [i_3] [i_3 + 4]) : (arr_5 [i_1 - 1] [i_1 - 1] [i_2] [i_3 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (((((((var_16 ? 17 : -16)) >= 5230502903928367103))) / var_17));
    #pragma endscop
}
