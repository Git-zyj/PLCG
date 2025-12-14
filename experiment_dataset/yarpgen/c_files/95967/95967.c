/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-2193436681979319865 - 3546941209796136228);
    var_16 ^= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 372518343;
                arr_6 [i_0] [i_0] = 89;
                arr_7 [9] [i_1] [i_1] = (((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_1)) * (((var_5 << (((arr_4 [i_0] [i_1]) - 55267)))))));
            }
        }
    }
    #pragma endscop
}
