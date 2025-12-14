/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = ((((((4 | (arr_3 [i_1])))) ? (var_11 & var_0) : (min(var_11, var_9)))));
                var_20 = (((((arr_1 [i_0]) ? (arr_4 [i_1]) : -6374921961599895128)) ^ (arr_0 [i_1])));
                var_21 = 120;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_22 = 6374921961599895144;
                    arr_7 [i_2] [i_1] [i_0] [i_0] = (!var_7);
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_23 = (((((((max(var_3, var_14))) ? (((arr_8 [i_0] [i_1] [11] [i_3]) ? (arr_2 [i_3]) : (arr_4 [i_0]))) : (((arr_1 [i_3]) ? var_3 : 2047))))) ? (min(var_14, (arr_1 [i_3]))) : ((((min(var_4, var_16)))))));
                    var_24 = (min((max((arr_6 [i_0] [i_1] [i_3]), (arr_3 [i_0]))), (arr_1 [i_0])));
                    var_25 = (min(var_25, var_4));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_26 = (((max(var_3, var_3)) ^ (((1 * 38) ? (((arr_10 [i_0]) ? (arr_4 [i_4]) : var_12)) : -1))));
                    var_27 *= (arr_9 [i_4] [i_1] [i_0]);
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_28 = var_0;
                                arr_22 [i_0] [i_1] [i_1] [i_5] [i_7] [i_5] = ((((max(((var_8 ? var_13 : var_13)), (arr_20 [i_5 - 1] [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 2] [i_5 - 2])))) < ((((((-14 >= (arr_15 [i_6] [i_1] [15] [i_0]))))) ^ var_6))));
                                var_29 *= ((((!(((2059937378 ? var_6 : 248))))) && ((!((min((arr_5 [i_0] [i_1] [i_5] [i_6]), var_14)))))));
                                arr_23 [i_0] [i_1] [i_0] [i_0] [i_5] = (max((arr_20 [i_5 - 1] [i_5 - 2] [i_5] [i_5] [i_5 + 1] [i_5]), (((arr_20 [i_5 - 2] [i_5 - 2] [i_5] [i_5] [i_5] [i_5]) ? (arr_20 [i_5 - 2] [i_5 - 2] [0] [i_5] [i_5] [i_5]) : (arr_20 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5] [i_5])))));
                            }
                        }
                    }
                    var_30 = arr_6 [8] [8] [i_5 + 1];
                }
            }
        }
    }
    #pragma endscop
}
