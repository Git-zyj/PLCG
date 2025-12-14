/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((((((var_8 ? var_2 : var_9))) ? ((var_2 ? var_0 : var_13)) : (!var_16))))));
    var_19 = ((((min((min(var_15, var_9)), var_10))) ? (((max(var_16, var_8)))) : (min(((var_1 ? var_13 : var_6)), ((var_7 ? var_3 : var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 ^= (((((!var_9) != -var_16)) ? var_2 : (max(((var_12 ? var_10 : var_7)), (!var_8)))));
                    var_21 = (max(((max(var_11, (min(var_4, var_11))))), (((((var_15 ? var_3 : var_1))) ? var_12 : var_1))));
                }
            }
        }
    }
    var_22 ^= ((var_2 ? var_9 : var_7));
    #pragma endscop
}
