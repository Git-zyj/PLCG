/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((((max(var_1, var_0))) ? var_0 : ((((var_0 ? var_4 : var_0))))));
    var_12 = 2317143395076369317;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_13 ^= ((-((87 ? (-127 - 1) : 0))));

            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        arr_12 [i_3] [i_1] [i_2] [i_3] [i_4] = (((~-3211) | ((-(arr_11 [i_4 - 3] [i_3] [i_3] [i_2] [i_1] [i_1] [i_0])))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] = (~1);
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_3] [i_1] [i_5 + 1] |= var_7;
                        var_14 -= var_9;
                        arr_19 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] = -var_0;
                        var_15 = ((((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) * 0))) ? ((((((max((arr_1 [i_5 + 1]), (arr_4 [i_3 + 4] [i_2 + 1] [11]))))) >= (max((arr_14 [i_3]), 32309))))) : var_9));
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_16 = max(((((arr_0 [i_3] [2]) ? (arr_0 [i_0] [i_2 - 2]) : var_6))), (((arr_0 [i_1] [i_6]) ? var_1 : (arr_0 [i_3 + 2] [i_6 - 1]))));
                        arr_22 [i_6] [i_3] [i_3] [i_0] [i_0] = (((((~(arr_10 [i_0] [i_6 + 1] [i_0])))) ? (~var_4) : ((-(((arr_0 [i_2] [i_1]) ? (arr_4 [i_1] [i_3] [i_6]) : (arr_21 [i_3] [i_1] [i_2 - 2])))))));
                        var_17 = ((((var_3 & (arr_6 [i_0] [i_0]))) | (arr_14 [i_3])));
                    }

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_25 [i_0] [i_3] = ((!((max((arr_1 [i_2 - 2]), (arr_11 [i_3 + 2] [i_1] [i_1] [i_0] [i_0] [i_2] [i_2 - 1]))))));
                        arr_26 [i_0] [i_3] [i_2] [2] [i_7] = (((arr_24 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2] [i_2]) && (1 - 124)));
                    }
                    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        arr_29 [2] [i_3] [2] [i_1] [i_3] [i_0] = (((((!(arr_23 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] [i_8]))) ? (max((arr_10 [i_2] [4] [i_2]), var_7)) : (arr_9 [i_0] [i_0] [i_3] [i_0] [i_0]))));
                        var_18 = (((((arr_17 [i_3] [i_8] [i_3] [i_3 + 2] [6] [i_3]) > (arr_7 [i_0] [16] [i_3] [i_3] [i_8 - 2] [i_8 + 2]))) ? (arr_1 [i_0]) : (arr_8 [i_0] [i_1] [i_2 - 1] [i_3 + 1] [i_0])));
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((((!(-9223372036854775807 - 1))) ? (((arr_20 [i_0]) ? (((arr_24 [i_0] [i_1] [i_1] [i_3] [i_8]) ? (arr_28 [i_0] [i_1] [i_2 - 2] [i_2] [i_3 + 2] [i_8 + 4] [i_3 + 2]) : 1)) : (((min((arr_1 [i_0]), 132)))))) : var_6));
                        arr_31 [i_0] [i_3] [i_3] [17] [i_3 + 3] [i_3] [i_8 - 2] = ((((((arr_10 [i_8] [i_8 + 4] [i_2 + 1]) ? (arr_10 [i_8] [i_8 + 4] [i_2 + 1]) : (arr_10 [i_2 + 1] [i_8 + 4] [i_2 + 1])))) ? (~var_3) : var_5));
                    }
                    for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_1] [i_3] [i_3 + 3] [14] = (((((((arr_10 [i_0] [i_1] [i_1]) ? (arr_3 [i_1] [i_3] [i_1]) : var_6))) || (arr_2 [i_9]))));
                        var_19 = (arr_3 [i_1] [i_1] [i_1]);
                        arr_37 [i_3] [i_3] [i_3] [i_3] [i_9] = arr_24 [i_0] [i_2 + 1] [i_0] [i_3] [i_9];
                    }
                    arr_38 [i_3 - 1] [i_3] [i_1] [i_3] [i_0] = ((29274 ? ((((arr_32 [i_0] [15] [i_2] [i_2 - 1] [i_3] [i_3 + 3]) * (arr_9 [i_0] [i_1] [i_3] [i_2] [i_3])))) : (8308930132456698704 && -8308930132456698705)));
                }
                var_20 = (max(var_20, (arr_6 [i_0] [15])));
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
        {
            arr_42 [i_10] |= ((var_1 ? (arr_2 [i_0]) : (arr_2 [i_10])));

            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                arr_45 [i_0] [i_10] [i_11] [i_11] = (arr_20 [i_11]);
                arr_46 [i_0] [i_10] [i_0] = (arr_27 [i_10] [i_10]);
                var_21 = -112;
                arr_47 [i_0] [i_10] [i_11] = (((arr_16 [i_10] [6] [i_10] [i_10] [i_10]) == (arr_16 [i_0] [i_0] [i_10] [i_10] [i_11])));
            }
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_22 = (max(var_22, ((max(27901, -90)))));
            arr_50 [i_0] [i_12] [i_12] = ((~(arr_34 [i_12] [i_12] [i_12] [i_0] [i_0])));
            arr_51 [i_0] [12] [i_0] |= (arr_0 [i_0] [i_12]);
        }
        var_23 ^= ((var_10 && ((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : -1954785694)))));
    }
    #pragma endscop
}
