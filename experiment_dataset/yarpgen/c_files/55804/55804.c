/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (min(((((~1474579251) > ((11 ? var_5 : 1))))), (~-var_10)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (min(var_20, (min((~var_12), (~var_17)))));
        var_21 -= (max(var_13, (max((~var_12), var_6))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_22 = -6874;
            var_23 = (min(((max((!107), (var_0 / var_12)))), (max((arr_3 [i_0]), (((var_12 << (var_5 - 16102154921430625788))))))));
            arr_6 [i_0] [i_1] [2] = ((-(~-58689)));
        }
        arr_7 [0] [0] = -1;
        var_24 = ((~(max((~var_17), (max(var_15, var_12))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_25 = (arr_10 [i_2] [i_2]);
                arr_15 [6] [i_3] = ((~((0 ? var_16 : var_4))));
            }
        }
    }
    #pragma endscop
}
