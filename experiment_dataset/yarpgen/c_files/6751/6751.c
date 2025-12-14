/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_10 ^= var_9;
        var_11 = (((~(arr_0 [i_0 + 2] [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_0] [i_1] [i_0] [i_1] = (((((-((2136724652 ? (arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 1]) : -3824412712569274767))))) ? (min(((var_4 ? (arr_10 [9] [i_2] [i_1] [9]) : var_7)), (((arr_6 [i_0 + 2] [i_0 + 2] [i_1]) ? (arr_0 [1] [i_0]) : (arr_7 [7] [7] [i_3 + 1]))))) : (((!((max(var_8, var_6))))))));
                        var_12 = (var_8 ? (arr_9 [i_3 + 1] [i_1] [i_2] [i_2] [i_1] [i_0]) : 25161);
                        arr_13 [i_3] [i_1] [3] [i_1] [i_1] [i_0] = (-(!var_7));
                        var_13 = ((((((max((arr_3 [i_0] [i_1]), var_4))) ? var_8 : var_8)) - ((min(var_8, (arr_0 [i_0] [i_0]))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_14 = ((~(arr_17 [i_4])));
                            var_15 = (min(var_15, -0));
                        }
                    }
                }
                arr_27 [i_4] [8] [i_4] = 142;
            }
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                var_16 = ((((min(var_5, (arr_25 [i_4] [i_4] [i_5] [i_4] [i_9 + 1])))) ? ((+(((arr_20 [i_4] [i_4] [i_9] [i_4]) / 5)))) : ((-(((arr_25 [i_4] [i_4] [i_4] [i_4] [2]) * (arr_14 [i_4])))))));
                var_17 = (arr_21 [i_4] [i_4] [i_9]);

                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    arr_32 [i_4] [i_4] [i_4] [i_9] [i_10] = (min((0 || var_0), (((arr_20 [i_9 + 2] [i_4] [i_9 - 1] [i_9 - 2]) ? (arr_18 [i_4]) : (arr_30 [i_4])))));
                    arr_33 [i_9] [i_5] [i_5] [1] [i_10] &= (arr_17 [i_9]);
                }
            }
            var_18 = (max(var_18, ((((~var_1) & (min((5 ^ var_3), ((~(arr_29 [11] [i_4]))))))))));
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {

            /* vectorizable */
            for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_43 [i_4] = (0 / 214);
                            var_19 ^= var_5;
                            arr_44 [i_4] [2] = var_3;
                            var_20 *= (!var_3);
                        }
                    }
                }
                var_21 = ((var_2 ? 2745637034779835250 : (arr_29 [i_11] [i_4])));
            }
            for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
            {
                var_22 ^= var_2;
                var_23 = -3;
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
            {
                var_24 = (arr_42 [i_4] [i_11]);
                var_25 = (min(var_25, (((((min(((var_6 ? 23 : var_6)), ((min((arr_17 [4]), var_4)))))) ? (arr_25 [i_16] [1] [i_16] [2] [i_11]) : (arr_15 [2]))))));
                var_26 = (((max(-3824412712569274767, var_9)) & (((~(min((arr_42 [i_4] [0]), var_0)))))));
            }
            var_27 = (((((var_8 ? (((arr_36 [i_4] [i_4] [i_4] [i_4]) * var_7)) : (!-4800358999993768619)))) ? (!94) : (max(119, (arr_37 [i_4] [i_4] [i_11])))));
            var_28 ^= var_2;
            var_29 = var_0;
        }
        var_30 = (((((((min((arr_42 [i_4] [i_4]), (arr_18 [i_4])))) ? (arr_19 [i_4] [i_4] [i_4]) : (arr_34 [i_4])))) ? var_4 : (arr_35 [i_4] [i_4])));
        var_31 = var_7;
        arr_50 [i_4] [i_4] = min((1 >> 1), var_4);
    }
    for (int i_17 = 0; i_17 < 21;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            var_32 ^= (max((max((((arr_53 [6]) ? var_2 : var_9)), (((126 ? var_3 : (arr_53 [2])))))), ((max(var_6, var_0)))));
            var_33 = (max(var_33, (((((min((arr_52 [16]), (arr_53 [1])))) & ((-((var_5 ? 5852195026515357089 : var_8)))))))));
            arr_55 [i_17] = ((((arr_53 [i_17]) <= (arr_53 [i_17]))));
            var_34 = (max(var_34, (-9085 * -26328)));
            arr_56 [i_17] [i_17] = (((((-((min(var_8, var_8)))))) ? ((58245 ? 32767 : 250)) : (arr_54 [i_17])));
        }
        for (int i_19 = 2; i_19 < 20;i_19 += 1)
        {
            var_35 = (min(((min((((223 == (arr_53 [i_17])))), (min((arr_54 [i_17]), -26328))))), (min((53 ^ var_8), (min(5434041159082260298, var_8))))));
            arr_61 [i_17] [i_19] = (min(((((min((arr_60 [i_17]), var_9))) ? (((max(var_8, 1)))) : var_1)), var_3));
        }
        var_36 -= (arr_58 [1] [i_17]);
    }
    for (int i_20 = 0; i_20 < 24;i_20 += 1)
    {
        var_37 = ((((((-(max(149037652, 5852195026515357083)))) + 9223372036854775807)) >> (((((min(16, (arr_62 [i_20] [i_20])))) <= (arr_63 [i_20] [i_20]))))));

        for (int i_21 = 3; i_21 < 22;i_21 += 1)
        {
            var_38 = (max(var_38, -var_6));
            arr_66 [i_21] = (min(((min(235, 20))), ((max(var_1, (arr_62 [i_21] [i_20]))))));
            var_39 = min((min(var_5, (arr_62 [i_20] [i_20]))), ((((arr_62 [i_21 - 1] [i_21 + 2]) ? (arr_63 [i_21 - 1] [i_21 + 2]) : (arr_63 [i_21 - 1] [i_21 + 2])))));
            var_40 = (arr_63 [i_20] [i_21]);
        }
        for (int i_22 = 0; i_22 < 24;i_22 += 1) /* same iter space */
        {
            var_41 = (min(var_41, ((((min(var_0, 134201344)))))));
            /* LoopNest 3 */
            for (int i_23 = 2; i_23 < 21;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 24;i_24 += 1)
                {
                    for (int i_25 = 2; i_25 < 23;i_25 += 1)
                    {
                        {
                            var_42 = (((arr_75 [i_20] [i_22] [i_23] [i_24]) >> (-var_3 - 235)));
                            var_43 = -var_2;
                            var_44 -= (max((!250), (min((var_3 - var_2), ((((arr_64 [i_22]) ? var_8 : -19812)))))));
                            var_45 = ((max((arr_78 [i_25] [i_24] [i_24] [i_23 + 1] [i_22] [i_20]), (arr_78 [i_20] [i_22] [i_23] [i_24] [i_25 + 1] [11]))));
                            arr_79 [i_20] [i_24] [i_23] [i_23] [i_25 - 1] [i_23] [i_25 - 1] = (max(var_5, 1));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_26 = 0; i_26 < 24;i_26 += 1) /* same iter space */
        {
            arr_84 [21] [i_26] [i_20] = 4160765927;
            var_46 = (min(var_46, (((-(((arr_81 [i_26]) ? 211 : (arr_67 [i_26] [i_20] [i_20]))))))));
        }
        for (int i_27 = 0; i_27 < 24;i_27 += 1) /* same iter space */
        {
            var_47 = ((!((min((arr_64 [i_20]), -var_5)))));
            var_48 = ((((min((arr_76 [i_20]), 12931))) ? (((1302883580 > ((max(var_8, 202)))))) : (((!((min(-1, var_1))))))));
            var_49 = ((var_2 ? (((((~(arr_77 [i_27] [i_27] [18] [i_20] [i_20])))) ? (min(var_3, -3824412712569274767)) : (((~(arr_73 [i_27] [i_27] [i_27] [i_27] [6] [i_20])))))) : var_9));
        }
    }
    var_50 += (min((var_5 % var_8), var_5));
    #pragma endscop
}
