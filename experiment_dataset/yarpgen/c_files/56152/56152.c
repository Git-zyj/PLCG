/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((0 ? 1 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((min((arr_3 [1]), (arr_0 [i_0]))) ? ((1 ? 0 : 1)) : ((1 ? var_18 : var_17))))) ? ((((((arr_5 [i_0]) ? 1 : 1))) ? ((1 ? 1 : (arr_4 [i_0] [0] [0]))) : ((max(1, 1))))) : (((max(1, (arr_3 [i_1]))) ? ((var_5 ? var_7 : var_10)) : ((var_6 ? var_16 : var_2))))));
                var_20 = ((((((max(1, (arr_4 [i_0] [i_0] [1]))) ? ((max(var_11, (arr_2 [1] [i_0])))) : (((arr_1 [i_0]) ? 1 : var_11))))) ? (((max((arr_3 [i_0]), (arr_1 [i_0]))) ? ((max(var_11, 1))) : ((max((arr_0 [i_0]), (arr_1 [i_1])))))) : ((((((arr_5 [i_0]) ? var_16 : (arr_0 [1])))) ? ((1 ? 1 : 1)) : (((arr_3 [i_0]) ? 1 : var_10))))));
            }
        }
    }
    var_21 -= ((((((((0 ? 0 : var_13))) ? ((min(var_0, var_0))) : ((min(var_8, var_5)))))) ? (((max(1, var_4)) ? ((1 ? 1 : 0)) : ((max(var_8, 1))))) : (((((var_9 ? 1 : var_15))) ? ((max(var_9, var_16))) : ((1 ? 1 : 1))))));
    #pragma endscop
}
