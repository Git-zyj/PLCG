/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(2147483647, (-2147483647 - 1))) * (!2147483647)));
    var_14 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (arr_1 [i_0] [i_0]);
        var_16 = (min(var_16, (((~(arr_3 [i_0]))))));

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_17 = var_8;
            var_18 = (max(var_18, ((((arr_4 [i_0] [i_1] [i_1 - 3]) & (arr_4 [i_0] [i_1] [i_1 - 3]))))));
            var_19 ^= (((((arr_6 [i_0]) && var_6)) ? 402765256 : (arr_4 [i_1] [i_1] [i_1 - 1])));
            var_20 = (max(var_20, (((arr_5 [i_0]) % (arr_6 [i_0])))));
        }
        arr_7 [i_0] [i_0] = (14358331965388683723 <= 2474522660);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_21 = (!2527548573);
            var_22 = (arr_2 [i_3]);
            var_23 = ((!(arr_10 [i_2] [i_3 + 1] [i_3 + 1])));
            arr_12 [i_2] [i_3] [i_2] = (((3221296338862431925 + (arr_4 [i_3 - 1] [i_2] [17]))));
            arr_13 [i_2] = ((!(arr_6 [i_3])));
        }
        for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_17 [i_2] [i_4 - 2] = ((-(1130690181 != 2147483647)));
            arr_18 [i_4] = ((~((~(arr_1 [i_2] [i_2])))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_22 [i_2] = (((2147483647 || 117) ? (arr_11 [12] [i_2] [12]) : (arr_4 [i_2] [i_5] [i_2])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_24 = (min(var_24, (arr_3 [i_6])));
                            var_25 = (min(var_25, ((((arr_29 [i_6] [i_5] [i_7 + 1] [i_5] [i_5]) & 8281149051458464220)))));
                            var_26 = (-61 || 1);
                            var_27 -= (((arr_25 [i_7] [i_7 - 1] [i_7 - 2] [i_7 - 1]) ? (arr_25 [i_8] [i_7 - 2] [i_7 - 2] [i_7 + 1]) : (arr_25 [i_8] [i_8] [i_7 + 1] [i_7 - 2])));
                        }
                    }
                }
            }
            var_28 = (max(var_28, (((((((arr_24 [i_5] [i_2] [i_2]) ? (-2147483647 - 1) : var_4))) && (arr_5 [i_2]))))));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_29 = (((((arr_11 [i_2] [i_2] [i_2]) + 2147483647)) >> ((((~(arr_14 [i_2]))) + 122))));
            var_30 = ((((((~(arr_4 [16] [i_2] [i_9]))))) ? ((~(arr_6 [i_2]))) : ((min((arr_15 [i_2] [i_9]), var_3)))));
            var_31 += (~119);
        }
        var_32 = ((var_8 + (min(var_0, (arr_23 [i_2] [13] [i_2])))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_33 += var_12;
        var_34 = (arr_35 [i_10] [i_10]);
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        var_35 = (max(var_35, (((var_7 % (arr_0 [i_11]))))));
        var_36 = (((arr_2 [i_11]) * ((((arr_37 [i_11] [i_11]) % ((max(var_9, var_5))))))));
        var_37 = (((((arr_4 [i_11] [13] [i_11]) ? 116 : 10146182367597040291)) != (((~(arr_4 [i_11] [i_11] [i_11]))))));
        var_38 = ((((21 ? 0 : (arr_34 [i_11]))) > (!-16997)));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 16;i_13 += 1)
            {
                {
                    var_39 = (min(var_39, (((!(((arr_0 [i_11]) == (arr_3 [i_11]))))))));
                    arr_44 [i_13] [i_12] [i_11] = ((((var_9 || var_11) ? -109 : (arr_35 [i_11] [3]))));
                    var_40 = (((arr_4 [i_13 - 2] [i_13 - 1] [i_13 - 1]) > 0));
                }
            }
        }
    }
    #pragma endscop
}
