/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_8 ? var_7 : var_5)) >= ((((var_4 > (max(var_8, var_1))))))));
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = var_11;
                arr_4 [i_1] = var_8;
                var_15 = ((var_11 - ((-(arr_3 [i_1 - 1])))));
                var_16 = (min((arr_2 [i_1] [17] [i_1]), var_2));
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
