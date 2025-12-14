/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((4243983992767534051 ? (-2147483647 - 1) : ((min(0, (arr_0 [i_0])))))) | var_2));
        arr_4 [i_0] = (min(0, 2044));
        var_17 = (max(var_17, (arr_1 [i_0])));
        arr_5 [i_0] = (2508228958 >> ((((2059 ? 17018089952046180755 : -594541138)) - 17018089952046180746)));
        var_18 -= var_3;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_19 = ((~(~18141141813885903152)));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_20 -= (((-2022 + 2147483647) >> (((~var_13) ? ((((arr_10 [4] [4] [i_3]) != (arr_13 [i_1] [6] [i_3])))) : ((~(arr_6 [8])))))));
                arr_14 [7] [i_1] [i_1] = (arr_2 [i_1]);
            }
            for (int i_4 = 4; i_4 < 7;i_4 += 1)
            {
                var_21 = ((-((((arr_6 [i_1]) != (arr_13 [i_4 - 3] [i_1] [i_4 + 1]))))));
                var_22 = (max(var_22, (2044 <= 9223372036854775808)));
            }
            arr_17 [i_1] [i_1] = (((min(-var_3, (arr_11 [i_1] [i_2]))) | (((((6138 ^ (arr_12 [i_2])))) ? var_11 : (((arr_6 [i_1]) ^ var_1))))));
            var_23 = ((((arr_11 [i_1] [i_2]) + 2147483647)) >> (((~1108073730) + 1108073742)));

            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_24 += 24;

                /* vectorizable */
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        arr_26 [i_7] [i_1] [i_5] [i_1] [i_1] = (arr_2 [i_7 + 1]);
                        var_25 = (max(var_25, (arr_24 [i_2] [i_7 - 2] [10] [i_6] [i_2])));
                        var_26 ^= var_15;
                    }
                    for (int i_8 = 2; i_8 < 7;i_8 += 1)
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_1] = (arr_9 [5]);
                        var_27 = ((~(arr_23 [i_8] [i_6] [i_2] [i_1])));
                    }
                    arr_31 [i_1] [i_2] = ((var_15 + (arr_0 [i_5])));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, 1099868145));

                    for (int i_10 = 4; i_10 < 10;i_10 += 1)
                    {
                        arr_37 [i_1] [3] [0] [i_1] [i_1] [i_1] [2] = ((var_1 | (arr_24 [i_10 - 4] [i_10 - 2] [i_1] [i_9] [0])));
                        arr_38 [i_1] = (((arr_18 [i_10 + 1]) ^ (arr_22 [i_10 - 3] [i_10 - 3] [i_10 - 3] [i_9] [i_10] [i_10 - 3])));
                        var_29 *= -2147483633;
                        arr_39 [i_1] [0] [i_1] [i_9] = (arr_6 [i_1]);
                    }
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        arr_44 [i_1] [i_1] = (13293176051496277777 != 5153568022213273836);
                        var_30 += (6138 | 9223372036854775808);
                    }
                    arr_45 [10] [i_1] [0] [i_5] [i_9] = (arr_6 [i_1]);
                }
                arr_46 [i_1] [6] [i_1] [i_1] = (((arr_29 [6] [6] [i_5]) <= ((min(28672, 60787)))));
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
            {
                arr_49 [i_1] [i_1] [i_2] = (max(((max((arr_40 [i_1] [i_1] [i_1] [i_2] [i_12]), -123))), (min((arr_29 [i_1] [3] [3]), (arr_7 [i_1] [i_12])))));

                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    var_31 *= ((arr_10 [i_2] [4] [i_13]) ? var_1 : (arr_11 [i_2] [i_1]));
                    arr_52 [6] [i_1] [i_1] [i_1] = ((((((arr_25 [i_1] [i_2] [i_1] [i_13] [i_2] [i_2] [i_13]) ? (arr_25 [i_1] [i_2] [i_1] [i_1] [i_1] [i_12] [i_13]) : (arr_25 [i_1] [i_2] [i_1] [i_12] [i_1] [i_2] [i_13])))) ? ((((arr_50 [i_1] [i_2]) + (arr_8 [i_1] [i_13])))) : (min(var_13, 3843579263))));
                    arr_53 [i_1] [i_1] = (arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                }
            }
        }

        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            arr_56 [i_1] [i_1] = ((!((min((~9223372036854775808), ((min((arr_2 [i_14]), var_14))))))));
            var_32 = (max(var_32, (((((-(((arr_55 [4] [i_1] [0]) ? var_5 : 0)))) ^ (!2))))));
        }
    }
    var_33 = 1032575871;
    var_34 = var_12;
    var_35 = var_1;
    var_36 = var_5;
    #pragma endscop
}
