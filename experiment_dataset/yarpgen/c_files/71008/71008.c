/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_17));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_19 -= max(var_4, (((min(var_4, var_14)) ? (((-32767 - 1) ? var_16 : (arr_1 [0] [i_1]))) : ((((arr_3 [i_0]) ? var_11 : (arr_0 [20])))))));
            arr_6 [i_0] [i_0] = ((-var_6 ? (((max(((max(var_4, (arr_4 [i_0] [i_1] [i_1])))), var_9)))) : ((var_10 ? ((var_5 ? (-32767 - 1) : 1071208007)) : var_11))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            var_20 += ((~(arr_5 [i_2 - 2])));
            var_21 = (((arr_8 [i_2 + 1] [i_2 - 3] [i_0]) < ((var_4 ? (arr_1 [i_0] [i_0]) : (arr_7 [4])))));

            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                arr_12 [i_0] [i_0] = 32768;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] = var_17;
                            arr_21 [6] [i_2] [i_2] [i_0] [i_2] [i_5] [19] = (((arr_4 [i_0] [i_4] [i_5]) || (arr_4 [i_0] [i_2 - 3] [20])));
                            var_22 = (min(var_22, var_9));
                            var_23 *= (!var_11);
                            var_24 = ((var_14 ? 47623 : (arr_5 [i_2 - 2])));
                        }
                    }
                }

                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    arr_26 [1] [12] [i_0] [i_6] [i_0] = var_15;
                    var_25 = (((!var_13) ? (arr_19 [i_6 + 3]) : 28));
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    var_26 = var_17;
                    var_27 = var_0;
                    var_28 = var_11;

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_31 [i_0] [i_0] = var_10;
                        var_29 = (!0);
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_30 = var_12;
                        arr_36 [18] [i_0] [i_0] [13] = var_5;
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_31 = ((~(((arr_14 [i_0] [i_0] [i_0] [2]) >> 0))));
                        var_32 ^= -12850;
                    }
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        var_33 = (arr_33 [i_2 - 3] [i_3]);
                        var_34 &= var_14;
                        var_35 -= (arr_24 [4] [i_2 - 1] [i_3 + 2] [1] [i_11 + 2] [10]);
                        arr_43 [i_0] [i_2] [2] [i_0] [1] [i_11 + 1] [i_11] = (~(((arr_4 [i_2] [i_3 - 1] [i_11]) ? 1 : var_4)));
                        arr_44 [i_0] [i_3] [1] [i_0] = (arr_38 [i_0] [i_0] [i_3 + 2] [i_0] [i_11] [i_11]);
                    }
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                {
                    var_36 *= ((-((-29829 ^ (arr_2 [6])))));
                    var_37 += (arr_39 [i_0] [1] [i_3 + 1] [i_3 - 1] [i_12]);
                    arr_48 [i_0] [i_0] [i_0] [i_3] [i_0] = ((32768 ? (arr_14 [i_0] [i_3] [i_2 - 2] [i_0]) : (((arr_13 [i_0] [i_0] [i_0] [i_0]) - var_2))));
                    arr_49 [i_0] [i_0] [12] [10] [8] = var_11;
                }
                for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                {
                    var_38 &= var_10;
                    arr_53 [i_13] [i_0] [i_0] [i_0] = (((!var_2) ? var_4 : (-127 - 1)));
                }
            }
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                arr_58 [i_0] [i_0] = (((arr_57 [i_14] [i_0] [i_0] [i_0]) ? ((-(arr_18 [11] [19] [i_14]))) : (arr_9 [i_0] [i_2 - 1])));
                var_39 = (arr_46 [i_0] [i_2 - 1]);
            }
        }
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            var_40 -= ((!(!-117)));
            arr_61 [i_0] = -8149871583056947802;
        }
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 18;i_17 += 1)
            {
                {

                    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                    {
                        arr_70 [i_0] [i_0] [i_17] [i_0] = (max(var_8, (((arr_55 [i_0] [8] [i_16 + 2] [i_0]) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_55 [i_0] [i_0] [i_17] [i_0])))));
                        var_41 = (min(var_41, var_17));
                        var_42 = (max(var_42, (((var_2 & (arr_38 [i_0] [4] [4] [i_0] [0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
                    {

                        for (int i_20 = 0; i_20 < 22;i_20 += 1)
                        {
                            arr_76 [i_0] [0] [i_0] [7] [i_20] = (((arr_35 [i_0] [21] [21] [i_0] [7]) - ((var_4 ^ (arr_56 [i_0] [i_16] [i_0] [i_0])))));
                            var_43 = ((arr_63 [i_19] [i_16 + 2] [i_0]) ? (arr_63 [i_19] [i_16 + 4] [i_0]) : var_15);
                        }
                        for (int i_21 = 1; i_21 < 21;i_21 += 1)
                        {
                            var_44 ^= var_3;
                            var_45 += (arr_62 [12] [12]);
                            var_46 = (max(var_46, (arr_60 [i_0] [2])));
                        }
                        for (int i_22 = 0; i_22 < 22;i_22 += 1)
                        {
                            var_47 *= ((var_2 ? var_6 : (arr_62 [20] [i_22])));
                            arr_82 [6] [i_16] [12] [i_0] [i_16] [16] [17] = (!var_16);
                        }
                        for (int i_23 = 0; i_23 < 22;i_23 += 1)
                        {
                            arr_86 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(arr_78 [8] [12] [i_17 + 4] [i_19] [i_0] [8])));
                            var_48 += (arr_23 [i_16]);
                            var_49 &= var_9;
                            var_50 = 32767;
                            var_51 = ((!(arr_62 [i_16 - 2] [i_0])));
                        }
                        arr_87 [i_0] [9] = (((arr_34 [4] [i_0] [i_17] [i_17]) ? (arr_67 [i_0] [i_16] [7] [i_0]) : (arr_67 [20] [i_16] [i_17] [i_0])));
                        var_52 = (arr_25 [17] [8] [i_0] [i_19]);
                    }
                    var_53 = (((var_7 ? ((var_9 ? (arr_54 [i_0] [i_16]) : var_16)) : var_12)) - ((((arr_67 [i_16] [i_16] [i_16 + 2] [i_0]) ? (arr_84 [i_0] [i_0] [i_16 + 2] [i_17] [i_17 + 3] [i_0] [i_17 - 2]) : (arr_67 [i_0] [i_0] [i_16 + 2] [i_0])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 22;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 22;i_25 += 1)
            {
                {
                    var_54 = var_11;
                    arr_94 [i_0] [i_0] = (((!(arr_68 [i_0] [i_0] [i_24] [i_25]))));
                    var_55 = (min(((max(0, (arr_9 [i_0] [i_24])))), (min((((arr_89 [i_0] [i_0] [i_25]) & var_6)), (((~(arr_39 [i_0] [i_24] [i_24] [i_24] [i_25]))))))));
                }
            }
        }
    }
    for (int i_26 = 3; i_26 < 11;i_26 += 1)
    {
        arr_98 [i_26] [i_26] = ((!(65535 || var_10)));
        arr_99 [i_26] = ((~(arr_92 [i_26])));
    }
    var_56 -= var_7;
    #pragma endscop
}
