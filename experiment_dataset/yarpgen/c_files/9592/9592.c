/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((var_12 ? (((var_12 > ((var_16 ? var_4 : var_3))))) : (~var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = ((((max(-26, (arr_2 [i_1 + 1])))) ? (max(((((arr_2 [i_1]) ? var_12 : (arr_1 [i_0])))), ((43 ? 9993125813883422166 : var_18)))) : ((((((arr_0 [i_0]) ? 213 : (arr_4 [i_1] [i_0] [i_0])))) ? ((var_4 ? var_7 : var_2)) : var_13))));
                var_22 = (max(var_22, (((((arr_2 [i_1]) ? (min(var_18, var_15)) : (8417180970879200274 >= 32)))))));
            }
        }
    }
    #pragma endscop
}
