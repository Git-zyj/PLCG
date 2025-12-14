/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((!(((~((22 / (arr_2 [i_0]))))))));
                var_12 &= ((var_9 ? (((((~(-2147483647 - 1)))) ? var_5 : (((arr_3 [i_0] [i_0]) ? var_11 : 218)))) : (max((arr_1 [i_1] [i_1 - 1]), (min(var_2, (arr_2 [i_0])))))));
            }
        }
    }
    var_13 ^= var_4;
    #pragma endscop
}
