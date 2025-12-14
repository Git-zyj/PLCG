/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_10 = ((-(arr_2 [i_0])));
                arr_5 [i_0] = var_5;
                arr_6 [7] = (arr_3 [i_0] [i_1]);

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_11 = (((((arr_0 [i_0]) ? (arr_0 [i_1]) : -23717)) & -23717));
                    var_12 = 3120212395;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_13 &= (((arr_2 [i_2]) ? ((((arr_10 [i_2 + 2] [i_2] [i_2 - 1] [i_2] [i_1] [i_2]) * 23716))) : (((arr_10 [16] [12] [i_2] [i_3] [i_1] [i_2 + 3]) ? (arr_10 [i_1] [i_1 + 2] [i_2] [i_3] [i_1] [i_2 + 2]) : var_9))));
                        var_14 = -var_9;
                    }
                }
                var_15 = (min(var_15, var_7));
            }
        }
    }
    var_16 = ((~(max((var_2 | var_0), var_2))));
    var_17 = var_4;
    var_18 = ((var_7 + 2147483647) << ((((var_0 >> ((((var_7 ? 4520 : var_4)) - 4515)))) - 42816173)));
    #pragma endscop
}
