/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_5;
    var_12 = var_5;
    var_13 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = ((!((max((var_0 - var_8), (arr_3 [i_0] [i_0]))))));
                var_15 = min(18024, -8446057000173450684);
                var_16 = (((arr_1 [11] [i_0]) / -2800190114119754888));
                var_17 ^= arr_6 [i_0] [i_0];
                var_18 = (var_0 >> (((((~var_6) ? (min(var_4, var_7)) : (~var_2))) + 8497706288430145226)));
            }
        }
    }
    #pragma endscop
}
