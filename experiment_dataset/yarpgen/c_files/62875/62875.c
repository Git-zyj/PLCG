/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_14 + ((var_9 ? var_2 : var_5)))));
    var_19 = (((((var_15 ? var_8 : (var_14 * var_1)))) ? var_7 : (((((var_7 ? var_10 : var_12))) ? (((var_15 ? var_5 : var_1))) : ((var_17 ? var_14 : var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 += ((((var_11 ? var_13 : var_10)) < var_2));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (~((var_5 ? var_6 : var_7)));
                }
            }
        }
    }
    var_21 = ((((var_17 ? var_16 : var_13))) ? var_4 : var_12);
    #pragma endscop
}
