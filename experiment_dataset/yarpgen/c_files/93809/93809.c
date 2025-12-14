/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (arr_3 [i_1] [i_1]);

                for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [13] [i_0] [i_0] = (min((min((arr_8 [i_4] [i_1]), (arr_10 [i_2 + 4] [i_2] [i_2] [i_2] [i_2 + 3]))), (max((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_0] [i_0]))), ((min((arr_2 [i_3] [i_0]), (arr_5 [i_0] [i_1] [i_1] [i_4]))))))));
                                arr_15 [i_3] [i_4] [i_4] [i_3] [i_3] [i_4] = 1;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = (((arr_17 [i_0] [i_1] [i_1]) - var_3));
                        arr_19 [i_2] [i_2] [i_2] [i_5] = var_5;
                        var_17 = var_10;
                        var_18 = (arr_2 [i_5] [i_0]);
                    }
                    arr_20 [i_0] [i_1] [i_0] [i_0] = (min((max(101, -378948436)), var_8));
                }
                for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = var_14;
                                arr_29 [4] [4] [i_6 + 2] [i_8] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!103);
                                var_19 = (arr_1 [i_6] [i_6]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_39 [i_0] [i_9] [i_0] [i_9] = ((((max((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (max(3584, (arr_26 [i_6] [i_6] [i_6] [i_6] [18])))))) ? var_13 : (arr_9 [i_0] [i_0] [i_0] [i_6] [i_9] [i_10 - 4])));
                                arr_40 [i_0] [i_9] [i_9] [i_9] [11] [i_0] [i_0] = (max(75, 69));
                                var_20 = ((11514 ? (((arr_0 [i_6 + 2] [i_6 + 3]) - (arr_0 [i_6 + 2] [i_6 + 3]))) : (min(var_7, ((var_3 ? 183 : (arr_33 [i_0] [i_1] [i_6 + 2] [i_9])))))));
                                var_21 = (max(var_21, ((((((arr_1 [i_10 - 3] [i_1]) - (arr_9 [i_6] [i_6 - 1] [i_6 + 2] [i_6 + 2] [i_10 - 3] [i_10]))) - (((arr_11 [i_10 + 2] [i_6] [i_6 + 4]) ? 3584 : (arr_11 [i_10 + 1] [i_10 - 2] [i_6 + 3]))))))));
                            }
                        }
                    }
                    arr_41 [i_0] [i_0] [i_0] [i_0] = (arr_7 [23] [18] [i_6]);
                    var_22 = (min(var_22, ((((min(((((arr_3 [i_1] [i_1]) == var_10))), (min(-1784764404, 61952)))) - ((61952 ? (max((-2147483647 - 1), -1821970107)) : (max(-809433044, 1)))))))));
                }
                arr_42 [i_0] = (((max((max(var_5, (arr_26 [i_0] [i_1] [i_1] [i_0] [i_0]))), var_12)) > -948948235));
            }
        }
    }
    var_23 = (max((var_9 & var_0), (((var_8 == (max(-14, -1805799219)))))));
    var_24 = (((((((max(4024426471, var_13))) ? var_0 : var_7))) ? var_15 : (max((max(var_4, var_1)), ((max(-809433044, 44363)))))));
    var_25 = var_8;
    #pragma endscop
}
