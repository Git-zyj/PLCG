/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (max(((((-770106541 | var_2) ? (min((arr_3 [i_0] [0]), 6)) : ((((((arr_6 [i_0] [i_0] [13]) + 2147483647)) >> (var_4 - 2060798392))))))), 15876547788370753804));
                    var_12 &= ((var_5 ? ((((arr_1 [i_0]) + var_4))) : (!var_0)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = var_8;
                                arr_14 [6] [i_4] = ((((var_8 >> (((arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [8]) - 13302)))) ^ ((-(-32 + 31)))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (min(31, ((var_1 + (((arr_13 [i_0] [i_4] [i_2 + 3] [3] [i_4]) + (arr_7 [i_4] [i_3] [i_2 - 2] [i_1] [i_1] [i_0])))))));
                                var_14 ^= 65516;
                            }
                        }
                    }
                    var_15 = ((-32 ? var_2 : (((arr_12 [0] [i_1] [i_1] [i_1] [i_0] [i_2] [0]) & 318414590))));
                }
            }
        }
    }
    #pragma endscop
}
