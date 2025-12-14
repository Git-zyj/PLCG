/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (~var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_16 = ((!(max((!-750976314), var_11))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (min(((max(var_14, var_0))), (min((arr_1 [i_0]), (arr_2 [7] [0])))));
                        var_17 = ((~(min((min(-4973689685982595425, var_3)), ((min(1, var_1)))))));
                        var_18 = ((min(var_8, (min(-864090159, var_6)))));
                        var_19 ^= min((min((arr_6 [i_0] [i_1] [i_2] [i_3]), (arr_6 [i_0] [i_0] [i_0] [i_0]))), (max((arr_6 [i_0] [5] [i_0] [i_0]), (arr_6 [1] [i_1] [i_2] [i_3]))));
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        var_20 ^= ((((!(arr_10 [0] [i_4 - 1] [i_4] [i_4 + 1] [i_4] [0])))));

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_5 + 1] = -4088;
                            arr_19 [i_0] [i_1] [i_2] [i_1] [i_5] = (!((max(-1, var_5))));
                            var_21 += (arr_6 [i_2] [i_2] [1] [i_4 - 1]);
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            arr_24 [1] = (min(var_13, (min(-268435456, ((min((arr_4 [i_0]), (arr_0 [i_0]))))))));
                            arr_25 [i_0] [i_1] [i_0] [i_4 - 1] [i_6 - 1] = (min((min(var_1, (min(var_9, 1)))), (-2147483647 - 1)));
                            arr_26 [i_6] [i_4 + 1] [i_2] [i_1] [1] [i_1] [i_0] = ((~(((!(arr_14 [i_6 - 1] [i_4 - 2] [i_2] [i_1] [i_0]))))));
                        }
                        arr_27 [i_0] [i_0] [i_0] [0] [i_0] [i_0] = (max((!2668), ((~(arr_16 [i_4] [1] [i_4 + 1] [i_4] [i_4 + 1])))));
                        arr_28 [i_0] = ((~(max(var_1, (arr_12 [i_4 - 2] [i_4] [i_4 - 2] [i_4 - 2])))));
                        arr_29 [i_0] [5] = (min(1, (((max(var_13, var_10))))));
                    }

                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        var_22 = (~var_2);
                        arr_32 [i_0] [1] [i_0] [i_0] = ((!((min(((min(1, var_11))), 1)))));
                        var_23 = ((-((min((arr_8 [i_1] [i_2]), (arr_8 [i_1] [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_24 = ((~(arr_4 [i_2])));
                        arr_35 [i_8] = var_12;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_25 = ((min(1, var_6)));
                                arr_42 [i_0] [i_1] [10] [i_9] [i_0] [i_9] [i_9] = (max((max(var_4, (arr_1 [i_10 + 1]))), var_5));
                                var_26 = (max((max(1873386740, (arr_38 [i_9] [i_9] [i_10 - 1] [i_10] [0] [i_10 - 1]))), (min(196608, (arr_38 [i_0] [i_10 + 2] [i_10 - 1] [2] [i_10] [i_10 - 2])))));
                                var_27 = (max(var_27, ((min((~1), ((~(!1))))))));
                                var_28 = ((min(((min(var_1, 1)), (min(1732898667, (arr_33 [i_10])))))));
                            }
                        }
                    }
                    var_29 = ((~(max(((~(arr_22 [i_0] [1] [i_2]))), 0))));
                }
            }
        }
    }
    var_30 += var_10;
    #pragma endscop
}
