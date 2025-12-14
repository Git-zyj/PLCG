/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_14 ^= var_0;
                arr_6 [i_0] = (arr_5 [i_1] [i_0]);
                var_15 = (-((((arr_2 [i_1]) && var_12))));
                arr_7 [6] [i_0] |= (max(((((arr_5 [i_1] [i_1 - 1]) ? (arr_5 [i_1 - 2] [i_1 - 2]) : (arr_5 [i_1 - 1] [i_1 + 1])))), ((((max((arr_1 [i_0]), -1947760424349636843))) ? var_2 : (arr_0 [i_0])))));
            }
        }
    }
    #pragma endscop
}
