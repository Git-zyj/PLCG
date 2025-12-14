/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_1 > -56) << ((((var_8 ? var_3 : var_6)) - 1524239062)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_11 = (arr_2 [i_1 - 3]);
                var_12 = (arr_2 [i_0 - 1]);
            }
        }
    }
    var_13 = var_2;
    #pragma endscop
}
