/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((min((((14044412620787625617 ? (arr_0 [i_0]) : (arr_2 [i_0])))), (((arr_1 [i_0]) ? 10894544927454793156 : (arr_2 [i_0]))))) * ((max(var_11, var_3))));
        arr_3 [i_0] = (((~(min((arr_0 [i_0]), var_19)))));
        var_21 |= (max(((min(7552199146254758452, (arr_1 [i_0])))), (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = (((arr_2 [i_0]) & ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? ((7552199146254758453 ? (arr_1 [i_0]) : var_2)) : (arr_1 [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 6;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_22 = ((192 ? (min((var_6 & 7552199146254758450), var_5)) : (((~(max((arr_9 [i_2] [i_3] [i_2] [i_5]), (arr_5 [i_5]))))))));
                                var_23 ^= ((((!(arr_8 [i_4 + 3]))) ? ((max((arr_7 [i_4 - 2] [i_1 - 1]), (arr_7 [i_4 - 2] [i_1 - 1])))) : 242));
                                var_24 = ((((~(((var_13 > (arr_10 [0] [i_2] [6] [i_4])))))) <= ((max((arr_7 [i_4 + 4] [i_3]), (arr_16 [i_1] [i_2]))))));
                            }
                        }
                    }
                    var_25 = (((((((var_17 ? (arr_8 [i_1 - 1]) : (arr_1 [i_2]))) & (((arr_15 [i_1] [i_1] [i_3] [i_2] [i_2] [i_3]) ? 138 : (arr_2 [i_2])))))) ? (((((~51) + 2147483647)) >> (((var_0 == (arr_16 [i_1 - 1] [i_1])))))) : (~var_13)));

                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        var_26 = (((~var_17) ? (arr_10 [i_1 - 1] [i_1] [i_1] [i_1]) : ((-(arr_8 [i_1])))));
                        var_27 = (arr_2 [i_6 + 2]);
                        var_28 += (((arr_11 [i_1] [i_1 - 1] [i_2] [i_6 - 1] [i_2] [i_2]) ? (arr_12 [i_3] [i_2] [0]) : (arr_17 [i_1] [i_2] [5] [i_1])));

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_29 = (min(var_29, (((~(arr_8 [i_1 - 1]))))));
                            arr_23 [i_1] [i_3] [i_3] [i_3] [9] = 1;
                            arr_24 [i_1] [i_1] [i_3] [i_6] [i_3] [i_1] [1] = (arr_0 [i_1 - 1]);
                            arr_25 [i_7] [i_3] [i_3] [i_1] [i_3] [i_1] = (arr_6 [8]);
                        }
                        for (int i_8 = 1; i_8 < 8;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_1 - 1] [i_2] [i_3] [i_3] [i_6] [i_3] = (arr_17 [i_1] [i_1] [i_1 - 1] [i_1 - 1]);
                            arr_30 [i_3] [i_2] [i_2] [i_2] [i_2] = ((-(arr_26 [i_1 - 1] [i_6 - 1])));
                            var_30 = 240;
                        }
                        for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
                        {
                            var_31 &= ((~(arr_11 [i_1] [i_2] [i_3] [i_6 - 3] [i_9] [i_2])));
                            arr_33 [i_2] [i_3] = 53;
                        }
                    }
                    var_32 = ((((min((var_15 & 216048027367054977), (((~(arr_12 [i_1] [i_2] [i_3]))))))) ? ((min((arr_27 [i_1 - 1] [i_2] [i_3] [i_2] [i_1 - 1]), (arr_27 [8] [1] [8] [i_1 - 1] [i_1 - 1])))) : (94 <= 10894544927454793155)));
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_39 [i_3] = ((!((max(((max(1, (arr_20 [i_1] [i_2] [i_3] [i_1] [2] [i_2])))), -var_2)))));
                                arr_40 [0] [1] [1] [i_2] [1] [i_10 + 1] &= ((!((min((max(var_2, 3672191723100246991)), (arr_15 [i_1] [i_1] [i_2] [i_10 - 1] [i_11] [i_11]))))));
                                arr_41 [i_1 - 1] [i_3] [i_3] [i_10 - 3] [i_11] = (((!var_4) * (((!(arr_36 [i_10 - 2] [i_1 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_45 [7] = (((arr_42 [i_12] [i_12]) ? var_8 : (arr_42 [i_12] [i_12])));
        arr_46 [i_12] [i_12] = (((arr_43 [i_12]) ? 1 : (arr_43 [i_12])));
        var_33 += ((~(~var_3)));
    }
    #pragma endscop
}
