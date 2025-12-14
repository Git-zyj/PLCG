/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((-(max(var_3, var_4))))));
    var_13 = -var_9;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0 + 1] = var_0;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_14 = var_1;
            var_15 = (max(var_15, var_2));
        }
        var_16 = (-(((!((max(var_10, var_1)))))));
        var_17 = -var_0;
        var_18 *= var_1;
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    var_19 = ((-(!var_6)));
                    var_20 = var_10;
                    var_21 = var_5;
                }
            }
        }
    }
    var_22 = ((-(min(((min(var_4, var_10))), var_11))));
    #pragma endscop
}
