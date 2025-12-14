/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99310
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */unsigned int) var_5);
    var_17 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) == (var_4)));
            var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_0))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)166)) ? (3798050175647565225ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75)))));
            var_22 = ((/* implicit */unsigned int) var_5);
        }
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_13)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            var_23 = ((/* implicit */unsigned short) ((((unsigned int) var_10)) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7))))));
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_3))));
            var_24 = ((/* implicit */unsigned long long int) ((var_8) == (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
        {
            arr_13 [i_3] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_1)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                var_25 = ((((/* implicit */_Bool) var_1)) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (var_6))))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_13))) - (((/* implicit */int) var_1))));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_0))));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_6)))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_14)))))));
                        arr_21 [i_0] [i_3] [i_5] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))) | (var_6)));
                    }
                    var_31 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_0))));
                }
            }
            for (unsigned char i_7 = 1; i_7 < 6; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 9; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_9] [i_8 - 1] [i_8 - 2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) << (((((/* implicit */int) var_7)) - (21292)))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_2))));
                        }
                    } 
                } 
                var_33 *= ((/* implicit */long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_13))));
            }
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_0))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
                {
                    arr_33 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_12))));
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) ((unsigned char) var_8)))));
                    var_36 = ((/* implicit */short) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) - (6821)))));
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (var_6)))) > (((/* implicit */int) var_9))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_12 = 3; i_12 < 8; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 1; i_13 < 8; i_13 += 4) 
                    {
                        arr_39 [i_0] [i_3] [1U] [(_Bool)1] [i_12 + 1] [i_12] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_15))) * (((/* implicit */int) var_14))));
                        arr_40 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_10] [i_12] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_1))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6)))));
                    }
                    arr_41 [i_0 + 2] [i_10] [6U] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_11))));
                    var_39 = ((/* implicit */_Bool) (-(var_6)));
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((int) var_2)) + (((/* implicit */int) var_11)))))));
                }
                for (short i_14 = 3; i_14 < 9; i_14 += 2) 
                {
                    arr_44 [(unsigned char)0] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))));
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                    var_42 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_13))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        arr_48 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_14))) * (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_11)))))));
                        arr_49 [i_10] [i_3] [5U] [i_3] [3U] [i_3] [5U] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_15))));
                        arr_50 [i_10] [i_3] [i_3] [i_10] [i_10] = ((/* implicit */unsigned int) var_4);
                        arr_51 [i_15] [i_14 + 1] [i_10] [i_10] [i_0] [i_0 - 2] = ((/* implicit */long long int) var_11);
                    }
                }
                for (short i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    var_43 -= ((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) != (((/* implicit */int) var_11)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))));
                    arr_55 [i_10] [(unsigned short)0] [(unsigned short)0] [i_10] = ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) var_8)));
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_15))));
                    var_45 = ((/* implicit */unsigned long long int) var_2);
                }
                var_46 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_2)))));
            }
        }
        /* LoopSeq 4 */
        for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            arr_58 [(signed char)7] [i_17] = ((unsigned int) var_1);
            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_15)) / (((/* implicit */int) var_14)))) : (((/* implicit */int) ((unsigned short) var_14)))));
        }
        for (unsigned char i_18 = 1; i_18 < 8; i_18 += 1) 
        {
            var_48 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (_Bool)1))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))));
            var_49 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_3))));
            var_50 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_11))));
            var_51 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_5))));
            arr_61 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_7))));
        }
        for (long long int i_19 = 1; i_19 < 8; i_19 += 2) 
        {
            var_52 = ((/* implicit */long long int) ((unsigned char) var_3));
            var_53 += ((/* implicit */unsigned short) ((((var_4) + (9223372036854775807LL))) << (((((((/* implicit */int) var_1)) + (28813))) - (61)))));
            var_54 = ((/* implicit */short) ((long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_2)))));
            /* LoopSeq 4 */
            for (unsigned int i_20 = 0; i_20 < 10; i_20 += 4) 
            {
                var_55 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) == (((/* implicit */int) var_7)))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))));
                var_56 = ((/* implicit */short) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_0))));
                var_57 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6)));
                arr_66 [i_19] = ((/* implicit */unsigned short) ((short) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_13))))));
            }
            for (long long int i_21 = 0; i_21 < 10; i_21 += 4) 
            {
                var_58 = (((-(3798050175647565225ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                var_59 = ((signed char) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_11))));
                arr_70 [i_0] [i_0] [8U] [i_19] = ((/* implicit */_Bool) ((unsigned int) var_4));
                /* LoopSeq 2 */
                for (unsigned char i_22 = 0; i_22 < 10; i_22 += 4) 
                {
                    var_60 += ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_15)))));
                    arr_74 [i_0 - 2] [i_0 - 2] [i_19] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_7))));
                }
                for (long long int i_23 = 0; i_23 < 10; i_23 += 1) 
                {
                    var_61 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_2))));
                    var_62 = ((/* implicit */unsigned short) min((var_62), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))))));
                    var_63 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3)))))) ^ (var_4)));
                    var_64 = ((/* implicit */unsigned int) max((var_64), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_3)))))));
                }
            }
            for (unsigned short i_24 = 0; i_24 < 10; i_24 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_25 = 2; i_25 < 9; i_25 += 2) 
                {
                    var_65 = ((/* implicit */unsigned short) var_2);
                    arr_83 [i_19] [4ULL] [1LL] = ((/* implicit */int) ((short) var_11));
                }
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    arr_88 [i_19] [i_19 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_15)))))));
                    arr_89 [i_0 + 2] [i_19] [(unsigned char)7] [i_24] [i_24] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_7))));
                    /* LoopSeq 1 */
                    for (unsigned char i_27 = 0; i_27 < 10; i_27 += 2) 
                    {
                        arr_93 [i_0] [i_19] [i_19] [i_26] [i_27] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_6) > (var_6)))) > (((/* implicit */int) ((unsigned short) var_3)))));
                        var_66 = ((/* implicit */short) var_0);
                        var_67 = ((/* implicit */unsigned int) var_0);
                        var_68 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
                    }
                    arr_94 [4LL] [i_19] [i_19] [i_0] = ((/* implicit */unsigned long long int) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_7))))))));
                }
                for (unsigned short i_28 = 3; i_28 < 8; i_28 += 2) 
                {
                    var_69 *= ((/* implicit */unsigned int) var_1);
                    arr_97 [(unsigned char)0] [(short)6] [i_19] [(unsigned short)0] [i_19] = ((/* implicit */_Bool) var_7);
                }
                arr_98 [(short)5] [i_19] [1ULL] = ((/* implicit */short) ((int) var_4));
                arr_99 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >= (((/* implicit */int) ((signed char) var_11)))));
                var_70 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
            }
            for (unsigned char i_29 = 3; i_29 < 8; i_29 += 1) 
            {
                var_71 = ((/* implicit */unsigned int) min((var_71), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_4))))));
                var_72 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) var_12))));
                var_73 = ((/* implicit */unsigned char) (+(var_8)));
            }
        }
        for (unsigned int i_30 = 1; i_30 < 7; i_30 += 2) 
        {
            var_74 = ((/* implicit */_Bool) ((unsigned char) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
            var_75 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_1))))));
        }
        var_76 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_15)) & (((/* implicit */int) var_7)))) != (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_15)))))));
    }
}
