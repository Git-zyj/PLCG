/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 -= ((+(min(var_1, ((((arr_0 [i_0]) ? (arr_2 [i_1]) : var_11)))))));
                arr_6 [i_0] = -8483470041396628185;
            }
        }
    }
    var_14 = ((1 ? var_0 : var_7));
    var_15 = var_6;
    #pragma endscop
}
