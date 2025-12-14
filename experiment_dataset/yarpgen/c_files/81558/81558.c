/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_1] = (((2147483647 & 1) && (-2147483647 - 1)));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_14 = (arr_0 [6]);
                            var_15 = ((~(arr_14 [i_0] [i_1] [i_0] [i_1] [i_4] [i_4])));
                            var_16 = (var_5 - (arr_12 [i_0] [i_0] [i_2] [i_4] [i_4]));
                            var_17 = (!(var_13 && var_13));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_18 = (((arr_7 [i_5]) >= (arr_7 [i_0])));
                            var_19 = (max(var_19, (arr_13 [i_5] [i_5] [i_5] [i_5] [9])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_20 = (min((((~-1594546361) ? (((arr_4 [i_0] [i_2] [i_0]) ? (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1]) : (arr_17 [i_2] [i_2] [i_2] [10] [i_2]))) : (((2147483646 ^ (arr_4 [i_2] [i_1] [i_2])))))), (~1)));
                        var_21 -= (max((-2147483647 - 1), -2147483638));
                        var_22 += (((arr_17 [i_0] [i_0] [4] [1] [i_6]) - (arr_17 [i_0] [1] [10] [i_0] [15])));
                        arr_19 [i_0] [1] [i_0] [i_1] = (-((max(57861, 1))));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_23 -= var_8;
                        arr_24 [i_0] [i_0] [i_1] = ((~(max(3005389498, 15511615091032304878))));
                    }
                    arr_25 [i_1] [i_1] [i_2] [i_2] = ((((32767 ? ((max((arr_6 [i_0] [i_1] [i_1]), var_3))) : ((var_4 ? (arr_15 [8] [i_1] [12] [7]) : (arr_15 [i_0] [i_0] [i_2] [i_0]))))) - var_6));
                    var_24 = ((var_1 ? (arr_9 [i_0] [5] [i_1] [i_0] [i_0]) : ((var_2 - (arr_23 [i_2] [i_1] [i_2] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((((((var_0 ? var_13 : (max((arr_0 [i_8]), (arr_18 [i_0] [i_1] [i_1] [i_2] [i_8] [i_9])))))) ? -var_13 : ((((!(0 > var_0))))))))));
                                var_26 = (max(var_26, (((-(max((((var_0 ? var_1 : var_0))), (max((arr_9 [16] [i_1] [i_0] [i_8] [i_9]), (arr_12 [i_0] [1] [i_2] [0] [i_9]))))))))));
                                var_27 = max(((((arr_12 [i_0] [7] [7] [7] [i_0]) ? (2147483647 & var_8) : ((~(arr_22 [9] [i_0])))))), (min((arr_2 [i_0] [i_0]), (arr_22 [i_2] [i_0]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = ((((min((max(var_1, var_5)), ((min(var_0, var_3)))))) - ((var_9 ? var_7 : (1 >= 65535)))));
    var_29 = (((max(var_8, var_13))) ? var_7 : ((((var_9 || -28118) ? (!var_13) : var_12))));
    var_30 &= var_6;
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                {

                    for (int i_13 = 1; i_13 < 24;i_13 += 1)
                    {
                        arr_42 [1] [i_11 + 3] [18] [i_10] [i_13] [i_13] &= (var_1 + var_6);
                        arr_43 [i_10] = var_5;
                        arr_44 [i_13] [i_13] [i_12] [i_11 + 4] [i_11 - 1] [i_10] = ((((var_6 ? (0 || 2147483647) : (arr_33 [i_10]))) + ((((arr_37 [i_11 + 1]) == (arr_41 [i_13 - 1] [i_13] [i_13] [i_13]))))));
                    }
                    var_31 *= (max((((arr_41 [i_11 + 3] [i_10] [i_12] [i_11 - 1]) ? (arr_41 [i_11 + 1] [i_12] [i_12] [i_12]) : (arr_41 [i_11 + 4] [i_11 + 4] [i_12] [i_11 + 3]))), ((~(arr_41 [i_11 + 2] [i_11] [i_11 + 2] [i_12])))));
                }
            }
        }
    }
    #pragma endscop
}
