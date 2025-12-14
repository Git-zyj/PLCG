/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, (((((((arr_8 [i_0] [i_1] [i_2]) == (arr_8 [i_0] [i_2] [i_2])))) == (((arr_0 [i_1]) % 231)))))));
                    arr_9 [i_0] [i_2] = ((~((25 ? 231 : var_1))));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_20 = (min(-1, (arr_3 [i_0])));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_3] [i_4] [14] &= var_11;
                            arr_22 [i_0] [i_0] = (((arr_14 [i_1] [i_1] [6] [i_1 + 1]) % (arr_5 [i_0 - 1] [i_0] [i_0])));
                            var_21 ^= (-25278 || 1);
                        }
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            arr_27 [i_3] [i_3] [i_3] [i_4] [i_0] [i_4] [13] = (((arr_17 [i_6] [i_0 - 1] [i_3] [i_4] [i_6 + 3]) ? (arr_17 [0] [i_0 - 1] [i_3] [i_4] [i_6 - 3]) : (arr_17 [14] [i_0 - 1] [i_0] [i_4] [i_6 - 3])));
                            var_22 |= (arr_8 [2] [i_4] [6]);
                            var_23 = (arr_10 [i_0 - 1]);
                            var_24 = (max(var_24, var_5));
                            arr_28 [i_0] [i_1] [i_1] [i_4] [i_6] [17] [i_0] = ((52267 + 1) ? (arr_5 [i_3] [i_4] [i_3]) : (arr_3 [i_1]));
                        }
                        var_25 = (((13269 & -1) | -182));
                        var_26 = (max(var_26, (1 + 1)));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_27 = ((var_13 ? ((((!(arr_10 [i_0 - 1]))))) : -3741932399));
                        var_28 = 0;
                        arr_31 [i_0] = (min((((!(arr_5 [i_0 - 1] [i_1 - 2] [i_1 - 1])))), ((~(arr_5 [i_0 - 1] [i_1 - 2] [9])))));
                    }
                }
                var_29 = -125;
                var_30 = (max(1, (((arr_15 [i_0] [i_1 - 1]) ? 1 : (arr_1 [i_0 - 1])))));

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_31 = (arr_6 [i_0]);
                    var_32 &= max(1, ((((min(984017630, (arr_17 [i_8] [i_1] [i_1] [i_0] [17])))) ? 1 : 11800173527791650737)));
                    var_33 = 1640285972896031816;
                }
            }
        }
    }
    var_34 ^= (var_9 / var_17);

    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        arr_38 [8] [8] |= (((-984017630 + 2147483647) >> (47535 - 47513)));
        arr_39 [i_9] [i_9] = (((!(arr_29 [11] [i_9] [i_9] [i_9]))) ? (arr_29 [i_9] [i_9] [i_9] [i_9]) : var_4);
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 10;i_14 += 1)
                        {
                            {
                                var_35 = (((-0 ? (arr_30 [i_10] [i_10] [i_12]) : (arr_12 [i_11]))));
                                arr_52 [1] [i_11] = (min((max(1572864, 1)), var_14));
                                var_36 = ((min(var_0, var_11)));
                                arr_53 [i_14] [i_11] [i_12] [i_11] [i_11] [i_11] [i_10] = (~-911058200309282239);
                                arr_54 [i_10] [i_11] [i_12] [i_13] [i_13] = ((~((((1 ? var_8 : var_4)) - 11171))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                var_37 = (max(var_37, (((~((((arr_51 [i_10] [1]) <= (arr_18 [i_10] [i_11] [i_10] [i_16] [i_11] [1] [i_10])))))))));
                                var_38 -= ((((min((arr_5 [i_11 - 1] [i_11 - 1] [i_11 - 1]), (arr_5 [i_11 - 1] [i_11 - 1] [i_11 - 1])))) ? ((min(25917, (((var_16 < (arr_16 [8] [i_12] [i_15] [i_16]))))))) : var_3));
                            }
                        }
                    }
                    var_39 -= 255;
                    var_40 = (min(var_40, (((20 * ((var_2 * ((-(arr_1 [i_12]))))))))));
                }
            }
        }

        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    {
                        var_41 = (((~56) - (((arr_14 [i_10] [i_17] [i_18] [i_17]) - 1))));
                        var_42 += (max(202388583, (arr_56 [i_19] [i_17] [i_18] [i_17])));
                        arr_69 [i_17] = ((((max(var_11, (~56)))) ? (((min((arr_67 [i_18] [i_19]), (arr_67 [i_10] [i_17]))))) : ((-114 ? (arr_56 [i_17] [i_19] [i_19] [i_19]) : (max((arr_35 [i_17] [i_17]), (arr_58 [i_10] [i_10] [i_17] [i_17])))))));
                        arr_70 [i_18] [0] [i_17] = (((((((arr_20 [i_17] [i_17] [1]) ? (arr_36 [i_10]) : 3475995242))) ? (((min(-110, 1)))) : (-2147483647 - 1))));
                        var_43 ^= (var_6 / 518704701);
                    }
                }
            }
            var_44 += ((((arr_51 [2] [2]) - (arr_29 [i_10] [1] [i_17] [i_17]))));
        }
        var_45 = (((126 >> (((arr_49 [i_10] [8] [i_10] [i_10]) - 4133534768597666681)))));
    }
    var_46 = (max(var_46, ((((18001769782848582218 || var_16) ? ((46735 ? ((min(var_14, var_4))) : (var_10 % -1708905919))) : var_5)))));
    #pragma endscop
}
