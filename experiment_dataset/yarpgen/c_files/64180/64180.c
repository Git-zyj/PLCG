/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = (((arr_6 [7] [i_1] [i_1]) ? (((~var_12) ? (var_12 ^ -20) : -3067486231920837620)) : ((((max(var_13, -30181)))))));
                    var_19 = ((+(((arr_6 [i_2 - 2] [i_0] [i_0 - 1]) ? (arr_2 [i_0] [i_0] [i_0]) : ((-15751 ? 64 : (arr_2 [i_0] [i_0] [i_0])))))));
                }
            }
        }
        var_20 = (min(-var_11, var_0));
    }
    var_21 = var_13;
    var_22 = (((var_11 % var_11) || (((var_10 ? ((var_0 ? var_14 : 18446744073709551615)) : (1 / 1))))));
    #pragma endscop
}
