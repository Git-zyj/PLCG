/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_15 += (min(24985, (arr_1 [i_0 + 1])));

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_16 = (max(var_16, ((((~24982) ? (arr_1 [i_0 + 1]) : 2388757257)))));
            var_17 = (max(var_17, (arr_4 [i_0] [4])));
        }
        var_18 = (~var_4);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_8 [i_2] = ((~(((arr_0 [i_2]) ? 1127593100 : -24986))));

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_19 = var_5;

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_20 = (min(var_20, ((((arr_15 [12] [i_2] [i_2] [i_5] [i_4] [12]) ? (arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_15 [1] [i_4] [i_4] [i_3] [i_2] [0]))))));

                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        var_21 = ((var_6 >= (((arr_7 [5] [5]) ? (arr_9 [5] [i_5]) : 18320491417168120454))));
                        arr_19 [i_4] [i_4] = 35106545;
                    }
                }
                for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, (-24986 | 4360)));
                    arr_23 [i_7] [i_4] [i_4] [i_4] [i_2] [12] = ((~(arr_7 [i_7 + 4] [6])));
                    arr_24 [i_2] [i_2] [i_2] [i_4] = 18;
                }
                for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        arr_31 [11] [11] [i_4] = (arr_12 [i_2] [i_4] [i_4]);
                        arr_32 [i_4] [i_4] [i_4] = 8;
                        var_23 ^= (((arr_28 [i_8 + 1] [i_9] [i_8 + 1] [i_9] [5] [2] [i_9]) << (16175 - 16141)));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        var_24 = (arr_6 [5] [5]);
                        var_25 -= (arr_21 [i_8] [i_8 + 4] [i_8] [5] [i_8 + 2]);
                        arr_35 [6] [i_8 + 4] [i_4] [11] [11] = var_9;
                        var_26 *= (arr_6 [i_2] [i_3]);
                    }
                    arr_36 [i_2] [5] [i_4] [i_2] = (((arr_4 [i_4] [1]) < (arr_4 [i_4] [12])));
                    var_27 = ((-16200 ? 18320491417168120432 : -18));
                    var_28 *= ((32754 ? -3926 : -20060));
                }
                for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
                {
                    arr_41 [i_11] [i_3] [i_4] = (-25014 % -27);
                    arr_42 [i_2] [2] [6] [i_4] [i_11] = -18237;
                    arr_43 [i_2] [i_4] [i_2] [i_2] [12] [i_11] = ((~(arr_28 [i_3] [i_3] [i_11 + 1] [i_11 + 1] [i_3] [9] [12])));
                    var_29 = (arr_39 [i_11 + 1] [11] [i_11 + 3] [i_11 - 1] [i_11 + 2]);
                }

                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    var_30 -= 15;
                    var_31 = ((arr_17 [i_4] [12] [i_12 + 2] [i_12 + 1] [i_12 + 1] [10]) & (arr_17 [i_2] [i_4] [i_4] [i_12 + 3] [i_12 + 2] [i_12 + 2]));
                }
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    var_32 = (((var_4 ? (arr_29 [i_4] [i_4] [i_4] [1] [i_4]) : var_10)));
                    var_33 = (min(var_33, (((var_6 <= (-16181 & -16179))))));
                }
                for (int i_14 = 1; i_14 < 9;i_14 += 1)
                {
                    var_34 &= (((18320491417168120454 && var_5) <= (arr_38 [i_2] [i_3] [i_14])));
                    var_35 = (((arr_6 [1] [i_4]) <= ((-(arr_45 [i_3])))));
                    arr_51 [i_2] [i_3] [i_4] = (arr_10 [11] [i_4] [i_3]);
                }
                var_36 = (arr_17 [i_2] [i_3] [i_4] [0] [i_2] [i_2]);
                var_37 = (~var_2);
            }
            var_38 = var_8;
            arr_52 [i_2] [i_2] [8] = ((((18446744073709551613 >> (4259860758 - 4259860749))) - ((12349565233268876507 ? 1303925495 : 534426039519874577))));
            var_39 &= var_2;
        }
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            arr_55 [i_2] = 18446744073709551596;
            var_40 = (max(var_40, var_1));
            arr_56 [i_2] = (((((var_8 ? -16160 : 16351501128219361610))) ? var_5 : var_9));
        }
    }
    for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
    {
        var_41 = var_10;
        var_42 += (((~2306) > (min((arr_2 [i_16]), -5294))));
        arr_60 [1] = (((((-32766 ? (min((arr_57 [10]), (arr_2 [i_16]))) : (arr_2 [17])))) && ((var_2 == (((-21362 + 2147483647) << (((arr_5 [i_16]) - 18352))))))));
    }
    for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
    {
        arr_63 [i_17] [4] = (~(((arr_5 [i_17]) ? (arr_0 [i_17]) : (arr_57 [12]))));
        arr_64 [i_17] = ((var_7 > (((max(((((arr_4 [18] [i_17]) > (arr_4 [16] [16])))), (arr_4 [2] [i_17])))))));
    }
    var_43 = (4294967295 <= var_10);
    #pragma endscop
}
