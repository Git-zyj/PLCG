/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_9 ? (((((var_6 & -4475976581048831451) < var_1)))) : ((12717620061964336969 ? 12717620061964336969 : 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((-((((((arr_2 [i_0] [i_1]) != -113))) ^ (~1))))))));
                var_15 = (arr_4 [i_0] [i_1]);
                arr_6 [1] = (((arr_5 [i_0] [i_0] [i_0]) ? ((-357520724 ? 7405 : (((arr_5 [i_0] [i_1] [i_1]) ^ 67)))) : ((((1 ? var_10 : var_6))))));
                arr_7 [i_1] [i_0] = 0;
            }
        }
    }
    var_16 = ((var_4 && (((min(var_10, var_6))))));
    var_17 += var_8;
    var_18 = ((((var_2 & var_10) & (((var_1 ? var_4 : var_1))))) != ((min(var_8, (~var_1)))));
    #pragma endscop
}
