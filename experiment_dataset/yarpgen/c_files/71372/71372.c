/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((var_12 * (arr_2 [16] [i_0] [i_1]))) >= var_2)) ? 0 : var_11);
                var_18 = (min(var_18, ((min((((45770 ? var_10 : var_9))), (max(var_1, var_12)))))));
                var_19 = var_11;
                arr_6 [i_0] [i_0] = var_15;
            }
        }
    }
    #pragma endscop
}
