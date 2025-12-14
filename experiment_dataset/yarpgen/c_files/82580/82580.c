/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= -var_12;
    var_18 = var_10;
    var_19 = (((var_13 / var_14) ? var_6 : 0));
    var_20 = var_8;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 += (((((!(arr_6 [i_3] [i_3 + 1] [i_3] [i_3])))) >> (((arr_0 [i_0]) & (arr_3 [i_1 + 2] [i_0])))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_22 = ((var_5 & (arr_10 [i_0])));
                            var_23 = (arr_2 [i_0] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_14 [i_1] [i_0] [i_1] [i_0] [i_5] = ((~(((arr_4 [i_0] [1]) / (arr_6 [2] [0] [i_1] [i_0])))));
                            var_24 = (((4308 & 1) ? -var_4 : 1));
                            arr_15 [i_0] [i_0] [i_5] = ((-11 ? 1 : 511));
                            var_25 += (arr_9 [i_5] [i_0 + 1]);
                        }
                    }
                }
            }
        }
        arr_16 [i_0] = (arr_0 [i_0 + 1]);
        var_26 = (arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 2]);
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {

        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            var_27 *= ((((((((max(51261, -64))) && (arr_20 [i_7 + 1] [i_6]))))) & ((((((arr_20 [i_7 + 2] [i_6]) << (((arr_20 [i_6] [i_6]) - 15391657276099984755))))) ? (((var_13 ? var_5 : 249))) : (arr_17 [i_7 - 2])))));
            var_28 *= (~8388606);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_29 ^= 3340868620;
            var_30 = (max(var_30, (((!(arr_20 [i_6] [i_6]))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {
            var_31 = (((arr_19 [i_6]) * var_10));

            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                var_32 = (max(var_32, (((((var_10 ? (arr_19 [i_6]) : 51258)) >> (((((arr_20 [i_9] [11]) ? var_4 : 4294967271)) - 1794736493)))))));

                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    var_33 += ((229 << (((arr_21 [i_6] [i_9]) - 205))));
                    var_34 -= (((((-9 ^ (arr_22 [i_9])))) / ((61227 ? (arr_20 [i_6] [i_6]) : (arr_21 [i_6] [i_11])))));
                    var_35 = (((arr_21 [i_10 - 1] [i_10 + 1]) * (arr_21 [i_10 - 2] [i_10 - 2])));
                    var_36 *= (((((-54 ? 35 : 1))) ? (arr_29 [i_10] [i_10]) : ((1 ? 172 : 255))));
                }
                var_37 = (min(var_37, ((((arr_21 [i_9] [i_10]) ? var_0 : (arr_27 [i_10] [i_6]))))));
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_38 = (((arr_31 [i_12] [i_9]) ? (arr_17 [i_9]) : 32));
                var_39 = ((arr_28 [i_6]) ? 4308 : 0);
            }
            var_40 -= (((arr_30 [i_6] [i_9] [i_9] [i_9]) < (arr_21 [i_6] [i_9])));
            arr_32 [i_6] [i_9] [i_9] = ((-(arr_27 [i_9] [i_9])));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
        {

            for (int i_14 = 4; i_14 < 12;i_14 += 1)
            {
                arr_37 [i_14] [i_13] = (((arr_33 [i_6]) / (arr_23 [i_14 + 1] [i_14 - 3] [i_14 + 2])));
                var_41 = ((-((var_0 ? (arr_33 [i_6]) : (arr_36 [i_6] [i_13] [i_13])))));
            }
            arr_38 [i_13] &= (((arr_21 [i_6] [i_6]) ? (arr_24 [i_6] [i_13]) : (var_14 + -3719302154035506556)));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 12;i_16 += 1)
                {
                    {

                        for (int i_17 = 0; i_17 < 15;i_17 += 1)
                        {
                            arr_45 [i_13] [i_13] = (arr_39 [i_16] [i_16 - 1] [i_16]);
                            var_42 = (237 & 2);
                            var_43 = (max(var_43, (120 & 1)));
                            var_44 = ((14293 ? ((-110 ? 4308 : 14295)) : ((((-32767 - 1) && 571129373)))));
                            arr_46 [i_6] [9] [i_15] [i_16 - 1] [i_16] [i_6] = ((~(((((arr_28 [i_6]) + 2147483647)) >> (444 - 424)))));
                        }

                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_45 = ((~(((arr_29 [i_6] [i_6]) - (arr_19 [i_6])))));
                            var_46 = (((arr_42 [i_13] [10] [i_13] [2]) ? (((arr_34 [i_13]) ? var_11 : 1622860258)) : -1));
                            var_47 = ((32 & (arr_42 [i_18] [i_16 - 3] [i_16 - 2] [i_13])));
                        }
                        var_48 = ((var_8 ? ((~(arr_30 [8] [i_16 + 3] [8] [i_15]))) : 88));
                        arr_49 [i_6] [i_16] = 14295;
                    }
                }
            }
        }
        var_49 = (arr_19 [2]);
        arr_50 [i_6] [i_6] = (arr_31 [i_6] [i_6]);
        arr_51 [i_6] [i_6] = (((((~((max((arr_34 [i_6]), var_0)))))) | (arr_31 [i_6] [i_6])));
        var_50 = ((+((min((arr_24 [i_6] [i_6]), (arr_24 [i_6] [11]))))));
    }
    #pragma endscop
}
