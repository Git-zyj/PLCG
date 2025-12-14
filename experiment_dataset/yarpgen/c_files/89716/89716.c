/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 *= ((((max((var_1 - var_4), var_7))) && (((var_9 << (((~43) + 60)))))));
                var_11 = (min(var_11, 3174009223737752275));
                var_12 = (min(var_12, -3174009223737752271));
                arr_5 [3] [i_0] = (((((1699 ? 43 : var_6))) || (((var_1 ? var_0 : -6193115277656580648)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_13 = var_2;
        var_14 = (max(var_14, ((((!var_4) ? 1 : (!770953970666010337))))));
    }
    var_15 &= (~1);
    #pragma endscop
}
