/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((min((((arr_2 [i_1]) ? 24 : (arr_2 [i_1]))), var_7)))));
                    var_20 = var_7;
                    var_21 = (arr_7 [i_1]);
                }
            }
        }
    }
    var_22 = ((-((11291 ? var_8 : var_11))));
    #pragma endscop
}
