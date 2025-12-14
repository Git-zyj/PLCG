/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (+-65535)));
                var_18 = ((min((arr_4 [i_0 + 3]), (((var_0 & (arr_1 [i_0] [i_0])))))));
            }
        }
    }
    var_19 = var_14;
    #pragma endscop
}
