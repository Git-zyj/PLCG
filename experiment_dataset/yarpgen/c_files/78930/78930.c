/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (((max(((var_11 ? 143 : var_4)), -57)) % (max(0, ((39343 ? 15360 : 1))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = ((!(((var_0 & (arr_0 [i_0 - 2]))))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_16 = (((((~(arr_4 [i_1 - 2] [i_1])))) ? (((arr_8 [i_1 - 1] [i_3] [i_1 - 1] [i_1 - 1]) + (arr_4 [i_1 - 2] [i_1 + 1]))) : (arr_8 [i_1 + 2] [6] [i_2 + 3] [i_0 - 1])));
                        arr_10 [i_0] [i_2 + 2] [i_1 - 2] [i_0] = var_1;
                        var_17 = (((arr_8 [i_0] [16] [i_2] [i_0]) ? ((0 ? var_12 : (max(var_7, var_11)))) : (((max(119, 1))))));
                    }
                    var_18 *= 1;
                    var_19 -= ((~(arr_0 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
