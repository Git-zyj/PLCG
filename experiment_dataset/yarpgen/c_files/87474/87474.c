/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 127));
    var_19 = 12775;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 ^= 15;
        arr_3 [i_0] &= -47;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_13 [i_1 - 1] [i_3] = var_4;
                        arr_14 [i_3] [i_2] [i_2] [i_4 + 1] [i_2] [i_4] = ((1435 ? -16280 : 16279));
                        arr_15 [i_3] [i_2] [i_2] [i_3] [i_4] [4] = ((((16280 ? (arr_1 [i_1 + 2]) : var_8)) + ((var_12 + (arr_6 [i_3])))));
                        arr_16 [i_1 + 2] [i_1 - 1] [i_3] [i_3] [i_3] [i_4 + 2] = (max((max(var_4, var_7)), ((var_10 ? (min(0, var_0)) : ((16289 ? -1 : var_12))))));
                    }
                }
            }
        }
        arr_17 [i_1] [i_1] = 16280;
        var_21 = (max(var_15, (((arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? var_1 : var_13))));
    }
    #pragma endscop
}
