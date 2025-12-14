/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_7 ? (min(var_0, -var_5)) : var_4));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_15 = 0;
            var_16 = var_4;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_17 = (arr_10 [i_2]);
                var_18 = 215;
            }
            arr_14 [i_2] = (var_4 && var_8);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    {
                        var_19 = (!231);
                        arr_19 [i_2] [i_2] = (!var_9);
                        var_20 *= 4575657221408423936;
                        var_21 = (((arr_13 [i_5 - 1] [i_2] [i_4] [i_5]) >= (((~(arr_1 [i_5 + 1]))))));
                    }
                }
            }
        }
        var_22 = ((((((arr_11 [i_0] [i_0] [i_0]) ? 3176364567128909453 : (arr_1 [i_0])))) ? (arr_1 [i_0]) : ((((arr_1 [i_0]) ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : var_13)))));

        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            arr_22 [i_0] [i_0] [i_6 + 4] |= (arr_0 [i_6] [i_6]);

            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_25 [i_0] [i_6] [i_7] = (~1047552);
                arr_26 [i_0] = (58 <= (arr_6 [i_6 + 1] [i_6 + 1]));
            }

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                arr_30 [i_0] [i_6] [i_8] |= var_10;
                var_23 = (max((arr_5 [i_6] [i_0]), (((var_6 < (arr_0 [i_0] [i_0]))))));
            }
            arr_31 [i_0] [i_0] = (arr_1 [i_0]);
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_24 = (arr_28 [i_9] [i_9] [i_9] [i_9]);
            var_25 ^= (((arr_20 [i_9] [i_0]) ? (max((arr_23 [i_9] [i_9] [i_0] [i_9]), (arr_23 [i_0] [i_9] [i_9] [i_9]))) : ((((arr_20 [i_0] [i_9]) ? 62694 : (arr_12 [i_9] [i_0] [i_0]))))));

            for (int i_10 = 2; i_10 < 20;i_10 += 1)
            {
                var_26 = (((arr_32 [i_0] [i_0]) ^ (arr_12 [i_10] [i_10] [i_10 - 1])));
                var_27 = (((((((!(arr_17 [i_10] [i_9] [i_9] [i_0]))) ? (arr_34 [i_10] [i_9]) : (arr_11 [i_0] [i_9] [i_10])))) > (min((((0 > (arr_33 [i_0])))), 2147483647))));
            }
            for (int i_11 = 3; i_11 < 20;i_11 += 1)
            {
                var_28 = ((!((((min(var_3, (arr_11 [i_0] [i_9] [i_11])))) || (arr_16 [i_11] [i_11] [i_11 - 2] [i_11])))));
                var_29 = (max(var_29, var_3));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_30 = 1352276523;
                            arr_44 [i_12] [i_9] [i_11] [i_12] [i_13] = ((max((var_5 / var_6), (arr_20 [i_0] [i_0]))));
                            arr_45 [i_0] [i_12] [i_11] = 0;
                        }
                    }
                }
            }
            var_31 = (arr_17 [i_0] [i_9] [i_9] [i_0]);
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
            {
                var_32 = (((arr_37 [i_0] [i_14] [i_15] [i_14]) != (arr_24 [i_0] [i_14] [i_15])));
                arr_52 [i_0] [i_0] [i_0] [i_0] = ((var_10 ? (arr_20 [i_0] [i_0]) : (arr_20 [i_14] [i_15])));
                var_33 = (((arr_50 [i_0] [i_0] [i_0] [i_0]) ? (arr_50 [i_0] [i_14] [i_15] [i_15]) : 1));
                arr_53 [i_0] [i_14] [i_15] [i_14] = 3759355187;
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            arr_62 [i_18] [i_16] [i_16] [i_16] [i_16] [i_14] [i_0] = max((max((arr_39 [i_18]), -3)), (((!(arr_39 [i_18])))));
                            arr_63 [i_0] [i_14] [i_0] [i_17] [i_17] [i_17] [i_18] = (((((((var_1 ? var_6 : 2046150886303924629)) ^ 1))) ? var_6 : -1352276523));
                            arr_64 [i_0] [i_14] [i_16] [i_17] [i_18] [i_18] = ((var_11 - (arr_41 [i_0] [i_0] [i_0] [i_0] [i_17])));
                        }
                    }
                }
                var_34 = (~var_9);
                var_35 = (((arr_60 [i_0] [i_16] [i_16] [i_16] [i_16] [i_0] [i_14]) ? 255 : (max((-32767 - 1), 4294966784))));
                var_36 = (arr_9 [16] [i_14] [i_16]);
                var_37 = arr_34 [i_0] [i_0];
            }
            arr_65 [i_14] [i_14] = (arr_36 [i_0] [i_14] [i_14]);
            /* LoopNest 3 */
            for (int i_19 = 3; i_19 < 20;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        {
                            var_38 = (min(((((arr_23 [i_21] [i_20] [i_14] [i_14]) != 0))), ((1 ? (((min(var_13, 15)))) : ((-(arr_23 [i_21] [i_14] [i_19] [i_20])))))));
                            arr_75 [i_20] [i_20] [i_20] [i_20] |= var_6;
                            var_39 -= ((((!(arr_37 [i_0] [i_21] [i_19] [i_19]))) ? ((((!(arr_40 [i_21] [i_19 - 2] [i_0] [i_19 - 2]))))) : (arr_39 [i_19 - 3])));
                            arr_76 [i_19] [i_14] [i_19] [i_20] [i_21] [i_21] [i_20] = ((~(arr_3 [i_0] [i_0])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_22 = 2; i_22 < 20;i_22 += 1)
        {
            var_40 -= ((!((((arr_50 [i_0] [i_0] [i_22] [i_22]) << (var_0 - 14621))))));
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 21;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 21;i_24 += 1)
                {
                    {
                        arr_87 [i_22] [i_22] [i_23] [i_23] [i_23] [i_23] = (((arr_4 [i_22 - 1] [i_22 + 1]) & (arr_4 [i_22 - 1] [i_22 + 1])));
                        arr_88 [i_0] [i_22] [i_23] [i_22] = ((arr_6 [i_22 - 1] [i_22 + 1]) ? ((var_0 ? var_8 : (arr_39 [i_22 - 2]))) : (arr_8 [i_22] [i_22 - 2]));
                        arr_89 [i_22] [i_22] [i_22 - 1] [i_23] [i_24] = var_5;
                        arr_90 [i_24] [i_22] [i_23] [i_23] [i_22] [i_0] = ((-16 ? 2949203877457369781 : 1));
                        arr_91 [i_24] [i_24] [i_23] [i_23] [i_24] |= ((((896960819 << (var_2 - 21050))) - (((arr_38 [i_24]) & (arr_43 [i_24] [i_24] [i_23] [i_23] [i_22] [i_22 + 1] [i_0])))));
                    }
                }
            }
        }
        arr_92 [i_0] = (((~547588069) ? (((!(arr_67 [i_0] [i_0] [18])))) : var_7));
    }
    #pragma endscop
}
