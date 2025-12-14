/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (-(min(((var_6 ? (arr_2 [i_1]) : (arr_2 [i_1]))), (arr_4 [i_0]))));
                arr_6 [i_1] [i_1] = var_11;
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_13 [i_0] [i_1] [i_2] [i_3]) ? ((((min((arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]), 28875))) ? (min(var_12, 8388096)) : (arr_9 [i_1] [i_1] [i_2] [i_2]))) : var_13));
                                var_19 += var_4;
                                arr_16 [i_3] [6] [13] [i_2 - 2] [i_1] [i_4 - 2] = (arr_12 [i_2 - 3] [i_2 - 3] [i_4 + 1] [i_4 + 1]);
                                arr_17 [i_1] [1] [i_4] [i_3] [i_2] [i_1] [i_1] = (!var_8);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_3;
    var_21 = ((((((var_8 ? 28875 : var_13)) >> (var_9 - 377891802))) * var_9));
    var_22 *= ((var_9 << (var_17 - 29675)));
    var_23 = var_17;
    #pragma endscop
}
