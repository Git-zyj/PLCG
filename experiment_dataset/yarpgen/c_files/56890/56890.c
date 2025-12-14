/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(((var_3 ? var_9 : var_15)), (min((!var_14), (max(var_8, 1310310824)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = -6276647099998986164;
                    var_22 = (arr_2 [i_1 + 2] [i_1 + 2]);
                    var_23 = (!1);
                }
            }
        }
        arr_8 [7] = (arr_5 [i_0]);
    }
    var_24 = 38944;
    #pragma endscop
}
