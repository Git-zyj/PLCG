/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_11 ? (~-1) : ((var_11 ? var_5 : (!-31))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (-19 % 32767);
        arr_2 [i_0] = ((((var_8 % var_7) ? ((((arr_0 [3] [i_0]) ? (arr_0 [i_0] [i_0]) : (-32767 - 1)))) : (-1 | 2187992249))));
        var_19 = (max(var_19, ((min((min((min(21, -745)), var_0)), (((-(arr_0 [i_0] [i_0])))))))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] = ((-(~1)));
        var_20 = 25695;
        var_21 ^= (arr_3 [i_1 - 1] [i_1 - 1]);
    }
    for (int i_2 = 1; i_2 < 6;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_2] [i_4] [2] = (((arr_17 [i_4] [i_3] [i_4] [i_5] [i_5 + 1]) ? var_12 : 1));
                        arr_20 [i_2] [i_3] [i_3] [i_2] = (--18141);
                        var_22 = (((((var_13 ? ((var_13 ? var_12 : 0)) : (arr_1 [i_2 + 1])))) ? (arr_7 [i_3]) : var_8));
                        var_23 -= -64;
                    }
                }
            }
        }
        arr_21 [i_2] [i_2 + 1] = arr_1 [i_2 + 1];
    }
    #pragma endscop
}
