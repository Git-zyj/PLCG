/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (arr_6 [i_0] [i_1]);
                var_15 = (max(var_15, (!-3574734315357600158)));
                var_16 -= var_11;
                arr_7 [i_0] [i_0 - 1] [i_1] = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
