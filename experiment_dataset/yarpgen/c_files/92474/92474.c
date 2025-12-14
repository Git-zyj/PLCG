/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((var_7 ? 1 : var_2))) ? var_6 : var_3))) || -var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((-(((!(15 && var_4))))));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_13 = (min(0, ((((~-20616) | (~var_1))))));
                        var_14 += (min(((((min((arr_0 [8] [i_1]), var_9))) - (((arr_2 [i_1]) ? var_10 : 65535)))), ((~(~18446744073709486081)))));
                        arr_11 [i_0] [5] [i_0] [i_0] [i_3] = (((2720809983599386518 / -2720809983599386518) * -17752455277812086061));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_15 = ((!(1 * 0)));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_2 + 1] [11] = ((-753804740 ? 0 : 29));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        arr_17 [5] [i_0] [14] [i_1] [i_0] [i_5] = ((0 ? (arr_8 [i_5 + 1] [i_0] [i_5]) : ((-1 ? (-2147483647 - 1) : (arr_2 [i_0])))));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] = (!-254474699);
                            arr_21 [i_0] [i_6] [i_2] [i_0] [i_0] = (var_6 ? var_8 : 2958296878);
                        }
                        arr_22 [i_0] [17] [i_1 - 2] [i_0] = (arr_10 [i_0] [i_2 - 1]);
                    }

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_16 += (min(((((var_3 == (arr_10 [i_0] [i_1]))))), (min((arr_5 [i_2 - 1] [i_1] [i_1 - 2]), var_9))));
                        var_17 += (min(((~(arr_3 [i_1 - 2] [i_2 - 1]))), ((min((arr_0 [i_1] [i_1]), (arr_7 [i_0] [i_0] [i_1 - 1] [i_2 + 1]))))));
                        arr_26 [i_0] [7] [i_0] [i_7] = var_11;
                        arr_27 [i_0] [i_0] = (min(5, 753804725));
                        arr_28 [i_0] [i_1] [i_2] [i_1] |= (min(((((min(24470, var_9))) + var_0)), ((min((arr_5 [i_1 - 1] [7] [i_2 + 1]), var_8)))));
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_36 [i_0] [i_1] [i_0] = (arr_16 [i_0] [5] [i_8] [i_9]);
                                arr_37 [i_0] [15] [i_0] [1] [1] = ((min((arr_35 [i_0] [i_1] [i_10 + 2] [i_9] [i_10]), (arr_13 [i_1] [i_1 - 1] [i_0] [i_0]))));
                                arr_38 [i_1] [12] [6] |= var_0;
                            }
                        }
                    }
                }
                var_18 ^= ((min((arr_34 [i_1 - 1] [i_1 - 1]), var_10)));
                var_19 = (max(var_19, 0));
            }
        }
    }
    var_20 = ((!((!(((var_11 ? 4375318469911348507 : var_3)))))));
    var_21 = (((~var_4) ? var_1 : var_8));
    #pragma endscop
}
