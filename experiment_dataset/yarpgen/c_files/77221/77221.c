/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (arr_3 [i_0] [i_1])));
                arr_4 [i_0] [i_1 - 1] [i_0] = (127 > -696169257);
            }
        }
    }
    var_17 = (var_3 ^ 696169256);
    var_18 = (max(var_18, (((((((var_11 ? var_4 : var_14)))) ? ((max((!var_0), ((var_3 ? var_14 : var_11))))) : (((((var_10 ? var_15 : var_15))) / ((var_4 ? var_10 : var_4)))))))));
    var_19 = (max(var_19, var_1));
    #pragma endscop
}
