/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 281474976710655;

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_20 = (((var_2 <= var_5) ? ((88 ? 164 : 5892484605168465558)) : ((((!(arr_0 [i_0])))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        arr_9 [i_0 - 1] [i_0] [i_2] [i_3] [i_3] = ((-(arr_7 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1])));
                        arr_10 [i_0] [i_1] [6] [i_0] = var_8;
                        var_21 = ((var_15 ? (~var_17) : (var_17 / var_7)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            arr_13 [i_0] = (arr_2 [i_0 - 3]);
            var_22 = (((arr_5 [i_0 - 2] [i_0 - 2]) ? (arr_6 [i_4] [i_4] [i_4] [i_4]) : (arr_5 [i_4] [i_0 - 3])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_18 [i_0] [i_5] [i_5] [i_6] = ((!((((arr_6 [i_5] [i_0] [i_6] [9]) ? var_4 : var_18)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_23 += ((var_2 ^ (arr_15 [i_0 - 3] [i_8 + 4])));
                            var_24 = (((arr_21 [i_0] [i_6] [i_7] [i_0]) ? var_15 : 1));
                            var_25 = ((((!(arr_19 [12] [12] [i_6] [i_8]))) ? ((var_18 ? -5892484605168465558 : var_2)) : 5892484605168465558));
                            arr_24 [i_8] [i_7] [i_0] [i_0] [i_0] [i_0] [i_8] |= (((arr_19 [i_0 + 1] [i_8 - 1] [i_8] [i_8 - 1]) ? var_11 : var_18));
                            var_26 ^= (arr_5 [i_0 - 3] [i_8 + 2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            arr_30 [i_6] [i_6] [i_0] [i_0] [i_10] = (((arr_28 [i_0] [i_0] [i_0] [i_0] [i_10]) ? 91 : (arr_17 [i_9] [i_9 + 1] [i_9 - 2] [i_9 + 1])));
                            var_27 = (((((arr_28 [i_10] [i_10] [22] [i_0] [20]) ? var_11 : var_5)) << (1793591359 - 1793591354)));
                            var_28 = (((((var_0 ? (arr_11 [i_6]) : var_2))) ? (~var_8) : (49152 + var_14)));
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
            {
                var_29 = (89 || 5892484605168465549);
                var_30 = 63521;
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
            {
                var_31 += (var_11 ? (arr_4 [i_0] [i_0 - 1] [i_0 - 3]) : ((var_13 ? var_3 : var_9)));
                var_32 = 63521;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            var_33 = (((var_3 + 2147483647) >> (16777215 <= var_10)));
                            var_34 = var_4;
                            var_35 = ((arr_22 [i_0] [i_0] [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0 - 3]) && (arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]));
                            var_36 -= ((~((var_16 ? (arr_32 [i_5] [i_13] [i_14]) : var_16))));
                        }
                    }
                }
                arr_43 [i_0] = var_9;
            }
            for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
            {
                var_37 = (min(var_37, (arr_29 [i_15] [i_15] [0] [i_5] [i_0])));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        {
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_13 ? var_0 : ((5892484605168465539 ? -2073096686 : 59))));
                            var_38 = (((var_2 + var_18) ? var_12 : (arr_15 [i_0] [i_5])));
                            arr_52 [i_0] [i_0] = -143470039;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 23;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    {
                        arr_58 [i_19] [i_19] |= ((~(arr_16 [i_0 - 2] [i_18] [i_19] [i_19])));
                        arr_59 [i_0] [i_5] [1] [9] = ((-((7886120981475416171 ? 13822169362618077595 : var_12))));
                        var_39 = (arr_42 [1] [1] [i_18] [i_19] [i_18]);
                    }
                }
            }

            for (int i_20 = 0; i_20 < 25;i_20 += 1)
            {
                arr_62 [i_0] [i_5] [i_5] [4] = (((var_12 / 15) | (((arr_2 [i_0]) / (arr_17 [i_0] [i_0] [i_5] [i_0])))));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 25;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 25;i_22 += 1)
                    {
                        {
                            var_40 = (((arr_63 [i_22] [i_0 + 1] [i_0 - 1] [i_0 - 2]) ? (arr_63 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : var_6));
                            var_41 = var_6;
                        }
                    }
                }
                var_42 = (min(var_42, 26195));
            }
            for (int i_23 = 2; i_23 < 23;i_23 += 1)
            {
                var_43 = ((!(arr_38 [i_23] [i_23 + 2] [i_0] [19])));
                var_44 = var_13;

                for (int i_24 = 1; i_24 < 22;i_24 += 1)
                {
                    var_45 = (min(var_45, ((((((arr_16 [i_0] [i_0] [i_23] [i_24]) <= var_17)) ? (arr_1 [i_0] [i_0]) : ((var_9 ? var_9 : -5892484605168465567)))))));
                    var_46 = ((!(((var_18 ? 4151497256 : var_3)))));
                }
            }
            var_47 = (arr_47 [i_0] [i_0] [i_0] [i_0]);
        }
        for (int i_25 = 0; i_25 < 25;i_25 += 1) /* same iter space */
        {
            var_48 = ((var_4 ? ((1 ? var_12 : 1476381037)) : (((((var_18 ^ var_16) < (var_13 || var_16)))))));
            arr_78 [i_0] [i_0] = (!var_12);
        }
        var_49 = (var_3 ? (max(var_18, 32)) : (((var_14 ? (arr_26 [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 3] [i_0 + 1]) : 0))));
    }
    for (int i_26 = 0; i_26 < 24;i_26 += 1)
    {
        /* LoopNest 2 */
        for (int i_27 = 1; i_27 < 23;i_27 += 1)
        {
            for (int i_28 = 3; i_28 < 22;i_28 += 1)
            {
                {
                    var_50 |= ((((-5892484605168465567 ? (((arr_28 [i_26] [i_26] [i_26] [i_26] [i_26]) / (-2147483647 - 1))) : (((134 ? 109 : 104))))) * ((max(var_4, (min(var_17, var_13)))))));
                    var_51 = ((2027606513 + ((69 ? 0 : -2027606508))));
                }
            }
        }
        var_52 = (max(var_52, ((min(((23 ? var_1 : var_5)), (!62))))));
    }
    #pragma endscop
}
