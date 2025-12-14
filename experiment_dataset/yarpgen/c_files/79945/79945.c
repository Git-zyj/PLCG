/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_12 = (-(arr_9 [i_0] [i_1 + 1]));

                        for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            var_13 = (((arr_2 [i_0]) ? (arr_1 [i_4]) : (((!(arr_1 [i_4 - 2]))))));
                            var_14 = ((-(((arr_2 [i_0]) & var_1))));
                            var_15 *= 1;
                        }
                        for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_16 -= (((var_6 ? 10511476172404825711 : 127)));
                            var_17 += var_3;
                        }
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_18 = (min(var_18, (arr_9 [i_1] [i_2])));
                        var_19 = ((arr_6 [i_2] [i_1] [i_2]) ? (((arr_5 [i_2] [i_0]) ? var_3 : var_10)) : (arr_18 [i_0] [i_0] [i_0] [i_0]));
                        arr_19 [i_1] [i_0] [i_1 + 1] [i_1] = var_8;
                        var_20 &= ((!((min(2802208458, ((((arr_8 [i_1 - 1] [i_2]) ? var_11 : (arr_7 [i_0] [i_1] [i_2] [i_6])))))))));
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_0] [i_0] = ((~((var_3 ? (arr_13 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 3]) : (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 3])))));
                    }
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        var_21 *= 36;
                        var_22 = (~172);
                    }
                    var_23 += (((((((((arr_14 [i_0] [i_1] [i_1] [i_2]) > 1))) & ((-(arr_4 [i_2])))))) & (((((arr_21 [i_0] [i_1] [i_2]) >= 18446744073709551615)) ? var_1 : ((((var_11 > (arr_17 [1] [i_0])))))))));
                }
            }
        }
        var_24 = (max((((!(arr_2 [i_0])))), (2450479965 || var_5)));
    }
    var_25 = (((((max(var_5, var_4)))) ? var_1 : (-var_4 + var_0)));
    var_26 = (max(var_26, var_5));
    var_27 = (((-(var_0 / var_0))));
    #pragma endscop
}
