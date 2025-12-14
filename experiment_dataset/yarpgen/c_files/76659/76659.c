/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_4 + var_13);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (min(((((arr_5 [i_0 - 1] [i_0] [10] [i_1 - 3]) | (arr_0 [i_0 - 1])))), 9223372036854775807));
                    arr_6 [13] [13] [13] = var_2;
                    var_22 -= ((4294967295 ? (-9223372036854775807 - 1) : 65532));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = var_16;
        arr_11 [i_3] = (max((~var_7), (!1)));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        arr_15 [1] [i_4 - 2] = var_11;
        var_23 -= (arr_0 [i_4 - 1]);
    }
    #pragma endscop
}
