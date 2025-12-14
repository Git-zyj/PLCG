/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (((+(max(((((arr_2 [i_0]) ? 2302 : 163))), (arr_7 [i_0] [i_2] [i_1] [i_0]))))))));
                            var_13 = ((~((~(arr_1 [i_1])))));
                            arr_11 [2] [2] [i_2] [i_2] = (max((max((-119 ^ var_0), (4 & var_5))), 93));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [2] = 15;
                    arr_17 [i_0] [0] [i_0] [i_0] = ((-(((arr_2 [i_1]) ? ((max(255, -125))) : (((!(arr_8 [i_0] [i_0] [i_0] [0]))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] = (!63238);
                    var_14 = ((!((((arr_10 [i_0] [i_0] [i_1] [i_5] [i_5]) ? (arr_12 [0] [i_1] [i_0]) : var_7)))));
                    var_15 = (((233 >= 1) | ((63238 | (arr_6 [i_5] [i_1] [i_0])))));
                    var_16 = ((255 ? var_6 : (arr_4 [i_5] [i_0] [i_0])));
                    var_17 = var_3;
                }
                arr_21 [i_0] = ((1 == (((arr_10 [i_0] [i_0] [i_1] [i_0] [i_1]) - 0))));
                var_18 = ((var_8 ? -125 : (((2297 ? 17 : 0)))));
                var_19 = ((var_7 << (((arr_18 [i_0] [i_0]) ? (arr_5 [i_0]) : (((arr_19 [11] [11] [i_0] [i_0]) ? 6 : var_3))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            {
                var_20 *= (((18446744073709551606 != -10544) ? (((((arr_25 [i_6 - 3] [1] [i_6]) << (((arr_22 [i_6] [i_7 + 2]) - 117)))) | (((arr_24 [i_6 - 4]) ? 63233 : 1)))) : ((((((!(arr_22 [i_7] [i_7])))) == var_8)))));
                arr_27 [7] = ((var_2 ? ((((arr_25 [i_6] [i_6] [i_7]) << (((var_0 + 4985) - 9))))) : (var_1 ^ var_6)));
            }
        }
    }
    var_21 -= max(var_0, var_10);
    #pragma endscop
}
