/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((max(var_9, var_0))), ((var_8 - (min(var_10, var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [10] [17] = (65535 == 9894);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_19 = (((arr_3 [1] [i_2]) ? (var_17 && var_2) : 5781));
                        var_20 |= -153426663;
                        var_21 = ((var_16 ? (arr_3 [i_3 + 4] [i_1 - 3]) : var_7));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_22 = (((arr_2 [i_1 - 3]) == (((arr_12 [i_0] [i_4] [i_2] [i_4]) ^ 85))));
                        var_23 = (((arr_14 [i_2] [i_1 + 1] [7]) ? (arr_14 [i_2] [i_1 - 1] [i_1 + 1]) : (arr_14 [i_1 + 2] [i_1 + 2] [i_0])));
                        var_24 = ((var_13 ? ((var_9 * (arr_14 [i_0] [i_1] [20]))) : var_4));
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        var_25 = (((arr_17 [i_5 - 1] [i_1 + 2] [i_0]) ? (arr_17 [i_2] [i_1] [i_2]) : (arr_17 [5] [5] [i_5 + 1])));
                        var_26 -= ((~(-9223372036854775807 - 1)));
                    }
                    arr_19 [i_1] [2] [1] [i_1 + 2] = (((arr_17 [i_0] [i_1 - 1] [i_2]) || (arr_17 [i_2] [i_1] [i_0])));

                    for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_2] [i_6] |= ((((((arr_9 [15] [15]) ? var_12 : var_12))) ? -8290371132909996308 : (arr_15 [i_1 - 2])));
                        var_27 = (((arr_10 [i_6] [i_6 + 3] [i_1 + 2] [i_1 - 3]) * var_12));
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1 + 2] [i_2] [i_2] [i_7] = (arr_11 [i_7 + 1] [i_1 + 1] [20]);

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_28 = (arr_11 [17] [17] [i_0]);
                            var_29 = ((arr_10 [i_0] [i_1] [i_2] [4]) ? var_15 : (arr_20 [i_0] [i_1 + 2] [i_0] [i_7 - 2]));
                            arr_31 [i_0] [i_1] [i_0] [i_7] [i_7] = ((~(arr_17 [i_1 - 1] [i_7 - 1] [i_7])));
                            var_30 = var_7;
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_34 [i_0] [i_1] = (((((arr_10 [i_1] [i_1 - 1] [i_1 - 3] [i_1 - 3]) ? (arr_10 [i_1] [i_1 - 3] [i_1 - 3] [i_1 - 1]) : (arr_10 [i_1] [i_1 - 3] [i_1 - 2] [i_1 - 1]))) + (arr_10 [i_0] [i_1 - 1] [i_1 + 2] [i_1 - 1])));
                    var_31 = var_16;
                    arr_35 [12] [i_9] = (min(((((arr_9 [i_1 + 1] [i_1 - 3]) == var_13))), ((~((max(var_1, 56437)))))));
                }
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    arr_38 [i_0] [i_0] = var_5;
                    var_32 = var_7;
                }
                var_33 = ((+((((min((-32767 - 1), -7062432332385399469)) == (((min((arr_18 [3] [15] [i_0] [i_1]), 255)))))))));
            }
        }
    }
    var_34 = (max(-var_7, var_15));
    var_35 = (min((max((!var_2), var_2)), (var_8 != var_13)));
    var_36 = (min((min(9099, 4192041877)), 1419246714));
    #pragma endscop
}
