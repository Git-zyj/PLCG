/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = ((~((46718 ? (min((arr_2 [i_0] [i_1]), (arr_0 [i_0] [i_0]))) : ((min((arr_4 [i_0]), var_5)))))));
                arr_5 [1] = ((((((~(arr_0 [i_1] [i_0])))) ? (arr_4 [1]) : 1242071462)));
            }
        }
    }
    var_20 = ((var_15 ? ((((var_6 | var_13) ? 3895 : 17023))) : (min(-14, 326398407557155913))));
    var_21 = var_14;
    #pragma endscop
}
