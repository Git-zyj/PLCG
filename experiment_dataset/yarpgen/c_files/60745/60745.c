/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [2] [2] [2] [i_0] [i_4] = ((-(((arr_6 [i_0] [1]) + (arr_6 [i_0] [2])))));
                                var_10 = (max(var_10, var_4));
                                var_11 = (((max((arr_3 [i_0] [5] [i_0]), var_9)) + (((max((arr_6 [i_0] [i_1]), (-2147483647 - 1)))))));
                                var_12 = (((-(9223372036854775796 + var_5))));
                            }
                        }
                    }
                }
                var_13 = (min(9223372036854775807, (+-69)));
                arr_13 [i_0] [i_1] = ((-(((var_5 | 1207994295) ? var_0 : ((max((arr_9 [i_1] [i_0] [1]), var_1)))))));
                var_14 = (min(var_14, ((((arr_10 [i_0] [i_0] [1] [i_1] [i_1]) | (((min(var_0, var_7)) & (var_0 + 4858783065920319727))))))));
                var_15 = (min(var_15, -var_3));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {
                    var_16 = (min(var_16, 18198318232694800453));
                    var_17 = (min((((arr_18 [i_6]) + -var_1)), (((arr_16 [i_5 + 1] [i_6 + 1] [i_7 - 2]) + (arr_14 [i_6 - 2] [i_5 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
