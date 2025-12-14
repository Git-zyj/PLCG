/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 *= ((((max(1, (arr_0 [i_0] [20])))) + (!50760)));
                    var_20 = (((1 - var_2) ? ((max((!1), (!25022)))) : (((((!(arr_1 [i_0]))) && (!65535))))));
                    var_21 *= (((!((max(9199486040750015560, var_5))))));
                    arr_9 [i_1] [i_1] [i_1] = (((!(arr_6 [i_1]))) ? var_4 : var_12);
                    var_22 = (min(var_22, (arr_5 [i_0] [14])));
                }
            }
        }
    }
    var_23 += -255;
    var_24 += ((var_8 ? (min((min(var_9, var_4)), 16)) : (var_5 > var_15)));
    #pragma endscop
}
