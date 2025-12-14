/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = ((-((6033068407466860736 ? 0 : -97))));
        var_11 = (-(arr_0 [i_0]));
        arr_4 [16] [16] |= ((((1 ? 687431352 : ((687431352 ? 1 : var_5))))) ? 2 : (max((arr_0 [0]), -687431353)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_12 = ((~((1 ? 1 : 4133339483741690353))));
                        arr_11 [i_0] [i_1] [i_2] [i_0] = var_0;
                    }
                }
            }
        }
    }
    var_13 = (max((((((var_5 ? var_6 : var_1))) ? (min(var_7, var_1)) : -var_2)), 0));
    #pragma endscop
}
