/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((max((~var_5), var_3)) < (((-((-(arr_1 [0]))))))));
                var_13 += ((((((max(29467, 0))) ? ((max(0, -1))) : (((((arr_0 [1]) + 2147483647)) << (((var_11 + 63) - 27)))))) - (((((var_1 ? -18 : -1))) ? 65535 : -64))));
            }
        }
    }
    var_14 = (((((-(var_7 + 4154736081927191072)))) ? (max((var_7 + var_7), -var_2)) : ((((max(var_6, var_4)) + ((var_9 ? var_7 : var_6)))))));
    #pragma endscop
}
