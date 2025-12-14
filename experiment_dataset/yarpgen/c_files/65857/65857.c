/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (((~-135) ? ((~(arr_0 [i_1 + 1] [i_1 - 2]))) : (max(((max(0, (arr_3 [i_0] [i_0])))), (arr_1 [i_1 + 2] [i_1 + 1])))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_16 = var_4;
                        var_17 = -4;
                    }
                    arr_11 [i_1] [i_2] = (arr_1 [i_1 + 2] [i_1]);
                    arr_12 [i_0] [i_0] [i_2] = (((((((arr_5 [i_0] [i_1] [i_1] [10]) ? -13 : var_10))) ? (max(var_12, 12)) : (!-32))));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    var_18 = (min((!896), ((((arr_4 [i_0]) ? var_6 : (arr_9 [i_0] [i_0] [i_1] [i_4] [i_0] [i_4]))))));
                    var_19 -= ((((14 ? var_8 : -3))));
                }

                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_1 + 1] [i_5 - 1] [i_6] [i_7] [i_0] = (max(((((((arr_7 [i_1] [i_5]) ? -1034922734861917398 : (arr_16 [i_1 - 2] [12])))) ? (var_6 / 2) : var_3)), ((((arr_16 [i_7 - 1] [i_7 + 3]) ? (arr_6 [i_1] [i_1 - 2] [i_1 - 1] [i_1]) : (arr_16 [i_7 - 2] [i_7 + 1]))))));
                                arr_24 [i_0] [i_1 + 2] [i_1 + 2] [i_6] [i_7 - 1] = ((((24 ? (((arr_2 [i_5]) ? var_12 : 3907993466)) : (var_2 | var_1))) * ((((!((max(16787313042569642909, (arr_9 [i_0] [i_1 - 2] [i_1] [i_5] [i_6] [i_7 - 1]))))))))));
                                var_20 = (min((arr_10 [i_1] [i_1] [i_1 + 2] [i_1 - 1]), -898));
                            }
                        }
                    }
                    var_21 = 1;
                    arr_25 [i_5] [i_5] [i_5] [i_5 - 1] = (min((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_9));
                    arr_26 [i_0] [i_0] = (max((-5768881570221278101 / -4), ((((((var_7 + 2147483647) >> (arr_5 [i_0] [i_0] [i_0] [i_0]))) & -41)))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_31 [i_0] [i_0] [i_0] [i_0] = ((max((arr_21 [i_0] [i_0] [i_1] [i_1 + 1] [i_0] [i_8] [i_8]), (arr_14 [i_0] [i_1 - 2] [i_0] [i_8]))) * (((arr_14 [i_1] [i_1] [i_1 - 1] [i_1 - 2]) * (arr_21 [i_0] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1]))));
                    var_22 = (min(var_22, ((-var_13 < ((1798308863 >> (((arr_30 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 2]) - 3173211616))))))));
                }
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    var_23 -= var_13;

                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {

                        for (int i_11 = 3; i_11 < 11;i_11 += 1)
                        {
                            var_24 = (arr_18 [i_1 - 1] [i_9 + 1] [i_10 + 1] [i_10 + 2]);
                            arr_40 [i_0] [i_0] [i_10] [i_0] [i_0] = ((-(arr_19 [i_1] [i_1] [i_9] [i_9 - 2] [i_9] [4])));
                            var_25 = ((((-(arr_34 [i_0] [i_1 + 2] [i_9] [i_10] [i_11 + 2]))) & var_3));
                            arr_41 [i_0] [2] [i_0] [8] &= ((779058018 ? var_1 : 1));
                        }
                        arr_42 [i_0] [i_10] [i_9] [i_10] = (((!41) ^ var_9));
                    }
                }
            }
        }
    }
    var_26 = ((1 ? var_2 : (63 * var_2)));
    var_27 = var_4;
    #pragma endscop
}
