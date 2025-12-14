/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((max(3487152168, var_6))));
                var_20 = ((max(var_10, ((max(var_1, (arr_0 [1])))))));
                var_21 = var_5;
                var_22 = var_19;
            }
        }
    }
    var_23 = ((var_2 > (max((var_10 >= var_13), var_16))));
    var_24 = (~(!var_10));
    var_25 = ((((max(var_15, ((3487152168 ? var_5 : var_4))))) ? (var_0 - var_14) : ((((var_11 ^ var_2) ? var_13 : var_5)))));
    #pragma endscop
}
