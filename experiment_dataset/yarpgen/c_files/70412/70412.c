/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((min((max((((arr_3 [1] [i_1] [i_1 - 1]) | 0)), 1)), 49)))));

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    arr_10 [i_0] = (((var_3 == -1002266699) ? (((~((min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_2 - 1]))))))) : (max(((var_10 ? 0 : 0)), ((var_4 ? (arr_4 [i_0]) : 29))))));
                    arr_11 [i_0] [i_1] = ((((((var_3 ? var_7 : (arr_3 [2] [i_1] [i_2])))) ? (min(0, (arr_6 [i_0] [i_0] [i_1] [i_2]))) : (((min(var_0, 1)))))));
                    var_16 += (max((((((max(var_0, 23))) <= ((~(arr_5 [i_0 + 2] [i_0])))))), (arr_5 [3] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_20 [i_0] [i_4] [i_2] [i_3] [i_2] = ((((max((34022 * 0), ((var_2 ? var_10 : (arr_3 [i_2] [i_3] [i_4])))))) ? ((((max(40038, (arr_18 [i_0] [i_1 - 1] [i_0] [i_4] [i_4])))) ? (arr_0 [i_0 - 2]) : (arr_17 [i_0 - 3] [i_1 - 1] [i_0 - 3] [i_3] [i_4 + 1]))) : (~1)));
                                var_17 = ((((((0 ? 0 : 4294967291)))) ? (((arr_18 [i_0] [i_0] [i_2 + 2] [i_4] [i_4]) ? ((-32750 ? (arr_5 [i_0] [i_0]) : var_1)) : ((max(var_12, 0))))) : (((!(((4088865775 ? 1 : (arr_12 [3] [i_3])))))))));
                                arr_21 [i_0] [i_0] [i_4] [i_3] [i_4 - 1] = (~35792);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            var_18 = (max(var_18, var_2));
                            var_19 = (((((arr_16 [i_0] [i_0 + 1] [i_1 - 1] [i_6] [i_7]) ? (arr_16 [i_0] [i_0 - 3] [i_1 - 1] [i_6] [i_7]) : var_4)) > (arr_3 [i_0 + 1] [i_7 + 1] [i_1 - 1])));
                        }
                        var_20 = (((0 + 1) + ((~(arr_24 [i_6] [i_1] [i_5] [i_5] [1] [6])))));
                        arr_29 [i_1] [i_6] [i_1] = (((arr_17 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_0 + 1]) >> (((!(arr_17 [i_1 - 1] [i_1 - 1] [2] [i_1 - 1] [i_0 + 2]))))));
                        var_21 = (arr_15 [4] [2] [1] [1] [5] [i_0 - 2]);
                        arr_30 [i_6] = (min((((((2013589572 ? 237 : var_9))) ? (((arr_19 [1] [1] [i_5] [i_0] [i_0]) ? -32750 : (arr_8 [3] [i_1 - 1]))) : -var_0)), (arr_3 [i_1] [i_5] [i_6])));
                    }

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_35 [i_0] [i_1] [i_8] [i_8] [i_1] [3] = (((arr_16 [i_0 + 1] [i_1 - 1] [i_5] [i_8] [i_0 - 1]) ^ ((~(arr_16 [i_0] [i_0] [8] [i_8] [i_0])))));
                        var_22 = (arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 1]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        arr_40 [i_9] [i_1] [i_5] [i_5] = ((-41 ? ((~(arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 3]))) : (((arr_23 [2]) << (((arr_27 [i_0] [i_1 - 1] [i_1] [i_5] [i_9]) - 2962))))));
                        var_23 = var_4;
                        arr_41 [i_0] [i_0] [i_5] [i_9] [2] = (arr_15 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 + 2] [i_0 + 1] [i_1 - 1]);
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        arr_46 [i_0] [i_1] [i_0] [0] [i_0] = ((~((((max((arr_9 [i_0] [i_1] [i_5] [i_1]), var_5)) == (~0))))));
                        var_24 |= (arr_5 [i_1 - 1] [i_1 - 1]);
                    }
                    var_25 += var_10;
                    arr_47 [i_0] [i_1 - 1] [i_5] [0] = (((((1574379149 ? (arr_15 [i_0] [i_0] [i_0 + 2] [i_0] [i_1 - 1] [i_0]) : (~var_11)))) ? ((-(((arr_3 [8] [i_1] [i_0]) ? 2013589572 : -49)))) : (var_12 <= var_7)));
                }
            }
        }
    }
    var_26 = ((828579286 / ((max(var_0, (var_12 + var_8))))));
    #pragma endscop
}
