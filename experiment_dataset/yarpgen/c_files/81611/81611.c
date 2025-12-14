/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((0 ? var_9 : 0));
    var_13 = -13;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (min(var_14, var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = ((239 >> (((arr_3 [i_2] [i_2] [i_2]) - 1250783993))));
                    var_16 = var_8;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = ((((max((arr_5 [i_0] [i_1] [i_2]), (arr_11 [1] [i_2] [i_2] [i_3])))) / ((max((arr_11 [i_0] [i_2] [i_0] [i_0]), (arr_11 [i_0] [i_2] [i_2] [i_3]))))));
                        var_18 = (((-13 != var_5) ? ((5 ? -33 : (((arr_4 [6]) ? 0 : (arr_4 [i_0]))))) : 8403634104150558258));
                    }
                    var_19 &= ((0 ? 5330097269355446917 : (max((arr_10 [i_2] [i_1] [i_0]), var_7))));
                    var_20 = ((max(((-1318319369 ? 16696638606202356261 : -7)), ((max((arr_0 [i_2]), var_9))))));
                }
            }
        }
        var_21 = (min(var_21, ((min(((max(12, 1))), ((3890980773029507350 || (((arr_0 [i_0]) > -33)))))))));
    }
    #pragma endscop
}
