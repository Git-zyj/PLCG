/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = ((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_3 [i_1])))));
                var_21 = (arr_2 [11] [i_1] [i_1]);
                var_22 += (((max((~var_15), (arr_1 [i_1]))) >= (~48)));
                var_23 = ((var_3 == (min(((var_18 ? (arr_1 [i_0]) : var_1)), ((((arr_4 [2] [i_0]) <= var_12)))))));
            }
        }
    }
    var_24 = ((-(((var_9 | var_4) ? (var_4 - var_2) : (var_10 || var_2)))));
    var_25 = ((-(((var_2 ? var_15 : var_16)))));
    var_26 = (((((min(-65, (9164534763603562972 >= var_0))))) >= 9164534763603562972));
    #pragma endscop
}
