/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_5 | (var_16 >= var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = arr_1 [i_0];
                arr_5 [i_0] [i_0] = (min(((((arr_1 [i_0]) > ((((arr_4 [i_1]) * var_0)))))), (max(var_6, (arr_1 [i_0])))));
            }
        }
    }
    var_22 = 1;
    var_23 = ((var_12 ? var_17 : (((((var_11 ? var_9 : var_17))) ? var_8 : ((var_10 ? var_8 : var_10))))));
    var_24 = (!((min(var_7, ((-28399 ? 0 : 28931))))));
    #pragma endscop
}
