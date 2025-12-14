/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_14 ^= (max((max((((arr_0 [i_0] [i_0]) ? 1023 : var_1)), 368832797)), var_5));
                var_15 = (min(var_15, (((((max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) ? (max(var_6, (arr_2 [i_0 + 2]))) : (((var_3 ? var_1 : (arr_2 [i_0 - 1])))))))));
            }
        }
    }
    #pragma endscop
}
