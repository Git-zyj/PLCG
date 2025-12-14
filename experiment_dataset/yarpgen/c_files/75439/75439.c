/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_4;
        var_19 = (((var_11 | 22) >> (((~16) + 42))));
        arr_4 [1] &= (((arr_2 [6] [i_0]) ? (((arr_0 [6] [6]) ? ((var_14 ? (arr_2 [i_0] [i_0]) : var_11)) : var_3)) : (-32592 * 65489)));
        var_20 = var_3;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = ((((-1 >= ((((var_16 || (arr_7 [i_1]))))))) ? ((((!(((var_6 % (arr_1 [6])))))))) : ((-(((arr_6 [i_1]) + (arr_0 [i_1] [10])))))));
        var_22 = (arr_2 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_23 = (arr_1 [i_3]);
                        var_24 = (arr_2 [i_2 + 1] [i_2 - 1]);
                    }
                }
            }
        }
    }
    var_25 = (((((((var_1 ? var_4 : var_17)) * 0))) >= var_0));
    var_26 = (min(((((var_3 ? var_8 : var_4)) + -1)), var_2));
    #pragma endscop
}
