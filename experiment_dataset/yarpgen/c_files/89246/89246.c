/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_0 < ((var_1 ? 57100 : var_17)))) ? (((~var_9) ? ((var_7 ? var_19 : var_4)) : var_0)) : (min(((var_13 ? var_2 : var_2)), var_3))));
    var_21 = (max(var_21, (((((((var_1 / 84) ? var_2 : var_11))) ? ((var_3 ? var_15 : var_19)) : 96)))));
    var_22 = (min(var_22, ((((~90) - (((((!var_3) <= 57)))))))));
    var_23 *= -var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((arr_3 [i_0 + 2] [i_1 - 1]) || ((((arr_3 [i_0 + 3] [i_1 - 1]) ? (arr_3 [i_0 - 2] [i_1 - 1]) : (arr_3 [i_0 - 2] [i_1 - 1]))))));
                var_24 = -var_12;
            }
        }
    }
    #pragma endscop
}
