/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, -var_8));
    var_17 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (arr_6 [i_0]);
                    var_19 = (((((-(((arr_2 [12] [17]) / (arr_0 [i_1])))))) ? (((((-(arr_3 [16])))) ? 69 : 19320)) : ((((-7306989825808318475 | var_0) || (((-7306989825808318475 % (arr_5 [i_0] [i_0])))))))));
                    var_20 = (max(var_20, (((-var_15 ? var_0 : (((min((arr_3 [i_2 - 2]), var_3)) / (((4 ? (arr_4 [i_0]) : var_6))))))))));
                    var_21 = (((-((max(4, var_2))))));
                    var_22 = (min(var_22, (arr_5 [i_1 - 1] [i_2 - 1])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_23 = -3392513868;
        var_24 = (arr_2 [i_3] [i_3]);
    }
    #pragma endscop
}
