/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (2147483647 == var_8);
    var_21 = ((var_11 ? var_0 : (((-109 / var_8) >> (((~var_11) + 49903))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_22 = (max(var_22, (!var_16)));
                    var_23 -= (var_11 ? (arr_6 [i_0] [4] [i_1] [i_2]) : ((+(((arr_6 [i_0] [16] [i_1] [6]) ? (arr_3 [i_0] [i_0]) : var_3)))));
                    var_24 = (+((((max((arr_0 [i_1]), var_12)) == (arr_6 [i_0 + 1] [i_2] [i_2] [i_0 - 1])))));
                }
                arr_7 [i_0] = var_6;
                var_25 = (((-var_13 * var_13) ? (arr_0 [i_0]) : (((max(var_14, 65535))))));
            }
        }
    }
    #pragma endscop
}
