/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_6;
    var_21 = var_19;
    var_22 *= ((((((~var_18) ^ ((var_0 ? var_12 : var_19))))) > (max(var_9, ((254 ? var_13 : 609268782))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_23 = (arr_1 [i_0 - 1]);
        var_24 = (max(var_24, (((-(arr_3 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_25 *= (((arr_5 [i_1] [i_1]) != (((!(arr_4 [22]))))));
        var_26 += (((((-(arr_5 [i_1] [i_1])))) || (arr_5 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_27 = ((((!(arr_5 [i_2] [i_2]))) ? (((arr_12 [i_3] [i_2] [i_2]) / (((arr_7 [i_2] [i_2]) ^ (arr_13 [i_2] [i_3]))))) : -609268783));
            var_28 = -4;

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_17 [i_2] [i_3] [i_3] [i_3] = var_5;
                var_29 = (max(var_29, (!3633762776)));
                var_30 = (arr_11 [i_2]);
                var_31 = ((var_15 + (((((-2147483647 - 1) || ((((arr_15 [i_3] [i_3] [i_3]) ? (arr_15 [i_3] [i_3] [i_3]) : var_14)))))))));
            }
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_32 = (max(var_32, ((~((65532 & (arr_16 [11] [11])))))));
                var_33 |= -var_15;
                var_34 = (max(var_34, ((((~var_9) ? (arr_7 [i_6] [i_6]) : (var_14 >= 661204519))))));
                var_35 |= ((!(!var_6)));
            }
            var_36 = ((((((arr_6 [i_2]) >> (((arr_15 [8] [i_5 - 3] [i_5 - 3]) + 1875))))) >= (arr_19 [i_5] [i_5 - 2] [i_2])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            var_37 = (max(var_37, (((((-609268787 ? 609268791 : (arr_26 [i_2] [9] [9] [9] [9])))) ? (arr_30 [i_2] [i_5 - 2] [i_5] [i_7] [i_8] [i_9 - 1]) : (arr_14 [i_2] [i_9] [i_7] [i_2])))));
                            var_38 = ((var_12 ? (arr_16 [i_5 - 2] [i_5 - 1]) : (arr_16 [i_5 - 3] [i_5 - 2])));
                            arr_31 [i_2] [i_2] [i_2] [i_2] = -609268782;
                            var_39 *= ((609268791 ? 4098259181 : var_13));
                        }

                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            arr_34 [i_10] [i_8] [i_7] [i_5 - 3] [i_2] [i_2] [i_2] = (arr_14 [i_10] [i_8] [i_7] [i_2]);
                            var_40 = var_10;
                        }
                        for (int i_11 = 1; i_11 < 8;i_11 += 1)
                        {
                            var_41 = (max(var_41, (~32759)));
                            var_42 = (arr_2 [i_2]);
                        }
                    }
                }
            }
            arr_38 [i_5] = (~var_8);
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_43 *= (arr_22 [i_2]);
            var_44 = var_16;
            arr_42 [i_12] = 119;
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 8;i_15 += 1)
                    {
                        {
                            arr_49 [i_2] [i_12] [i_12] [i_12] [i_15] = (arr_41 [i_12]);
                            var_45 += ((((max(-18563478, 3633762776))) ? 1 : (!-103)));
                            arr_50 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_12] = ((+(((((((arr_45 [i_2] [i_2] [i_2] [i_2] [i_2]) ? 67 : (arr_47 [i_2] [i_12] [11] [i_14 + 1] [i_2])))) || ((!(arr_20 [i_14] [i_12]))))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            var_46 = (min(var_46, (arr_26 [i_2] [i_2] [i_2] [i_2] [11])));

            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {

                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    var_47 += (arr_53 [i_17] [i_17] [i_17]);

                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        var_48 *= (arr_58 [i_19] [i_18] [i_2] [i_16] [i_2]);
                        var_49 = arr_28 [9] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19];
                    }
                }
                for (int i_20 = 1; i_20 < 11;i_20 += 1)
                {
                    var_50 *= (arr_21 [i_20 + 1] [i_20 - 1] [i_20] [i_20 + 1]);
                    var_51 = (max(var_51, (((23 ? -15381 : (arr_4 [i_16]))))));
                }
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    var_52 = (arr_66 [6] [6] [7] [i_21]);
                    var_53 = (min(var_53, ((((arr_68 [i_17]) ? (((arr_47 [i_21] [i_16] [i_17] [i_21] [i_21]) / var_16)) : 65339)))));
                    var_54 |= (arr_3 [i_21]);
                }

                for (int i_22 = 0; i_22 < 12;i_22 += 1)
                {
                    arr_72 [i_22] [i_22] [i_22] [i_22] = (((arr_9 [i_2] [i_17]) * (-127 - 1)));

                    for (int i_23 = 0; i_23 < 12;i_23 += 1)
                    {
                        var_55 *= var_13;
                        var_56 = (min(var_56, ((((((-36 ? (arr_74 [i_2] [i_2] [i_17] [i_2] [i_23]) : var_17))) - 18446744073709551606)))));
                        var_57 = (max(var_57, (arr_10 [i_2] [i_17] [i_2])));
                    }
                    for (int i_24 = 0; i_24 < 12;i_24 += 1) /* same iter space */
                    {
                        var_58 = (((arr_52 [i_24] [i_17] [i_2]) / (arr_36 [i_2])));
                        arr_79 [10] [10] [10] [10] [5] = (((arr_5 [i_2] [i_16]) ? (arr_22 [i_2]) : var_9));
                    }
                    for (int i_25 = 0; i_25 < 12;i_25 += 1) /* same iter space */
                    {
                        var_59 = -2147483628;
                        var_60 |= (arr_3 [i_22]);
                    }
                    arr_83 [i_2] [i_16] [4] [4] = (arr_48 [i_17] [7]);
                    var_61 ^= var_0;
                }
                var_62 = arr_57 [5] [i_16];
            }
            for (int i_26 = 3; i_26 < 11;i_26 += 1) /* same iter space */
            {
                var_63 = 1136258330;
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 12;i_28 += 1)
                    {
                        {
                            var_64 = (((arr_33 [5] [4] [i_26] [i_2] [7] [5]) && (arr_2 [i_16])));
                            var_65 = (((~var_4) & (((!(arr_37 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                            var_66 = (max(var_66, (arr_75 [i_26 - 1])));
                        }
                    }
                }
                arr_90 [i_2] [i_16] [i_16] [i_26] = ((~((-(arr_19 [i_2] [i_16] [i_26 + 1])))));
                var_67 = (((arr_78 [i_2] [i_26 - 3] [i_26] [i_2] [0] [i_26 - 3] [i_16]) ? (arr_73 [i_2] [i_2] [i_16] [i_16] [i_26 + 1]) : (arr_61 [i_2] [i_26 + 1] [i_26 - 3] [i_26 + 1] [i_26 - 2] [i_26 - 2])));
            }
            for (int i_29 = 3; i_29 < 11;i_29 += 1) /* same iter space */
            {
                var_68 = (max(var_68, 65346));
                var_69 = (max(var_69, (arr_16 [i_2] [0])));
            }
        }
        arr_94 [i_2] [i_2] &= (-2147483647 - 1);
        var_70 = ((((arr_35 [i_2] [i_2]) << ((((131071 ? (arr_87 [i_2] [i_2]) : -211591557)) - 46)))) % (arr_86 [i_2] [2] [1] [i_2]));
        var_71 = (max(36011, ((((arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [5]) != 35)))));
    }
    #pragma endscop
}
