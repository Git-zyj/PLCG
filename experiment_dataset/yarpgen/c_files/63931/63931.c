/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_9 < ((-(-23 / var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 -= (((((-60 || var_2) | (arr_2 [i_0] [i_1]))) >= (arr_3 [i_0])));
                arr_6 [20] [24] = ((68 ? (arr_3 [i_0]) : ((min((arr_1 [i_1]), var_8)))));
                var_18 = (((((32750 >> (((((arr_0 [i_0] [i_1]) ? (arr_5 [i_0] [i_1]) : (arr_2 [i_0] [i_1]))) + 120))))) ? ((-42 ? 77 : (-127 - 1))) : (((-127 - 1) / ((var_13 ? (arr_0 [i_0] [i_1]) : -60))))));
            }
        }
    }
    var_19 = ((((var_10 - ((var_8 ? var_8 : var_6)))) | (var_7 != var_8)));
    var_20 = ((var_12 != ((max(var_7, var_4)))));
    #pragma endscop
}
