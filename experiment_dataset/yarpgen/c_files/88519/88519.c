/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(((max(var_0, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_12 -= 108;

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_8 [i_0] [13] [i_2] [i_2] = (((arr_2 [i_1 + 3] [i_2 + 2]) ^ (arr_2 [i_1 - 1] [i_2 + 3])));
                        var_13 += ((-(arr_4 [i_1] [i_1] [i_1 + 3])));
                        arr_9 [i_2] [i_2 - 2] [i_2] [4] [i_2 - 1] = (arr_2 [i_2] [i_2 - 3]);
                        var_14 = (min(var_14, ((+((var_9 ? (arr_2 [i_0] [i_0]) : (arr_6 [i_0])))))));
                    }
                    arr_10 [i_2] = (max(205, (min((arr_4 [i_2 + 3] [i_1 + 3] [i_0]), 147))));
                    arr_11 [i_2] [10] [i_2] = (max(var_2, (((arr_3 [i_0]) | var_10))));
                    arr_12 [i_2] [i_1] = ((var_6 << ((((108 | (arr_5 [i_2] [i_2] [i_2 + 1]))) - 23667))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_16 [i_0] [i_1] [i_4] = 105;
                    var_15 = (((!(((-2138621013 ? -31640 : 144))))) ? (arr_3 [i_0]) : ((((((arr_7 [i_0] [i_0] [i_0] [i_4] [i_0] [12]) ? var_10 : (arr_7 [6] [13] [i_4] [i_4] [i_4] [1])))) ? (arr_2 [i_0] [i_1 + 3]) : (((164 && (arr_15 [i_0])))))));
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] [i_0] = (~106);
                    var_16 = (max(var_16, (!-8579692523347885776)));
                }
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    var_17 = ((((((arr_19 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6]) ? (arr_19 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6]) : (arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 1])))) ? (min((arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 1]), var_3)) : (((arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 1]) >> (((arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 1]) - 5630956728924939907))))));
                    arr_25 [i_0] [i_6] = ((((((arr_7 [i_0] [i_0] [i_0] [i_6] [i_6 + 1] [i_6]) ? -32766 : (arr_15 [i_0]))))) ? (31650 ^ 125) : ((~((-18538 ? (arr_24 [i_0] [i_1] [i_6]) : (arr_24 [i_0] [i_1] [i_6]))))));
                    arr_26 [i_6] [i_1] [i_6] = ((((var_0 == (1185189205 ^ 1))) ? (((min(1, (arr_15 [11]))))) : 134));
                }
                /* vectorizable */
                for (int i_7 = 4; i_7 < 11;i_7 += 1)
                {
                    arr_30 [i_0] = (((arr_24 [i_7] [i_7] [2]) % var_2));
                    var_18 = (arr_15 [i_7 - 2]);
                    arr_31 [i_0] [i_1 + 2] [i_7] = var_7;

                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (136 > 2748)));
                        var_20 = (max(var_20, (arr_1 [i_0] [i_0])));
                        var_21 = (((var_2 ? (arr_0 [i_0]) : 1784557164637873241)));
                        var_22 += 9223372036854775807;
                        var_23 = (arr_28 [i_1 + 3]);
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_24 *= (15258 | var_1);

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_25 = (((arr_3 [i_1 + 2]) ? 13667 : (((arr_32 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : var_7))));
                            var_26 = -5067;
                            arr_39 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = (!var_4);
                            var_27 = (((-(arr_38 [i_9] [i_9] [i_10] [i_9] [i_9] [i_9] [10]))));
                            arr_40 [i_7 + 1] [i_7] [i_10] [i_7] [i_7] = (arr_28 [i_1 + 2]);
                        }
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            arr_47 [i_0] [i_12] [i_12] [i_11] = (arr_19 [i_12] [i_1] [i_1] [i_11]);
                            var_28 = (arr_0 [i_1 - 1]);
                            arr_48 [i_0] [i_7 - 3] [i_12] = -8579692523347885800;
                            var_29 = ((~(arr_4 [7] [7] [7])));
                            var_30 = ((arr_13 [i_1 - 1] [i_1] [i_1]) ? (arr_42 [i_1 - 1] [i_1] [i_1] [i_1 + 1]) : (arr_13 [i_1 - 1] [i_1] [i_1 + 3]));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            arr_53 [i_0] [i_1] [i_7] [8] [4] [i_7] [i_1] = (((arr_29 [i_1] [i_1 + 1] [i_1 + 3] [i_1 + 2]) ? (arr_28 [i_7 - 1]) : (arr_5 [i_7 + 3] [i_1 + 2] [i_1])));
                            var_31 = (max(var_31, (((((arr_52 [i_0] [i_1] [i_1 + 1] [i_1] [i_1 + 3]) + 2147483647)) << (125 - 125)))));
                            var_32 = (!45);
                            var_33 = arr_19 [i_7] [i_7 - 1] [i_7 + 2] [i_7];
                            var_34 = (((arr_37 [i_7 - 2] [i_7 - 2] [i_7 - 4] [i_7 - 4] [i_7]) ? 1024 : var_10));
                        }
                        var_35 = (arr_0 [i_7 - 3]);
                    }
                }
            }
        }
    }
    var_36 = (~var_10);
    var_37 = var_3;
    #pragma endscop
}
