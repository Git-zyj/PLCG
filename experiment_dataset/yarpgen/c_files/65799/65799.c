/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, 214));
                    arr_10 [i_2] [i_2] [i_2] = arr_8 [i_2];
                    var_14 &= ((((((((249 ? 24062 : 28))) ? ((var_0 - (arr_1 [i_2]))) : var_2))) ? (((var_6 ? var_8 : var_8))) : ((var_2 ? var_9 : var_9))));
                }
            }
        }
    }
    var_15 &= var_2;
    var_16 = var_5;
    #pragma endscop
}
