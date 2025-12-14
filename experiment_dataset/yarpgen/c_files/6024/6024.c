/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_12 = (max(var_12, (((4200694434 ? (-711698507 - 230) : ((-3499173885216848455 & (arr_0 [i_3]))))))));
                        var_13 = (max(var_13, (arr_7 [i_0] [i_1 - 2] [i_3])));
                        arr_12 [i_0] [1] [i_2] [i_0] = var_1;
                        var_14 = 711698506;
                        var_15 = (min(var_15, 0));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_16 += var_3;
                        var_17 = ((!(arr_10 [i_1 - 1] [i_1 - 2] [i_2] [i_4])));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_18 = (((arr_11 [i_1] [i_1] [i_5 - 2] [0]) ? (arr_11 [i_2] [i_1] [i_5 - 2] [i_5 + 2]) : (arr_11 [i_0] [i_0] [i_5 - 2] [i_5 - 2])));
                        var_19 += (!var_6);
                        var_20 = (-3 / var_3);
                    }
                    arr_17 [i_0] [i_0] [1] [i_0] &= ((((((arr_1 [i_0] [i_1 - 2]) ? ((max(0, var_6))) : (((arr_10 [i_0] [i_0] [i_1 + 1] [1]) ? var_8 : 4953))))) ? ((255 ? (((var_3 << (var_5 - 623087229)))) : var_4)) : (arr_10 [i_1] [11] [i_2] [i_1 + 1])));
                }
            }
        }
    }
    var_21 |= var_0;
    var_22 |= ((((max(var_0, var_1))) ? var_10 : ((((var_2 > ((var_10 ? var_11 : var_1))))))));
    #pragma endscop
}
