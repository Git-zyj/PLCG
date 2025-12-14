/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [3] [i_2] [1] [i_0] = ((min((arr_1 [i_3 + 1] [i_3 + 1]), (arr_1 [i_3 - 1] [i_3 - 1]))));

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_10 = ((87 ? (-18107 * 2611057432097175800) : 19));
                            var_11 = (min((max(17483485556035742888, -13)), (arr_3 [i_0] [0])));
                        }
                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            arr_19 [i_5] [i_1] [12] [i_3] [12] = ((((((arr_17 [i_2] [i_1] [i_2] [i_3 + 1] [i_5 - 2]) && ((max((arr_5 [i_5] [5] [5]), (arr_9 [i_0] [i_1] [1] [9]))))))) >> (((-11280 % 197) + 63))));
                            var_12 = ((((((10441699097404339097 & -126) == var_3))) ^ 25935));
                            arr_20 [i_0] [i_1] [i_2] [i_0] [i_5] = ((min((min(var_0, 126)), ((((arr_11 [i_3] [i_5]) || var_6))))) << (28836 - 28789));
                            var_13 = ((max(((((arr_17 [i_0] [i_0] [i_2] [3] [i_2]) >= -18101))), (arr_0 [i_3]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_14 ^= (((11206 & -51) && (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_15 = ((!(((12512130959008565921 >> (-87 + 128))))));
                    }
                    arr_23 [6] [i_2] = ((((max((max(-13, 15230021601455779668)), (max(213, (arr_14 [i_0] [10] [i_2] [i_1])))))) ? ((max(18106, 6823))) : (-6374 + var_6)));
                    arr_24 [1] [5] [i_2] = ((16682623795862513420 ? -24581 : -24581));
                    arr_25 [i_0] [5] [i_0] = ((((((arr_14 [i_0] [i_1] [1] [i_2]) + -11206)) * (max((arr_4 [i_0] [8] [i_0]), 8005044976305212519)))));
                }
            }
        }
    }
    var_16 = var_8;
    var_17 = (max(var_17, (((((max(var_0, -16) << (((min(var_1, 197)) - 181)))))))));
    var_18 -= var_9;
    #pragma endscop
}
