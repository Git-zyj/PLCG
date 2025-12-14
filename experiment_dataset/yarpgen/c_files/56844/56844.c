/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_14 ? var_10 : var_3))) ? 52 : (((-1083111504 ? 1 : -80)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((30 ? (((arr_0 [i_1] [i_1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0]))) : (((arr_3 [i_0 - 1] [i_0] [i_0]) ? 38 : (arr_2 [i_0 + 2] [i_1])))))) ? (arr_2 [2] [i_1]) : 2757118679));
                var_20 = (((((((((arr_2 [i_0 - 1] [i_1]) ? 2492120740 : (arr_0 [i_0] [9])))) ? (((-108 ? 93 : (arr_1 [i_0])))) : (((arr_1 [i_0]) ? (arr_1 [i_1]) : 1758852842))))) ? (((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_1]) : 491520)) : ((2110365760 ? 32758 : ((201 ? -119 : -87))))));
            }
        }
    }
    #pragma endscop
}
