/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((!(((((var_4 ? var_4 : var_8))) || var_9))));
    var_14 = ((-4908777692052237714 / (((((min(var_10, var_11))) ? var_10 : (var_7 / var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (((((2293002475603291548 ? -118 : -23))) >= (max((var_12 <= var_2), ((var_5 ? (arr_0 [i_1 + 1]) : var_2))))));
                var_16 = (((var_12 != 287707451) ? ((1537930318 | ((min(-20977, 165))))) : (((-287707437 != (((arr_5 [i_0] [i_1]) ? var_3 : var_8)))))));
            }
        }
    }
    #pragma endscop
}
