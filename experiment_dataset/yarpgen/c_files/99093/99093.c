/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((max(1, 48)))));
    var_16 ^= var_2;
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (~-32);
                var_19 = (min(var_19, (((((min(((min(var_7, 1))), (min(var_5, (arr_4 [6] [10] [0])))))) ? (arr_0 [i_1]) : (min(((min((arr_4 [i_0] [4] [i_0]), (arr_2 [i_1])))), 1)))))));
            }
        }
    }
    var_20 ^= (((((1 ? var_12 : var_14) ^ var_14))));
    #pragma endscop
}
