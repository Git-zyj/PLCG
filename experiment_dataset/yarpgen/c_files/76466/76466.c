/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] [i_1] [8] |= ((~(min(6609097060480704356, (arr_0 [i_0])))));
                arr_5 [i_0] [i_0 - 1] [i_0] = (((!(arr_1 [i_0 + 2]))) ? (max((arr_2 [i_0] [i_1] [i_1]), 48145)) : (arr_2 [i_0] [i_0 + 1] [i_0 - 3]));
                var_19 &= var_12;
                arr_6 [i_0 + 1] [4] &= ((-(arr_0 [i_0 + 1])));
            }
        }
    }
    var_20 = var_8;
    var_21 -= 68494827;
    #pragma endscop
}
