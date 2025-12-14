/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((-55 ? 2078043816 : 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 -= ((((var_0 / 1920) ? ((var_10 ? 1 : (arr_0 [i_1] [6]))) : (((var_11 << (((((arr_10 [i_2]) + 654236519)) - 61))))))));
                            var_19 = ((min(var_6, ((-(arr_2 [i_3] [i_0]))))));
                        }
                    }
                }
                var_20 = ((~((var_8 ? (arr_9 [i_1] [1] [i_0] [i_0]) : (((9008066958004744116 ? (arr_1 [i_1] [i_0]) : 0)))))));
                var_21 = (max((arr_1 [i_1] [i_0]), (0 >= 9008066958004744116)));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((!1) || (((((min((arr_12 [1] [i_4] [i_6]), var_1))) ? (max(var_6, var_5)) : 55006))))))));
                                arr_18 [i_1] [1] [i_1] [i_5] [i_1] |= (min(-var_16, (!-var_5)));
                                var_23 = (max(var_23, var_3));
                                var_24 -= (arr_0 [i_0] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
