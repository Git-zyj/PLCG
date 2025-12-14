/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((962811278 ? (((24032 ? -4939 : -84))) : 2304717109306851328))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = (~-29259);

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_19 &= (((((32767 ? (~var_17) : 1))) ? ((var_16 ? 4938 : var_15)) : (((1 / -4941) * (max(var_6, (arr_9 [16])))))));
                        var_20 = var_13;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_0] [i_2] = ((((var_9 != (-1098938663 ^ 28199))) && ((min(4245638267, 4939)))));
                        arr_19 [i_0] [i_0] = (((40859 * 1) ? var_0 : ((((var_1 ? 4 : var_13)) * 13020))));
                        var_21 = (min(var_21, 24680));
                    }
                    arr_20 [i_0] [i_1] [i_0] = var_9;
                }
            }
        }
    }
    var_22 = (max((!var_7), var_12));
    var_23 = (max(var_23, var_5));
    #pragma endscop
}
