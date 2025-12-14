/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_18 = ((((arr_0 [i_0]) != 1967784293347569706)));
            var_19 = (((((var_1 ? (arr_1 [i_0] [i_1]) : (arr_4 [i_1] [i_1] [i_0 + 2])))) ? (var_3 & var_5) : 255));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_20 &= ((1 >> (((-9223372036854775807 - -9223372036854775805) + 28))));
                            var_21 &= (((((1 ? 9223372036854775807 : 5))) ? 255 : ((var_15 ? 13 : 1))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_22 = var_1;
            var_23 = (+(((arr_8 [i_0] [i_5] [i_0] [i_0]) ? 2464973058810459233 : var_8)));
            var_24 = ((var_4 ? (arr_2 [13]) : (arr_5 [10])));
            var_25 = (arr_8 [i_0] [i_0] [i_5] [i_5]);

            for (int i_6 = 3; i_6 < 19;i_6 += 1)
            {
                var_26 = (arr_9 [i_0 + 1] [i_5] [i_5] [i_6]);
                var_27 &= var_4;
                var_28 &= var_17;
                var_29 &= (arr_9 [i_0] [i_0 + 1] [i_6] [i_6 - 2]);
            }
            for (int i_7 = 4; i_7 < 19;i_7 += 1)
            {
                var_30 = (!0);

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_31 ^= ((((22 - (arr_1 [i_0] [i_0])))) ? (((!(arr_6 [i_0 + 1] [i_0 + 1])))) : (16 ^ var_10));
                    var_32 = (min(var_32, (((49766 ? 0 : -13)))));
                    var_33 ^= (((arr_11 [1] [i_5] [i_7 + 1] [i_5] [i_5] [i_0 + 1] [i_0]) ? ((-(arr_18 [i_8] [11]))) : ((var_7 ? (arr_1 [i_8] [i_7 - 2]) : -76))));
                    var_34 = (((!3) > var_5));
                }
                for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    var_35 &= ((12288 / (arr_22 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9])));
                    var_36 = (max(var_36, var_3));
                    var_37 = var_4;
                    var_38 &= ((-(((arr_11 [14] [i_5] [12] [1] [i_5] [1] [17]) ? 18446744073709551615 : (arr_16 [1] [1])))));
                }
                for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_39 &= ((!(var_6 * var_17)));
                    var_40 = (((arr_3 [i_0 + 1] [i_10]) ? (arr_3 [i_0 + 1] [i_5]) : (arr_27 [i_0 + 1] [i_0 + 1] [i_5])));
                }
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_41 = var_17;
                var_42 = ((((var_12 ? var_3 : -21)) % 28544));
                var_43 = (arr_3 [i_0] [i_5]);

                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    var_44 = var_8;

                    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                    {
                        var_45 = (min(var_45, (((!(2677662243 ^ 0))))));
                        var_46 = ((+(((arr_7 [i_5] [i_5] [i_12] [i_12]) ? var_5 : (arr_14 [i_0] [i_0] [i_13])))));
                        var_47 = (var_4 > -9223372036854775791);
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                    {
                        var_48 = (max(var_48, var_11));
                        var_49 = var_10;
                        var_50 = 32767;
                    }
                }
                var_51 = ((var_9 ? (arr_27 [i_0] [i_0 - 1] [i_11]) : (arr_15 [i_11])));
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 4; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 18;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
                        {
                            var_52 = (((((arr_36 [i_0 - 1] [i_15 - 1] [i_15] [i_16] [i_16] [12] [i_18]) >= (arr_10 [i_0] [i_15] [i_16 + 1] [i_0] [i_17] [i_18]))) ? (~14) : (arr_22 [i_0] [i_15] [i_16 + 2] [i_17])));
                            var_53 |= (((arr_47 [i_16] [i_16 - 1] [11] [i_16 + 1]) ? (arr_47 [i_16] [i_16] [i_16] [i_16 + 2]) : (arr_36 [i_16] [i_16] [i_16] [i_16 - 1] [i_16 - 1] [i_16] [12])));
                            var_54 ^= (((var_14 / (arr_4 [i_0] [i_0 + 2] [i_0 + 2]))));
                            var_55 = (arr_29 [i_0] [i_15 + 2] [i_17] [i_0]);
                        }
                        for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
                        {
                            var_56 = (((arr_22 [i_0] [1] [i_0 - 1] [i_0 - 1]) / (arr_53 [i_0] [i_15 + 1] [17] [i_17] [i_0])));
                            var_57 = ((((-(arr_40 [i_15] [0])))) ? var_4 : 65024);
                        }
                        for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
                        {
                            var_58 = (((arr_33 [16]) ? (((arr_2 [4]) ? var_17 : 65520)) : ((124 ? var_6 : (arr_45 [i_17] [i_17] [i_17] [i_17])))));
                            var_59 |= (((arr_28 [i_0] [i_15] [i_16]) ? ((18446744073709551602 ? (arr_31 [i_0 + 2] [i_0 + 2] [i_16 + 2] [18]) : (arr_6 [i_0] [5]))) : (arr_33 [i_15 + 3])));
                            var_60 = var_12;
                            var_61 = (min(var_61, var_15));
                        }
                        for (int i_21 = 0; i_21 < 20;i_21 += 1) /* same iter space */
                        {
                            var_62 = -var_7;
                            var_63 = (((((arr_42 [i_0] [i_0] [16]) % (arr_58 [i_0] [i_0] [i_16] [10] [i_0] [i_0] [10]))) % 234));
                            var_64 |= (arr_15 [i_17]);
                        }
                        var_65 = (max(var_65, ((((~6575566769731102568) >= (1363836815 / 246))))));
                    }
                }
            }
        }
    }
    for (int i_22 = 0; i_22 < 12;i_22 += 1)
    {
        var_66 &= ((869721575 >> (1008806316530991104 - 1008806316530991080)));
        var_67 |= (12475550774980693494 | 31574);
    }
    var_68 = (min(((((((var_11 ? 1 : 7085505451818965168))) ? (246 + var_11) : (!62528)))), ((-58 ? 16662780748039356183 : -5680048993965385669))));
    #pragma endscop
}
