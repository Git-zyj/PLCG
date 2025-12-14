/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
            {
                var_20 &= ((1 ? (arr_6 [i_0 + 3] [i_1] [i_2 - 1] [i_2 + 2]) : (arr_6 [i_0] [i_1] [i_0] [i_0])));
                var_21 = (min(var_21, -52));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_22 = (min(var_22, var_11));
                            var_23 = (((~270203147535106050) ? (arr_2 [i_0 + 2]) : 28435));
                            var_24 *= var_15;
                            var_25 *= ((((arr_5 [i_4] [0] [0]) & (arr_8 [i_3] [i_4] [i_4] [i_0]))) >> (-5149 + 5193));
                        }
                    }
                }
                var_26 |= 1841;
            }
            for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
            {
                arr_13 [i_5] [i_0] = arr_5 [i_5] [i_1] [i_0 - 3];
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_7] = 167;
                            arr_20 [i_1] [i_1] [10] [i_6] [i_0] |= (((arr_3 [i_7] [i_1]) << (-52 + 57)));
                            var_27 &= ((((-22445 ? (arr_6 [6] [i_1] [i_5] [i_5]) : var_12)) * (arr_7 [i_1] [i_6 - 1] [0] [i_0 + 3] [i_1] [i_5 + 3])));
                            var_28 = -3077120242752979703;
                            var_29 = ((-52 ? 3520999427 : 5178));
                        }
                    }
                }
                var_30 = ((-4294967295 | ((162822596 - (arr_18 [i_0] [i_0] [i_0 + 3])))));

                for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    arr_23 [i_1] [i_0] = (arr_16 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_5] [i_8]);
                    var_31 |= 143;
                    var_32 = -30554;
                }
                for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    var_33 = ((!(arr_18 [i_0] [i_0 + 3] [i_0 + 3])));
                    var_34 -= arr_12 [i_9 - 1];
                    arr_26 [i_0] [i_0 - 3] [i_5] [i_0] [i_5] [i_9] = ((~(arr_0 [i_0] [i_9 + 1])));
                }
            }
            for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
            {
                var_35 = (((arr_10 [i_0 - 3] [i_1] [i_1] [10]) >> (var_10 - 8480768479124850368)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_36 |= 1841;
                            arr_34 [4] [i_1] [i_1] [i_0] [i_10] [i_11] [4] = 163;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 12;i_14 += 1)
                    {
                        {
                            var_37 *= ((((127 ? 2052861991 : -489)) <= (((2968905023 ? 10220 : 22748)))));
                            var_38 = (min(var_38, ((~((~(arr_15 [i_1] [i_1])))))));
                            var_39 = (max(var_39, var_0));
                        }
                    }
                }
            }
            var_40 = (arr_37 [i_0] [i_0] [i_1]);
        }
        /* LoopNest 2 */
        for (int i_15 = 3; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 12;i_18 += 1)
                        {
                            {
                                var_41 = (min(var_41, (((!(arr_45 [i_18] [i_18 + 1] [i_16] [i_15 - 2]))))));
                                var_42 = (max(var_42, (arr_15 [i_16] [i_17 + 1])));
                                var_43 = (((!1712062525) == -1845));
                                var_44 = var_4;
                                arr_52 [i_0] [0] [i_15] [i_16] [i_0] [i_16] = 512;
                            }
                        }
                    }
                    var_45 = (min(var_45, 1841));
                    var_46 = (((var_17 + 9223372036854775807) << ((((((arr_43 [4] [4] [i_0 - 2]) < (arr_37 [i_0 - 3] [i_0 + 1] [13])))) - 1))));

                    for (int i_19 = 3; i_19 < 14;i_19 += 1) /* same iter space */
                    {
                        arr_57 [i_0] [4] [i_0] [i_0] = ((((arr_7 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) != (arr_8 [i_19 - 1] [i_0] [i_0] [i_0 + 2]))));
                        var_47 = (((arr_54 [i_0] [i_15 - 2] [i_0]) ? (arr_46 [i_16] [i_16] [i_16] [i_16]) : 508569474));
                    }
                    for (int i_20 = 3; i_20 < 14;i_20 += 1) /* same iter space */
                    {
                        var_48 = var_4;
                        arr_60 [i_0] [i_0] [i_0] [i_0] = ((-(arr_35 [i_0] [i_0 + 1] [i_16] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_21 = 0; i_21 < 24;i_21 += 1)
    {
        arr_63 [i_21] = ((min((arr_62 [i_21]), (!614077136))));
        var_49 |= 153;
        var_50 = ((9162315461440886406 != (arr_62 [i_21])));
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 12;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 12;i_23 += 1)
        {
            {
                arr_70 [i_22] [i_23] [i_23] = (((max((arr_69 [11] [i_23]), (arr_43 [i_22] [i_22] [i_22])))) ? (((arr_3 [i_23] [i_23]) % (arr_3 [i_23] [i_23]))) : (((max((arr_41 [i_23] [i_22]), (arr_41 [i_22] [i_22]))))));
                var_51 = (((((min(var_14, ((((arr_44 [i_23] [i_23] [i_23] [i_23]) || 20299914062607185))))))) | (((((var_10 ? (arr_49 [i_22] [i_22] [i_22] [i_22] [i_23] [i_23]) : 1961892495))) ? (arr_16 [i_22] [i_22] [i_22] [i_23] [i_23]) : ((((92 < (arr_27 [i_23])))))))));
                var_52 = ((29908 ? (arr_46 [11] [i_22] [i_22] [i_22]) : ((6027790178962219632 ? 2047 : (arr_44 [i_22] [i_22] [i_22] [i_23])))));
            }
        }
    }
    #pragma endscop
}
