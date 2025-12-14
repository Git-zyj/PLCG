/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~-5617861620077492500);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = var_3;
        var_12 = ((~(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_13 = ((-(min((arr_5 [i_2 - 3] [i_2] [i_2 + 4]), ((var_4 % (arr_9 [i_1])))))));
                        var_14 = (max((min(var_5, (arr_5 [i_2 + 1] [i_2 + 1] [17]))), (((var_6 == (arr_11 [i_2 + 3]))))));
                        var_15 = ((((min(127, 229))) || (((1 ? (arr_9 [i_3]) : ((27 ? 229 : 0)))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_16 += var_4;
                            var_17 *= var_0;
                            var_18 = ((var_1 ? (arr_13 [i_3] [i_3]) : (arr_11 [i_3])));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_19 = (min(var_4, (((arr_14 [i_1] [i_1] [i_3] [i_4] [i_3]) >> (!var_6)))));
                            var_20 = var_3;
                            var_21 -= var_8;
                        }
                        var_22 = (arr_14 [i_4] [i_4] [i_3] [i_3] [i_3]);
                    }
                }
            }
        }
        var_23 = ((((min(var_1, var_0)) == (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))));
        var_24 |= (min((((var_3 || (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))), (4094146968701521913 != 1782372738463799680)));
        var_25 = (min(var_1, (min((min(var_6, (arr_7 [i_1]))), (min(var_6, (arr_7 [i_1])))))));
        var_26 ^= (((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((((arr_14 [i_1] [i_1] [5] [i_1] [i_1]) > (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
    }
    for (int i_7 = 3; i_7 < 22;i_7 += 1)
    {
        var_27 = (arr_18 [9] [i_7]);
        var_28 = ((((min((var_3 - var_6), (arr_20 [i_7])))) % var_6));
        var_29 = (((((((arr_5 [i_7] [i_7 - 2] [i_7]) >= var_6))) | var_5)));

        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_30 = (min((arr_14 [i_7] [i_7] [i_7] [i_7] [i_7]), ((var_6 ? ((~(arr_3 [i_8 - 1] [13]))) : (((arr_21 [i_7 - 3] [i_8]) ? (arr_21 [i_7] [i_7]) : var_2))))));
            var_31 = (-(((arr_3 [i_7 - 2] [i_7 - 2]) ? var_4 : (arr_3 [i_8 - 1] [i_7 - 2]))));
        }
        var_32 = (max(var_32, ((((var_1 | ((min(var_2, var_8)))))))));
    }
    #pragma endscop
}
