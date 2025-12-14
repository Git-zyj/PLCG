/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 175;
    var_14 = ((89 != 34289) ? var_10 : ((var_6 + (((var_12 ? -15 : -112))))));
    var_15 = (min(var_15, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = -6852;
        var_17 = var_5;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = var_7;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_19 = var_6;
                        var_20 = (((arr_8 [i_1] [i_2] [i_1] [i_4]) <= (((((34301 ? (arr_5 [i_4]) : var_3))) ? ((min(121, var_4))) : 2211129259))));
                        var_21 = ((min(77, (min(-1, 0)))));
                    }
                }
            }
        }
        var_22 = ((-((((max(0, -4599224883101398467))) ? 4599224883101398466 : 10049694925372129178))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_15 [i_5] = (((1 ? var_12 : (((-114 || (arr_14 [4])))))));
        var_23 &= (max((-16 > -47), (((arr_14 [i_5]) == 10))));
        var_24 = max((~-7), ((((arr_14 [i_5]) ? ((max(var_2, 0))) : ((var_2 ? 0 : 1))))));
    }
    #pragma endscop
}
