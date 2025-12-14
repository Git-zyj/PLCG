/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_10 ? var_6 : var_2));
    var_15 = 65535;
    var_16 = (min(14273588427057391352, 1075985014));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_0 [i_0 - 1]);
                arr_5 [i_0] [i_0] [i_0] = (228 + 1);
            }
        }
    }
    #pragma endscop
}
