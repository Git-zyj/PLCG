/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_18 = (max((min(53, (arr_5 [8] [i_1] [1] [4]))), (-1548626373 | 31171)));
                    var_19 *= ((min((arr_6 [10] [i_2]), var_3)));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_10 [i_0] = 60;

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        var_20 = (!var_5);
                        arr_14 [i_4] [i_0] [i_1] = (((((-17842 ? var_5 : (arr_7 [7] [7])))) ? (arr_13 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 1]) : -27355));
                        arr_15 [i_0 + 3] [5] [i_0] = -190;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_21 = (((arr_17 [i_0] [i_1] [i_0] [i_3] [9]) ? 31 : ((((arr_5 [i_0] [i_0] [i_3] [1]) >= -27355)))));
                        var_22 = (((arr_11 [i_0] [8] [i_0] [i_5]) ? var_13 : 42));
                        arr_19 [i_0] [i_1] = (arr_9 [i_0 + 3] [i_0 + 3] [i_0] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_23 = (((arr_18 [i_0] [i_0 + 3] [i_0] [i_0] [i_0]) || 109));
                            var_24 = (((arr_3 [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_11 [i_7] [i_7] [i_0] [10])));
                            var_25 = var_3;
                            arr_24 [7] [6] [i_0] [6] [i_7] [7] = (arr_7 [i_0 + 2] [1]);
                            arr_25 [i_7] [i_0] [i_0] [i_0] [i_1] [i_0] = 27354;
                        }
                        for (int i_8 = 4; i_8 < 10;i_8 += 1)
                        {
                            var_26 = 3398;
                            arr_29 [i_0] [i_6] [8] [i_1] [i_0] = ((((((-2 >= 242) ? (arr_22 [i_0 + 1] [i_0 + 2] [i_0 + 3] [i_0 + 1] [i_0] [i_0 + 1] [i_0]) : ((-(arr_22 [1] [9] [10] [i_3] [i_6] [4] [i_0])))))) ? -27355 : ((min((arr_3 [i_1] [i_6]), (arr_3 [1] [i_0]))))));
                            var_27 = -var_13;
                            arr_30 [i_0] [i_0] [i_3] [i_6] [i_0] = ((((min((arr_26 [i_8 + 1] [i_0 - 1] [i_0]), var_12))) ? 1 : (((arr_1 [i_0]) ? (var_7 || -8289770141272840658) : (0 + var_9)))));
                            arr_31 [i_8 - 2] [10] [i_0] [i_3] [i_0] [i_0 + 3] [i_0 + 3] = (((((((((arr_1 [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : var_8))) ? (((var_6 ? -1466422928 : var_0))) : ((27354 ? 0 : 2348))))) ? ((((!var_11) || ((min((arr_8 [i_0] [10] [i_8]), (arr_17 [8] [2] [i_0] [i_0] [i_0]))))))) : (((!(arr_2 [i_1] [i_8 - 4]))))));
                        }
                        arr_32 [i_0] [i_0] [i_3] [9] = var_2;
                    }
                }
                var_28 = (((~-53) << ((((arr_12 [i_0 + 2] [i_0 - 1]) >= var_5)))));

                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_29 = ((!((9223372036854775807 <= (-15990 >= 90)))));
                    var_30 = (min((((arr_23 [i_0] [i_1] [i_1] [i_0] [i_0]) ? -21950 : (170 || 58))), ((((arr_12 [i_0 - 1] [10]) != ((min(1, var_11))))))));
                    arr_36 [i_0] [i_0] [i_1] [i_0] = (min(((110 ? 3964819729 : 76)), (((-(((arr_13 [i_1] [i_0] [i_1] [i_0]) ? var_9 : (arr_12 [i_1] [i_9]))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_31 = ((!(((27354 ? (arr_38 [6] [i_0] [i_11 - 1] [5] [5]) : (-9223372036854775807 - 1))))));
                                var_32 = (max(var_32, 90));
                                arr_42 [i_0] [i_1] [i_0] [i_0] [i_11] = (((arr_1 [i_0]) ? ((-(arr_33 [i_10] [i_10 + 3] [i_10 - 1] [i_10]))) : (arr_33 [7] [i_10] [i_10 - 2] [0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
