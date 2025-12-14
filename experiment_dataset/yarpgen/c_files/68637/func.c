/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68637
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
    var_10 = ((/* implicit */int) var_4);
    var_11 = ((/* implicit */long long int) var_4);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 4; i_3 < 19; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) : (2305843009213693952ULL))));
                            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4072321594U))));
                            var_14 = ((/* implicit */int) min((min((((/* implicit */unsigned int) var_2)), (var_6))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_3 - 4])))))));
                            var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((9007199187632128ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))))) + (((unsigned int) arr_2 [3ULL] [i_3] [i_4 - 2]))))));
                        }
                        for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_10 [0U] [i_1] [i_0] [i_2] [i_3 - 2] [(signed char)8])), (((unsigned long long int) arr_11 [2LL] [i_1] [i_1] [i_3] [i_3 - 3]))));
                            var_17 = ((/* implicit */int) min((((/* implicit */long long int) arr_8 [i_5] [i_5])), (max((((((/* implicit */_Bool) var_3)) ? (3377699720527872LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((9223372036854775797LL) == (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))))));
                        }
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_9 [i_3 - 1] [i_3] [(signed char)12] [i_3 - 4] [i_3 - 3] [(signed char)5]);
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 65011712)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((unsigned int) (unsigned char)255)) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(28691624U)))))) ? (((/* implicit */unsigned long long int) (~(var_3)))) : (min((((16841046961407586162ULL) >> (((((/* implicit */int) var_0)) + (111))))), (((/* implicit */unsigned long long int) arr_13 [i_3 - 4] [i_3] [i_3] [i_3] [i_2] [i_1]))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((((unsigned int) max((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])), (-1648169595895780419LL)))) <= (var_3)));
    }
    for (unsigned int i_6 = 2; i_6 < 11; i_6 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            arr_20 [i_7] = ((((/* implicit */_Bool) arr_10 [i_6] [i_6 - 1] [i_6] [i_6 + 2] [i_6 + 2] [i_6])) ? (arr_10 [i_6 - 1] [i_6 + 2] [i_6] [i_6 - 1] [i_6 - 2] [i_6]) : (arr_10 [i_6 + 2] [i_6 + 2] [i_6] [i_6 - 1] [i_6 + 1] [i_6]));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    {
                        arr_27 [i_9] [i_8] [i_8] = ((/* implicit */signed char) ((((int) (unsigned char)224)) >> (((arr_9 [(unsigned short)15] [i_6] [i_7] [i_7] [i_8 + 2] [i_9]) - (18437125458420056435ULL)))));
                        var_21 = var_8;
                        var_22 = ((/* implicit */unsigned long long int) ((int) arr_4 [i_6 + 2] [i_6 + 2] [i_6 + 1]));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 28691612U)) ? (((unsigned long long int) 4266275672U)) : (((/* implicit */unsigned long long int) arr_15 [i_6 - 1]))));
        }
        arr_28 [6ULL] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) ^ (max((216172782113783808ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4266275693U)) % (562949951324160LL))))))));
    }
    for (int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
    {
        arr_31 [i_10] [i_10] = ((/* implicit */int) ((((min((arr_30 [7ULL]), (((/* implicit */unsigned int) var_0)))) == (arr_29 [i_10] [i_10]))) ? ((((-(18446744073709551591ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)192)) && (((/* implicit */_Bool) arr_29 [i_10] [i_10])))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_29 [i_10] [i_10]), (arr_29 [i_10] [i_10])))) ? (arr_30 [i_10]) : ((-(arr_29 [14LL] [i_10]))))))));
        arr_32 [i_10] = arr_29 [i_10] [i_10];
    }
    for (int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
    {
        arr_35 [i_11] = ((/* implicit */int) (~(min((((/* implicit */long long int) arr_29 [13] [(unsigned short)5])), (max((288089638663356416LL), (((/* implicit */long long int) (unsigned char)60))))))));
        arr_36 [i_11] [10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((unsigned long long int) (unsigned short)32704)), (max((arr_33 [i_11] [i_11]), (arr_34 [i_11] [i_11]))))))));
    }
    var_24 = ((/* implicit */int) 274877644800LL);
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 21; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_15 = 3; i_15 < 19; i_15 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) arr_34 [i_12] [i_12]);
                        var_26 = max((((/* implicit */unsigned long long int) max((2147483642), (-1931774018)))), (((((/* implicit */unsigned long long int) 2147483647)) ^ (62914560ULL))));
                    }
                    /* vectorizable */
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_17 = 2; i_17 < 19; i_17 += 4) 
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_17 + 2] [i_17] [i_17] [i_17] [i_17] [i_16])) ? (((long long int) arr_41 [20] [i_17] [i_17])) : (((/* implicit */long long int) arr_39 [i_17 + 1] [i_17 + 1]))));
                            arr_53 [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_46 [i_13] [i_14] [i_16] [i_14]))));
                            arr_54 [i_12] [i_12] [i_14] [i_16] [i_16] = ((/* implicit */int) ((unsigned short) arr_52 [i_16]));
                            var_28 = ((long long int) arr_50 [i_17 - 2] [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 - 2] [i_17 + 2]);
                        }
                        for (unsigned short i_18 = 2; i_18 < 18; i_18 += 3) 
                        {
                            arr_59 [i_16] [5U] [i_14] = ((/* implicit */unsigned int) ((signed char) arr_48 [i_12] [i_18 - 2] [i_18 - 2] [i_16] [(unsigned short)11]));
                            arr_60 [14] [5ULL] [14] [i_16] [i_14] [i_12] [i_12] = ((unsigned long long int) ((signed char) arr_42 [i_14] [i_13] [i_14] [i_16]));
                        }
                        for (int i_19 = 2; i_19 < 20; i_19 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(arr_45 [i_14])))) & (arr_61 [i_12] [i_16] [8ULL] [13ULL] [8ULL] [8ULL])));
                            arr_65 [i_16] [i_13] [i_16] [i_13] [i_19] [i_12] [i_12] = ((/* implicit */unsigned long long int) (-(arr_62 [i_19 + 1] [i_19] [i_19] [i_19 - 1] [i_19] [i_19] [i_19])));
                            var_30 = (+(2147483639));
                        }
                        for (int i_20 = 0; i_20 < 21; i_20 += 3) 
                        {
                            var_31 = ((unsigned long long int) arr_45 [i_14]);
                            var_32 = ((/* implicit */signed char) arr_51 [i_14] [i_16]);
                        }
                        arr_68 [i_12] [i_16] [i_14] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 535822336U))));
                        var_33 = ((int) arr_39 [i_13] [i_13]);
                        /* LoopSeq 3 */
                        for (signed char i_21 = 2; i_21 < 19; i_21 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((signed char) 2147483647));
                            arr_71 [i_16] [i_13] [i_13] [0] [i_21] = ((/* implicit */long long int) ((int) 255));
                        }
                        for (unsigned long long int i_22 = 2; i_22 < 17; i_22 += 2) 
                        {
                            arr_76 [i_12] [20ULL] [i_13] [i_16] [i_16] [i_22] = ((/* implicit */unsigned long long int) (-(arr_62 [i_12] [i_13] [i_12] [i_16] [i_22 + 4] [i_22] [i_14])));
                            arr_77 [i_16] [10] [i_14] [i_13] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (+(4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_22 - 1] [i_22 - 1] [i_22] [i_16] [i_22 + 4] [i_22 + 2]))) : (arr_34 [i_22 - 2] [i_22 - 2])));
                        }
                        for (unsigned int i_23 = 3; i_23 < 20; i_23 += 3) 
                        {
                            arr_80 [i_12] [i_12] [i_12] [i_16] [i_12] [i_16] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_61 [i_23] [i_16] [i_14] [i_13] [i_16] [i_12])) ? (arr_34 [i_12] [i_13]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 740071726704266527ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))));
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_14] [i_14] [i_14])) || (((/* implicit */_Bool) 288089638663356418LL))));
                            var_36 = ((/* implicit */unsigned char) var_4);
                        }
                        var_37 = ((/* implicit */unsigned short) (((~(arr_49 [i_12] [i_13] [i_12] [i_14] [i_14] [i_16]))) * (((/* implicit */unsigned long long int) arr_39 [i_14] [i_13]))));
                    }
                    var_38 = ((/* implicit */int) 274877644800LL);
                    arr_81 [i_12] = (+(max((((((/* implicit */int) (unsigned char)31)) * (((/* implicit */int) (signed char)34)))), (arr_58 [i_12] [i_14]))));
                    var_39 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)37906)))) / (((unsigned int) arr_33 [i_12] [i_12])))));
                }
            } 
        } 
    } 
}
