/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = (((((min(var_6, var_18)))) >= ((((min((arr_6 [i_0]), 0))) - (var_3 == 240977464)))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_21 = (max((((((var_17 ? 58426 : var_4)) % (arr_3 [i_0] [i_1] [i_2])))), ((var_18 ? var_2 : var_16))));
                        var_22 = (arr_6 [i_0]);
                    }
                }
            }
        }
    }
    var_23 = ((((((var_14 ^ var_19) >= ((var_14 ? var_7 : var_0))))) >> var_8));
    #pragma endscop
}
