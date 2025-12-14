/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_11;
    var_16 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_1] = (((((min((arr_2 [i_0 - 4] [i_1]), 928409833705773894)) ^ (arr_2 [i_0 - 2] [3])))) ? (arr_0 [i_0]) : (max((arr_1 [i_0 - 4]), (17518334240003777740 < 928409833705773892))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (max(9223372036854775807, (max((arr_10 [i_0] [i_0 - 1] [i_1] [i_3 + 1]), (arr_7 [i_0] [i_0])))));
                                var_18 |= (min((arr_12 [i_3 + 2] [i_1] [i_3 - 3] [i_1] [i_0]), (min((max((arr_2 [i_0 - 1] [i_1]), 17518334240003777713)), ((((arr_0 [i_4]) ? (arr_6 [i_0 - 3] [i_0 - 3] [4]) : (arr_3 [i_3 - 1] [i_1]))))))));
                                var_19 |= ((-(max((arr_4 [i_1] [i_3 + 1] [i_3 + 2]), 576460614864470016))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
