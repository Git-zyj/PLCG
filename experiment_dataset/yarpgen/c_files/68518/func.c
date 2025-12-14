/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68518
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 6; i_0 += 1) 
    {
        arr_3 [(unsigned char)8] = ((/* implicit */unsigned short) arr_0 [(unsigned char)8] [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_6 [(_Bool)1] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_4 [i_0] [(unsigned short)3] [i_0])));
            var_10 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * ((~(((/* implicit */int) arr_5 [i_1] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_11 = ((/* implicit */unsigned long long int) arr_0 [6LL] [(unsigned short)3]);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_12 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10154)) << (((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [i_0 + 1])) || (((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_3] [i_4] [i_4] [i_4])))), ((!(((/* implicit */_Bool) var_5)))))))));
                        var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0 - 2] [4U] [i_0])) << (((var_7) - (900003478)))))) + (max((((/* implicit */long long int) arr_12 [i_0] [4] [i_3] [i_4])), (arr_8 [i_2] [i_0 + 4])))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_0] [(short)0] [(short)4] [i_5 + 1] [(signed char)6] [i_6])) : (((/* implicit */int) arr_13 [i_5 + 2] [i_0 + 1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            arr_26 [i_5] = ((/* implicit */int) arr_22 [i_0] [i_5] [i_6] [i_0]);
                            var_15 += ((/* implicit */_Bool) arr_23 [i_0] [i_0]);
                        }
                    } 
                } 
            }
            for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (524288U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                arr_30 [i_0 + 2] [i_0 - 1] [i_0] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) 12087530762776447711ULL)) && (((/* implicit */_Bool) arr_14 [2U] [i_5 - 1] [i_5 - 1] [(short)9] [i_5 - 1] [9])))) || (((/* implicit */_Bool) ((unsigned int) var_5)))));
                arr_31 [i_5] = ((/* implicit */unsigned int) ((arr_8 [i_0] [i_0 + 1]) == (arr_8 [i_0] [i_0 + 1])));
            }
            for (short i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((arr_21 [i_5 + 1] [i_5] [i_5 + 2] [i_0 + 1]) && (arr_21 [i_5 + 2] [i_5] [i_5 + 3] [i_0 + 2]))))));
                arr_34 [i_5] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0 + 2]);
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 3; i_12 < 9; i_12 += 2) 
                    {
                        var_18 = ((unsigned int) var_8);
                        var_19 = ((/* implicit */_Bool) ((arr_10 [i_12 + 1] [i_11] [i_5 + 3] [i_0 - 2]) ^ (arr_10 [i_12 + 1] [i_10] [i_5 + 3] [i_0 - 2])));
                        arr_41 [i_12] [i_5] [i_10] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [(unsigned short)0] [i_5] [i_5 + 2])) & (((/* implicit */int) arr_40 [i_0] [i_0 + 1] [i_5 - 1] [i_5 + 1]))));
                    }
                    arr_42 [i_0] [i_5] [i_5] [i_10] [i_11] [i_11] = ((/* implicit */short) 3460496527U);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_0 + 4] [i_5 + 2] [(unsigned char)2] [i_5 + 2]))));
                }
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [(unsigned short)3] [(unsigned short)3] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_6))))) : (((/* implicit */int) arr_2 [i_0 + 4]))));
                    var_22 += ((/* implicit */signed char) (~((~(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 4 */
                    for (long long int i_14 = 2; i_14 < 6; i_14 += 1) 
                    {
                        arr_47 [i_0] [i_5] [i_5] [i_13] [i_14] = ((/* implicit */signed char) (_Bool)1);
                        arr_48 [i_0] [i_5] [i_5] [i_10] [1] [i_13] [i_14 + 1] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_18 [9U] [(unsigned short)6] [i_13]))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 2]))) == (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 + 4] [i_5 + 2]))) : (arr_25 [i_14] [9U] [i_13] [i_10] [i_0] [i_0])))));
                    }
                    for (signed char i_15 = 2; i_15 < 9; i_15 += 1) /* same iter space */
                    {
                        arr_51 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [8LL] [0] [i_5])) | ((-(((/* implicit */int) (signed char)-1))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [6LL] [6LL] [4U] [i_13] [i_15])) && (((/* implicit */_Bool) arr_37 [(unsigned short)0] [i_5] [i_5 + 2] [i_5] [i_5]))));
                    }
                    for (signed char i_16 = 2; i_16 < 9; i_16 += 1) /* same iter space */
                    {
                        arr_54 [i_5] [9U] [i_10] [i_13] [(unsigned short)0] [i_10] = ((/* implicit */unsigned long long int) (((~(arr_45 [i_0] [i_0] [(unsigned short)5] [5U] [(unsigned short)5]))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65535)))))));
                        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_50 [i_5]))));
                    }
                    for (signed char i_17 = 2; i_17 < 9; i_17 += 1) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) arr_28 [(unsigned char)8] [i_5 + 3] [i_5 + 2])))));
                        var_27 = ((/* implicit */long long int) (~(((/* implicit */int) arr_43 [i_17 - 1] [i_5 + 3]))));
                    }
                }
            }
            for (long long int i_18 = 1; i_18 < 8; i_18 += 4) 
            {
                arr_62 [i_0] [i_5] [i_18 + 2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_18 - 1])) / (-4005683)));
                arr_63 [i_5] [i_18] [i_5 + 3] [i_5] = ((/* implicit */long long int) ((((arr_1 [(unsigned char)6]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17955))))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_0 + 2] [i_5] [i_18])) / (var_4))))));
                arr_64 [i_0] [(signed char)1] [(unsigned char)5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 + 4] [i_0 + 3] [i_18] [i_18])) ? (arr_10 [i_0 + 2] [i_5 + 2] [i_5] [(unsigned short)9]) : (arr_10 [i_0 + 3] [0LL] [(unsigned char)4] [i_0])));
                arr_65 [6U] [i_5] [i_5] |= ((/* implicit */unsigned char) arr_58 [i_0] [i_5] [i_5] [i_0]);
            }
            arr_66 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_0] [i_0] [i_0] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [(unsigned short)3] [3])))))) && (((/* implicit */_Bool) arr_4 [i_0] [i_5] [i_0]))));
            arr_67 [i_5] = ((/* implicit */int) (_Bool)1);
            /* LoopSeq 2 */
            for (signed char i_19 = 0; i_19 < 10; i_19 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 10; i_20 += 3) 
                {
                    arr_73 [i_0] [i_0] [i_0] [i_0] [i_5] [(signed char)3] = ((/* implicit */unsigned short) ((unsigned char) arr_9 [(unsigned short)5] [i_5] [i_5] [i_20]));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((arr_16 [i_0 - 2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5 + 2] [i_5] [i_5 + 1] [i_5 + 1] [i_0] [i_0]))))))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_19] [i_20])) ? ((-(((/* implicit */int) arr_5 [i_0] [i_20])))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 1])))))));
                    arr_74 [i_0] [i_5] [i_19] [i_20] [i_0] [i_19] = ((/* implicit */short) ((((((-4005681) + (2147483647))) << (((((var_9) + (1999854869))) - (16))))) << (((((((/* implicit */_Bool) arr_32 [i_0] [i_5] [i_19] [i_20])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_57 [i_5])))) - (32231)))));
                }
                var_30 = (i_5 % 2 == zero) ? (((/* implicit */int) ((arr_19 [i_0 + 3] [(signed char)2] [i_0 + 3]) << (((((long long int) arr_17 [i_0] [i_5 + 2] [i_5])) - (63560LL)))))) : (((/* implicit */int) ((arr_19 [i_0 + 3] [(signed char)2] [i_0 + 3]) << (((((((long long int) arr_17 [i_0] [i_5 + 2] [i_5])) - (63560LL))) - (207LL))))));
                /* LoopSeq 1 */
                for (long long int i_21 = 1; i_21 < 7; i_21 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_22 = 2; i_22 < 7; i_22 += 2) 
                    {
                        arr_82 [i_22] [i_5 + 1] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 - 1])) ? (3666470690209160171LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5 + 3] [i_21 + 1])))));
                        var_31 &= ((/* implicit */unsigned short) (-(((-4005672) / (((/* implicit */int) var_8))))));
                        arr_83 [i_5] [i_22] [i_21] [i_19] [i_5 + 1] [i_5] [i_5] = ((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_5] [i_19] [i_21] [i_23 + 1]))));
                        var_33 = ((/* implicit */unsigned char) var_5);
                    }
                    for (int i_24 = 0; i_24 < 10; i_24 += 3) 
                    {
                        arr_90 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] = (i_5 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)66)) >> (((((-1) + (((/* implicit */int) arr_17 [i_0] [i_5] [i_5])))) - (63535)))))) : (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)66)) >> (((((((-1) + (((/* implicit */int) arr_17 [i_0] [i_5] [i_5])))) - (63535))) - (225))))));
                        var_34 -= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) -4005675)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
                        var_35 -= ((/* implicit */_Bool) var_1);
                        var_36 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) -4005670))) < (((((/* implicit */_Bool) arr_89 [i_0] [i_0] [i_19] [i_21] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [i_5 + 1] [i_19] [i_21]))))));
                    }
                    arr_91 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_5])) > (arr_81 [i_0] [i_0] [i_0] [i_0])));
                }
            }
            for (unsigned short i_25 = 0; i_25 < 10; i_25 += 3) 
            {
                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_77 [(unsigned short)2] [(unsigned char)7] [8] [i_0])) != (((/* implicit */int) (_Bool)1)))))) + (arr_10 [i_5] [i_5] [i_5] [i_5 + 1])));
                var_38 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_17 [i_0] [i_5] [6LL])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(unsigned short)9] [i_25] [i_25])) : (-4005681)))));
            }
        }
        var_39 = ((/* implicit */unsigned short) ((((((arr_8 [i_0 + 4] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0]))))) <= (((/* implicit */long long int) ((((/* implicit */int) var_6)) | (arr_81 [i_0] [i_0 + 2] [i_0] [i_0 + 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_0] [i_0] [(unsigned short)8] [i_0] [4U] [i_0]))) : (max(((-(3762957174136649588ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0] [i_0]))) : (arr_10 [(signed char)7] [i_0] [i_0] [i_0]))))))));
        var_40 |= arr_78 [i_0 + 3] [i_0 - 2] [(short)8] [i_0];
        var_41 = ((/* implicit */unsigned char) var_1);
    }
    /* vectorizable */
    for (unsigned long long int i_26 = 2; i_26 < 17; i_26 += 4) 
    {
        var_42 = ((/* implicit */signed char) ((unsigned long long int) arr_94 [i_26 + 2] [i_26 + 3]));
        arr_97 [i_26 + 3] = ((/* implicit */signed char) -2147483647);
    }
    for (unsigned short i_27 = 0; i_27 < 21; i_27 += 2) 
    {
        var_43 = ((/* implicit */unsigned short) min((max((7953317150293322340ULL), (((/* implicit */unsigned long long int) -1353334419049969534LL)))), (((/* implicit */unsigned long long int) ((((var_9) < (((/* implicit */int) (unsigned short)1)))) ? (((((/* implicit */_Bool) arr_98 [i_27] [i_27])) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (arr_100 [i_27])))))))));
        arr_101 [i_27] = ((/* implicit */unsigned short) max((arr_98 [i_27] [i_27]), (((/* implicit */int) (unsigned char)198))));
    }
    /* LoopSeq 1 */
    for (short i_28 = 2; i_28 < 20; i_28 += 2) 
    {
        var_44 ^= ((/* implicit */unsigned short) 10493426923416229284ULL);
        var_45 = arr_103 [i_28];
        arr_104 [i_28] = ((/* implicit */unsigned short) 6965077359516323044LL);
        arr_105 [i_28] [i_28 - 1] = ((/* implicit */_Bool) min((max(((~(-4005687))), (((((/* implicit */_Bool) var_3)) ? (arr_98 [i_28] [i_28]) : (var_4))))), ((~(((/* implicit */int) arr_103 [i_28 - 1]))))));
    }
    var_46 = max((((/* implicit */unsigned short) (signed char)91)), (var_6));
}
