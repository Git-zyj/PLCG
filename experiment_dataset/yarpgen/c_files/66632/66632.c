/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66632
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
                var_18 = (max((!var_8), (min((((arr_1 [i_0]) ? (arr_2 [i_1] [i_1]) : var_5)), (arr_3 [i_0] [i_1])))));
                var_19 = ((~(((arr_2 [i_0] [i_1]) ? (max(var_16, (arr_2 [i_1] [i_0]))) : (min(var_7, var_8))))));
            }
        }
    }
    var_20 = (((~var_4) == ((((var_9 | var_9) ? (max(var_10, var_1)) : ((var_16 ? var_13 : var_3)))))));
    var_21 = min((((((var_0 ? var_4 : var_3)) <= var_4))), var_5);
    #pragma endscop
}
