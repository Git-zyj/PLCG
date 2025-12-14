/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -99;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        var_14 *= (min(((83 ? -18808 : (arr_1 [4] [i_0]))), (12611 || -12607)));
        var_15 = ((-(((arr_0 [i_0]) ? 4144248381 : (arr_1 [i_0] [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_16 = (max(var_16, (arr_2 [10])));
            arr_4 [i_0] [i_0] = (((arr_0 [i_0]) || 1482538669));
            var_17 *= (((arr_3 [i_0 + 1] [i_0 + 1]) ? (arr_3 [i_0 - 1] [4]) : var_3));

            for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
            {
                var_18 |= (arr_2 [i_1]);
                var_19 += (arr_8 [i_1]);
                var_20 = (max(var_20, 12611));
            }
            for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
            {
                var_21 = (((arr_11 [i_0 + 1] [i_0 + 1] [i_0]) ? (arr_11 [i_0] [i_3] [i_0]) : (arr_9 [i_0 - 1] [i_1] [i_1])));
                var_22 = (((arr_6 [i_0 + 1] [i_0]) <= var_8));

                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_23 += var_8;

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_24 = (arr_13 [i_0] [i_0 + 1]);
                        var_25 = (((arr_7 [i_3 + 1] [i_1] [i_3 + 1]) || 12618));
                        var_26 = (~var_3);
                    }
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        var_27 = (((arr_12 [i_0] [i_6 - 1]) ? ((12612 ? var_0 : (arr_2 [i_3]))) : -12621));
                        var_28 = arr_0 [i_0];
                        var_29 -= ((7 ? 12612 : (~var_10)));
                        arr_20 [10] [i_0] = 86;
                    }
                    var_30 = (((arr_14 [i_0]) ? 224 : 1));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_31 = var_0;
                        var_32 = (((arr_22 [i_0 - 1] [i_3 - 2] [i_3 - 2] [i_3]) & (arr_22 [i_0 - 1] [i_3 + 1] [i_3] [i_3 + 1])));
                        arr_26 [1] [i_0] [i_0] [1] [i_0] = 65533;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_33 = 1165139869960510346;
                        var_34 ^= (((arr_27 [i_0] [i_0 + 1] [i_3 - 1] [i_7] [i_7]) % ((-(arr_0 [i_7])))));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_35 = (-1968874138 ^ 44940);
                        arr_34 [i_0] [i_1] [4] [i_7] [i_0] = ((var_8 ? -20989 : var_2));
                        var_36 *= (arr_14 [i_7]);
                    }
                    var_37 = (arr_13 [i_0] [i_0]);
                }
                var_38 += (arr_31 [3] [i_3] [i_1] [i_0] [3] [i_0]);
                var_39 = (arr_17 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_3] [i_3 + 1]);
            }
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_40 = (((11768717992363548442 ? (arr_37 [i_0 + 1] [i_0 - 1]) : 12597)));
            arr_39 [i_0] = ((((min((arr_35 [i_11] [i_0]), (max((arr_14 [i_0]), 28))))) ? ((1 ? 13052 : (var_3 | var_1))) : 52467));
            var_41 = (max((2812428627 && 44923), (min(1589308476, (arr_17 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
            var_42 *= (((((arr_16 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]) ? ((var_0 ? var_10 : var_11)) : (474908189 / var_5)))) < (((arr_37 [i_0] [i_0 - 1]) - var_6)));
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {
            arr_43 [i_0] [i_0] = (((arr_19 [i_0] [i_0] [i_12 + 4]) ^ var_9));
            var_43 = (((arr_17 [13] [13] [i_0] [13] [i_12] [i_12]) << (((arr_17 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) - 12219))));
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_44 = (min(var_2, 17891));
            var_45 = (max((((max(1114932064, (arr_47 [i_0]))) & (((204 ? (arr_41 [i_0] [i_0]) : (arr_25 [i_13] [i_0 - 1])))))), 3843));

            /* vectorizable */
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                var_46 = ((arr_9 [i_0] [i_0 + 1] [i_0]) > var_9);

                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    var_47 += 0;
                    var_48 |= var_11;
                    var_49 = (arr_40 [i_15] [i_14] [i_13]);
                }
            }
        }
        arr_56 [i_0] [i_0] = arr_9 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_16 = 1; i_16 < 21;i_16 += 1)
    {
        var_50 ^= var_8;
        var_51 = (arr_58 [i_16] [i_16]);
        var_52 += ((arr_59 [22]) ? (arr_58 [i_16 + 2] [i_16 - 1]) : 8191);
    }
    for (int i_17 = 0; i_17 < 19;i_17 += 1)
    {
        var_53 = ((((min((min(var_9, var_3)), (((-23 ? 234 : 474908189)))))) ? ((max(-474908190, 46))) : ((max((arr_58 [i_17] [i_17]), var_1)))));

        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            var_54 = (min(156, 2812428623));

            for (int i_19 = 0; i_19 < 19;i_19 += 1)
            {
                var_55 = (2812428623 & -6);
                arr_70 [i_17] [i_17] [i_17] [i_17] = 474908187;
                var_56 = ((+(max((arr_59 [i_17]), ((-1 | (arr_60 [i_17] [i_19])))))));
                var_57 = ((-(((max(var_5, (arr_57 [i_18]))) * (arr_60 [i_17] [i_18])))));
            }
        }
        for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
        {
            var_58 ^= (((arr_71 [i_17] [i_17] [i_17]) % (((arr_58 [i_17] [i_20]) ? (arr_58 [i_17] [i_17]) : 24))));
            var_59 = ((~((1 ? (arr_61 [i_17]) : var_6))));
            var_60 = 2602945474;
        }
        for (int i_21 = 0; i_21 < 19;i_21 += 1) /* same iter space */
        {
            var_61 -= ((((min(2146102261, 9223372036854775803))) ? var_2 : var_9));
            var_62 = (((((arr_60 [i_17] [i_21]) || (arr_60 [i_21] [i_17]))) ? var_0 : (min((((-15 ? (arr_68 [i_17] [i_17] [i_17] [i_17]) : (arr_61 [i_21])))), (((arr_62 [i_17] [i_17] [i_17]) | 1692021832))))));
            var_63 += (arr_62 [4] [4] [4]);
        }
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            var_64 = ((-1482538683 ? (arr_73 [i_17] [i_17]) : (min((arr_73 [i_17] [i_17]), (arr_73 [i_17] [i_17])))));
            var_65 = 18446744073709551615;
        }
    }
    #pragma endscop
}
