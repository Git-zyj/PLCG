/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = (~(((arr_8 [i_1] [i_0 - 1] [i_2] [i_0 - 1] [i_2 - 1] [i_3]) ? (arr_8 [i_4] [i_0 - 1] [i_2 - 1] [i_3] [i_2 - 1] [i_3]) : (arr_2 [i_1] [i_0 - 1] [1]))));
                                var_17 &= (arr_1 [i_0]);
                                var_18 = var_15;
                                var_19 = ((((((min((arr_3 [7] [i_1] [i_1]), 1))) || (~4398046511103))) ? (arr_6 [i_4] [7] [i_2] [i_1] [i_0]) : ((var_14 * (~-46)))));
                            }
                        }
                    }
                    var_20 = ((max((255 > var_3), (max(1, var_14)))) * ((((((-(arr_0 [i_2]))) > var_0)))));
                }
            }
        }
    }
    var_21 = ((-(((var_15 ? var_5 : var_6)))));
    var_22 = (min(var_22, var_0));
    #pragma endscop
}
