/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83549
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? ((~(((/* implicit */int) var_0)))) : (var_2)));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_21 [i_1] [i_2] [i_3] [i_5] [i_2] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3]))) : (((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                                arr_22 [i_4 + 1] [i_5] = ((/* implicit */int) (~(var_8)));
                                arr_23 [i_3] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (((+(((/* implicit */int) ((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) | (arr_9 [i_2] [(unsigned short)2])));
                            }
                        } 
                    } 
                    var_10 *= ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_1] [i_2])) ? (arr_11 [i_1 + 2] [i_2] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                    arr_24 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) (unsigned short)65518)) : (721921712))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1 - 1] [(unsigned char)8] [i_2] [i_3])))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                    {
                        arr_28 [i_1] [(unsigned char)12] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 2])))) ? (((((/* implicit */_Bool) ((arr_16 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) * (var_5)))) : (arr_8 [i_1] [i_1 + 1] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(arr_20 [i_1]))))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            arr_32 [i_1] [i_7] [i_3] [i_6] [i_7] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)12)) != (((/* implicit */int) (unsigned short)10))))), (min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */long long int) var_8)) : (var_7)))))));
                            arr_33 [i_1] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))) / ((-(arr_27 [i_1 - 1] [i_1 - 1] [i_3])))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_11 *= ((/* implicit */signed char) var_9);
                            arr_36 [i_1] [i_2] [i_3] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) (((~(arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 3]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_26 [i_1 + 1] [i_1 - 3] [i_1 + 2] [i_1])) : (((/* implicit */int) arr_26 [i_1 + 2] [i_1 + 2] [i_1 - 3] [9])))))));
                            var_12 = ((/* implicit */int) var_8);
                            arr_37 [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) (-(arr_13 [i_1] [i_3] [i_6] [i_8]))));
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_7)))))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 18; i_9 += 1) 
                        {
                            arr_42 [i_9] [i_9] = min((((unsigned char) var_3)), (((unsigned char) arr_16 [i_1 - 2])));
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))) <= (var_2))))));
                        }
                        arr_43 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_20 [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_3] [i_1 + 1])))) ? (((long long int) var_1)) : (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65526))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_40 [i_2] [i_2])) : (((/* implicit */int) var_6))))))))))));
                            arr_47 [i_3] [i_6] = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_2] [i_1] [i_6]))) / (arr_8 [0U] [0U] [0U])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_3] [18ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8)))) : (((((/* implicit */long long int) var_5)) / (var_7))))) : (((((/* implicit */long long int) arr_20 [i_1 - 2])) / (arr_38 [i_1 + 1] [i_1 - 1]))));
                            arr_48 [i_1] [i_1] [9LL] [i_1 - 3] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_1 - 3]))))) << ((((~(var_2))) - (265707486))))))));
                            var_16 ^= ((/* implicit */signed char) (+(min((arr_16 [i_1 + 2]), (arr_16 [i_3])))));
                            arr_49 [i_1] [(unsigned char)14] [i_2] [i_2] [i_3] [i_6] [i_10] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) var_8))), (min((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_6)))), (min((var_2), (((/* implicit */int) arr_26 [i_1] [i_1] [(unsigned char)1] [(unsigned char)1]))))))));
                        }
                    }
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [14] [i_1 + 1]))))) : (((/* implicit */int) ((short) var_7)))));
                        arr_54 [12] [12] [12] [i_3] [i_3] [12] = ((/* implicit */short) (+(min((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) var_4))))));
                        arr_55 [i_1] [i_1] [(unsigned char)11] [i_1] [13U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_3] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_1] [6ULL] [i_1] [i_1 + 1]) > (arr_13 [i_11] [i_2] [i_3] [i_1 + 1]))))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_3] [i_1 - 3])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                    {
                        arr_59 [(unsigned char)14] [i_3] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [16LL] [i_2] [i_3] [(unsigned char)14])) ? (((/* implicit */int) arr_31 [i_1] [i_1] [i_3] [i_3] [i_12] [i_12] [i_12])) : (((/* implicit */int) var_9)))))))) ? (((/* implicit */int) ((signed char) var_0))) : (((int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526))) / (321648578510581482LL))))));
                        arr_60 [i_12] [i_3] [i_2] [i_1] |= ((/* implicit */_Bool) arr_41 [i_12] [i_3] [i_2] [i_1] [i_2]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            arr_64 [(unsigned char)12] [i_2] [i_2] [12LL] [i_2] [i_2] [i_2] = ((((/* implicit */int) arr_18 [i_1 + 1] [i_1 + 1] [i_12] [i_12])) << (((/* implicit */int) arr_18 [i_2] [i_12] [i_2] [i_2])));
                            arr_65 [i_1] [i_1] [i_12] [(unsigned char)1] = ((/* implicit */unsigned long long int) arr_38 [(unsigned char)3] [(unsigned char)3]);
                            arr_66 [i_1] [i_1] [i_1] [i_1] [i_1] [i_12] [i_13] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_57 [i_1] [i_1] [i_3] [i_3] [i_1])))));
                        }
                        for (unsigned char i_14 = 1; i_14 < 19; i_14 += 3) 
                        {
                            var_18 = ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_1 - 2] [i_14 + 1]))) - (var_7)))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) var_2))) * (min((((/* implicit */unsigned int) arr_20 [i_14 + 1])), (var_8)))))) ? (min(((+(var_7))), (((/* implicit */long long int) ((signed char) (unsigned short)65526))))) : (((/* implicit */long long int) min((arr_16 [i_14 + 1]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1]))))))))));
                            arr_70 [14ULL] [i_2] [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2]))))), (arr_12 [i_1 + 2] [i_14 + 1])));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_6))));
                        }
                        arr_71 [i_1] [i_2] [(unsigned short)15] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((int) arr_17 [i_12])) : (((/* implicit */int) var_9))));
                    }
                }
            } 
        } 
        arr_72 [i_1] = ((/* implicit */unsigned short) var_4);
    }
    /* LoopSeq 1 */
    for (unsigned char i_15 = 3; i_15 < 10; i_15 += 3) 
    {
        arr_75 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_15 - 2] [i_15 + 2])) ? (var_5) : (((/* implicit */unsigned int) arr_14 [i_15 + 2] [i_15]))))) ? (((/* implicit */int) ((arr_14 [i_15 - 1] [i_15 + 2]) == (arr_14 [i_15] [i_15 + 2])))) : ((~(var_2)))));
        /* LoopSeq 3 */
        for (long long int i_16 = 3; i_16 < 9; i_16 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_17 = 2; i_17 < 11; i_17 += 2) 
            {
                for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    {
                        arr_86 [i_15 + 1] [i_16] [i_17 + 1] [i_18] = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) var_2)) ? (arr_82 [i_15] [i_15] [i_15] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_5) : (var_5)))))));
                        arr_87 [(_Bool)1] [(_Bool)1] [i_17] [(unsigned char)2] = ((/* implicit */unsigned long long int) var_4);
                        var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) var_9)), (min((var_4), (arr_68 [i_15] [i_15] [i_17 + 1] [10U] [i_18])))));
                    }
                } 
            } 
            var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-75)) ? (var_4) : (((/* implicit */int) arr_69 [i_15 + 2] [i_16] [i_15] [i_16] [i_15] [i_15 + 2] [(signed char)7]))))), ((+(var_5)))));
        }
        for (long long int i_19 = 3; i_19 < 9; i_19 += 1) /* same iter space */
        {
            arr_90 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((arr_16 [i_15 - 3]) - (arr_16 [i_15 + 2]))) : ((-(arr_16 [i_15 - 3])))));
            /* LoopNest 2 */
            for (unsigned char i_20 = 1; i_20 < 10; i_20 += 2) 
            {
                for (unsigned long long int i_21 = 2; i_21 < 10; i_21 += 4) 
                {
                    {
                        var_23 += ((/* implicit */unsigned long long int) var_7);
                        arr_97 [i_15] [i_15 + 1] [i_15] [i_20 - 1] [i_21] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_67 [i_15 - 3] [(unsigned char)3] [i_21])) | (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_9)) - (31728))))))));
                        arr_98 [i_21] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) arr_26 [i_15] [i_15] [i_20] [i_20]);
                    }
                } 
            } 
            arr_99 [i_15] &= ((/* implicit */unsigned short) var_5);
        }
        for (long long int i_22 = 3; i_22 < 9; i_22 += 1) /* same iter space */
        {
            var_24 = ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_45 [i_22 - 1] [i_15 - 1])), (var_3)))) ? (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_45 [i_22 - 1] [i_15 - 1])))))));
            /* LoopSeq 1 */
            for (unsigned int i_23 = 0; i_23 < 12; i_23 += 2) 
            {
                var_25 = (unsigned short)65499;
                var_26 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((int) (_Bool)0))) ? (var_7) : (((/* implicit */long long int) ((arr_81 [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_23]) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (unsigned short)21)))))))));
                var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65526))));
                arr_105 [i_15] [i_22] [i_22] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) arr_51 [4ULL] [i_22 - 2] [i_23])) >= (arr_6 [i_22] [i_23]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_100 [i_22] [i_22 + 3] [i_15 + 1])) > (var_5))))) : (arr_39 [i_15] [i_15] [i_15] [i_15] [(unsigned short)9])));
                var_28 = ((/* implicit */int) max((var_28), ((~(((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_0))))))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_24 = 4; i_24 < 8; i_24 += 3) 
            {
                for (unsigned short i_25 = 0; i_25 < 12; i_25 += 1) 
                {
                    {
                        arr_112 [i_15] [i_22] [i_15] [i_25] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65526)) / (((/* implicit */int) (unsigned short)9))))) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (unsigned short)10)))));
                        var_29 = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (483637693)));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (min((arr_82 [i_15] [i_15] [i_15 - 2] [i_15]), (arr_82 [i_15 - 2] [i_15] [i_15 - 1] [i_15 + 2]))) : (((((/* implicit */_Bool) arr_82 [i_15] [i_15 - 2] [i_15 + 2] [i_15 + 2])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_82 [i_15 - 1] [i_15 - 1] [i_15 - 2] [i_15 - 1]))))))));
        arr_113 [9LL] = ((/* implicit */unsigned char) ((((_Bool) (~(((/* implicit */int) arr_31 [i_15 + 2] [i_15 + 2] [(short)2] [i_15 + 2] [i_15] [i_15 - 1] [i_15 + 2]))))) ? (((((/* implicit */_Bool) arr_44 [i_15] [i_15] [(_Bool)1] [9] [(unsigned char)7])) ? (((/* implicit */int) arr_44 [i_15] [i_15] [i_15 - 2] [i_15 + 1] [i_15])) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (278195004)))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) 3281499371U)) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) (unsigned char)95))))))));
    }
}
