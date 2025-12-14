/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    var_11 = (5118554417672320157 ? -6456521804657002210 : 6729518150181598539);
                    var_12 = (-(((arr_3 [i_0] [i_1] [i_0]) ^ ((var_6 >> (((arr_6 [i_1]) + 3441013394675579141)))))));
                    var_13 = (min(var_13, ((((((var_5 ? var_6 : var_9)) << (3754369722383575556 - 3754369722383575556))) & (((var_9 ? -5118554417672320158 : var_6)))))));
                    var_14 ^= arr_5 [i_0] [i_1 + 1];
                }
            }
        }
    }
    var_15 = (((min((var_6 == var_7), var_7))) ? ((-0 ? (var_7 / var_0) : -7026392422078224482)) : -7815280487881400640);
    #pragma endscop
}
