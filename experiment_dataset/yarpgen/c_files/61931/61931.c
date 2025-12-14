/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_9 ? var_12 : (max(((var_0 ? 17003915340979504700 : var_3)), ((max(var_6, var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = 17003915340979504703;
                var_14 = var_10;
                var_15 = var_6;
                var_16 = (max(17003915340979504700, 48554));
            }
        }
    }
    #pragma endscop
}
