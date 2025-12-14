/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (((((((1 ? (arr_0 [i_1]) : (arr_0 [i_0])))) | ((1500731519 ? (arr_7 [i_1]) : (arr_0 [i_0]))))) - 5095700989013821360));
                    var_12 = ((max((min(-26608, 24309)), (!-6663041870777597549))));
                }
            }
        }
    }
    var_13 = (min(-6446, (min(var_2, ((var_3 ? var_10 : var_3))))));
    var_14 = ((var_3 || ((!(((var_6 ? var_9 : var_9)))))));
    #pragma endscop
}
