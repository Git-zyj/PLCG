/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 = -157;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = (((arr_8 [i_2 + 1] [i_2] [i_1] [i_2 - 1]) ? var_2 : (arr_8 [i_2 + 2] [i_2 - 1] [i_1] [i_2 + 2])));
                        var_21 = (max(var_21, 1));
                        var_22 *= ((~(arr_10 [i_3] [i_2] [i_1] [i_0])));
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = ((-(arr_5 [i_0] [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            var_23 -= -160842294;
                            arr_20 [i_0] [i_1] [4] [i_2] [i_4] [i_4] [4] = (min(var_6, ((var_0 ? var_12 : 29260))));
                            var_24 = max((((arr_5 [i_2 + 1] [i_1]) ? (arr_17 [i_4] [i_1] [i_4] [i_4] [i_4]) : (1 - var_15))), ((-(((144 < (arr_19 [i_0] [i_1] [i_2 - 1] [i_4] [i_4] [i_5] [i_5])))))));
                        }
                        var_25 = (((((var_16 * (min((arr_16 [i_1] [1] [i_1] [i_2] [3]), (arr_19 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_4])))))) || (!var_18)));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_6] [i_1] = ((max(-8387059981032826752, 161)));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_26 += -var_9;
                            var_27 -= (((arr_3 [i_2 + 2]) ? var_9 : 8387059981032826751));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2 + 1] [i_2] [i_1] [i_8] = (max(((2560334840 ? 164 : 1)), ((7680 ? -7344 : -13022))));
                            var_28 = (((((((!(arr_9 [i_2 - 1] [i_6] [i_8]))))) * (min((arr_26 [i_0] [i_6] [i_2 - 1] [i_6] [i_1]), (arr_22 [i_1] [i_8]))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            var_29 |= (var_2 || var_0);
                            arr_33 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = var_4;
                            arr_34 [i_0] [i_1] [i_2] [i_1] [i_0] [i_9] [i_6] = (((((1 ? 6518191949351649736 : 1))) ? var_18 : (arr_21 [i_0] [i_1] [i_2 + 2] [i_9])));
                            var_30 = (((((arr_6 [8] [8]) ? (arr_10 [i_9] [i_6] [i_2] [i_1]) : var_11)) / (arr_21 [i_2 + 1] [i_2 - 1] [i_9 - 1] [i_9])));
                            arr_35 [i_1] [i_1] [i_6] = -1259754401;
                        }
                    }
                    var_31 -= var_15;
                    arr_36 [i_1] [i_1] [i_2] = (!32256);
                    arr_37 [i_0] [i_1] [i_1] = var_12;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        arr_40 [i_10] = min(((max(198, (arr_9 [i_10] [i_10] [i_10])))), (arr_11 [i_10] [i_10]));
        var_32 = ((-(max((-64 & 166), var_0))));
        var_33 = var_18;
    }
    var_34 = (((((-108 ? (~64) : ((1 ? var_2 : var_0))))) || var_9));
    #pragma endscop
}
