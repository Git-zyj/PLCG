/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(-1002515204, ((~(var_9 / var_0))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((max((arr_4 [i_0]), (min((arr_0 [10] [i_1 + 3]), (arr_0 [2] [i_1 - 4]))))))));
                var_16 = (min(8898, 15273214274704612861));
                arr_5 [i_0] = (arr_2 [i_1] [i_1]);
                var_17 *= (max(((~(~-22604))), -1002515186));
            }
        }
    }
    #pragma endscop
}
