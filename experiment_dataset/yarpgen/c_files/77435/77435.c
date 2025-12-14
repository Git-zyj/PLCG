/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (((((max(var_5, var_1))) ? (max(var_5, var_9)) : var_10)));
                    var_12 = ((var_4 ? var_2 : ((var_3 ? var_7 : (max(var_8, var_5))))));
                }
            }
        }
    }
    var_13 = var_2;
    var_14 &= (max(var_5, ((((max(var_2, var_4))) ? (((var_7 ? var_10 : var_3))) : ((var_11 ? var_4 : var_6))))));
    var_15 = (max(((var_3 ? ((var_5 ? var_5 : var_4)) : (var_0 * var_6))), (((var_0 ? (max(8589934591, var_0)) : (((var_3 ? var_4 : var_3))))))));
    var_16 = var_2;
    #pragma endscop
}
