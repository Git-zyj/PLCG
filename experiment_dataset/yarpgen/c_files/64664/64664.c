/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (((((~(arr_1 [1])))) ? ((1 * (arr_1 [i_1 + 2]))) : (arr_4 [i_0] [i_0] [i_1 + 1])));
                var_16 = (min(var_14, (max(1, (arr_1 [i_0])))));
                var_17 = (min(var_17, 1));
                var_18 = ((((arr_5 [i_0] [i_1 - 1]) << (((((arr_1 [i_0]) / (arr_5 [i_0] [i_0]))) - 2924049606)))));
            }
        }
    }
    var_19 = var_12;
    var_20 = var_11;
    var_21 = var_2;
    #pragma endscop
}
