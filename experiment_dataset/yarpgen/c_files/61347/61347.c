/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [12] = var_13;
                arr_6 [i_0] [i_1] [i_1] = (((((((max((arr_4 [i_0] [i_1] [i_0]), 0))) ? ((-6420341150010363956 ? (arr_0 [i_0]) : (arr_0 [3]))) : (arr_1 [i_0] [i_1 - 1])))) ? (max((max(23, (arr_1 [i_0] [i_1]))), 449033062)) : 2076686392));
                var_18 = (((((~(arr_4 [i_1 + 4] [i_1] [i_1])))) ? var_16 : (~3894)));
            }
        }
    }
    #pragma endscop
}
