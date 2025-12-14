/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (((arr_1 [i_0]) ? (((~(arr_2 [i_1] [i_0])))) : var_7));
                var_16 = ((!(arr_0 [i_0] [i_0])));
                var_17 = ((-((-((max((arr_3 [i_0] [i_1]), 61670)))))));
                arr_4 [i_0] [i_1] = (arr_3 [i_0] [i_1]);
            }
        }
    }
    var_18 = var_10;
    #pragma endscop
}
