/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(561503218476933725, (((((var_3 ? var_2 : var_10))) ? (max(var_12, var_11)) : (min(17722191235572215019, var_10))))));
    var_15 = (min(var_15, (((((var_5 ? var_7 : -10375)))))));
    var_16 = ((max(var_1, (1 || 1))) ? ((max(var_3, 0))) : -1610615648);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = max(21, (arr_2 [i_0]));
                    var_17 = (arr_2 [i_2 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
