/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9967
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_3 [14U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (arr_2 [i_0])))) ? (var_12) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [5U])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)14716);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_14 *= ((/* implicit */unsigned char) (((((+(((/* implicit */int) (unsigned char)192)))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (arr_2 [(unsigned char)19]))))) != (min(((-(arr_2 [i_0]))), (var_9)))));
            arr_9 [(unsigned char)5] [(unsigned char)5] |= ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_10))) != (((/* implicit */int) ((signed char) (unsigned char)82)))));
            arr_10 [i_0] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)6284)) >= (((/* implicit */int) (signed char)76))))))));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (unsigned short)9189))));
                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 1944268356);
                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_12 [i_2]))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                {
                    arr_20 [i_0] [(unsigned char)0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_11)) / (arr_14 [i_0] [i_0] [i_4])))));
                    var_17 *= ((/* implicit */_Bool) var_1);
                }
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)49)) >= (((/* implicit */int) arr_12 [i_0])))))));
                }
            }
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                arr_26 [i_2] &= ((/* implicit */unsigned short) ((unsigned int) var_11));
                arr_27 [i_0] [i_0] [(unsigned char)16] [i_6] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))));
                /* LoopSeq 4 */
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    var_20 &= max(((+(var_2))), (((/* implicit */int) (_Bool)0)));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))));
                }
                for (long long int i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    var_22 *= ((/* implicit */unsigned short) var_7);
                    var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_25 [i_6] [(unsigned short)2]), (arr_15 [i_0] [i_0] [(unsigned char)12] [i_0]))))));
                    arr_35 [i_0] [i_2] [i_2] [i_8 + 1] [i_6] = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0]);
                }
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_2] [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (arr_1 [i_0] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (var_6)))))));
                        arr_41 [i_0] [i_10] [i_9] [i_0] [i_10] [20U] = ((/* implicit */unsigned short) arr_2 [i_0]);
                    }
                    var_25 = ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned char) arr_1 [i_9] [i_9]))), (arr_1 [i_9] [i_2])));
                    var_26 = ((/* implicit */unsigned long long int) ((((_Bool) (-(var_12)))) ? (arr_18 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned char) arr_38 [i_0] [i_2] [i_6] [i_6] [i_6])))))));
                    arr_42 [i_6] [(unsigned char)16] [(unsigned char)16] [i_6] [(unsigned char)19] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59252))));
                }
                for (unsigned short i_11 = 1; i_11 < 20; i_11 += 2) 
                {
                    arr_45 [(signed char)15] [i_11] [i_6] = ((unsigned int) (unsigned short)6283);
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2] [i_11 - 1]))))) ? ((~(((/* implicit */int) (unsigned short)6294)))) : (max((var_2), (((/* implicit */int) arr_8 [(unsigned short)2] [i_2]))))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)110))) ^ (min((23U), (((/* implicit */unsigned int) (_Bool)0)))))))))));
                }
                arr_46 [i_0] [i_0] [i_0] [(signed char)8] = ((/* implicit */int) arr_23 [i_0] [(unsigned char)12] [i_6]);
            }
            for (int i_12 = 1; i_12 < 18; i_12 += 1) 
            {
                arr_49 [i_0] [i_2] [i_12] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_40 [i_12] [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1]), (arr_40 [i_12 + 1] [i_12] [i_12] [i_12 + 2] [i_12 + 1])))), ((~(((/* implicit */int) arr_40 [i_12] [i_12 - 1] [(unsigned char)2] [i_12 - 1] [i_12 + 3]))))));
                /* LoopSeq 4 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 1; i_14 < 20; i_14 += 1) 
                    {
                        arr_57 [i_0] [i_13] = ((/* implicit */signed char) arr_48 [i_0] [i_2] [i_12]);
                        arr_58 [i_2] &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1621179972U)) ? (((/* implicit */int) (unsigned short)39858)) : (((/* implicit */int) (signed char)-47))))))));
                        var_29 = ((/* implicit */int) ((unsigned short) (((~(((/* implicit */int) (unsigned short)65535)))) - (((/* implicit */int) ((-1931229311) < (((/* implicit */int) arr_28 [i_0] [i_0] [19U] [i_0] [i_0] [i_0]))))))));
                    }
                    arr_59 [i_13] [i_0] [i_2] [i_12 + 3] [i_12 + 3] = max((min((arr_5 [i_12] [i_2] [i_12 + 2]), (arr_5 [i_0] [i_0] [i_12 - 1]))), (((/* implicit */unsigned short) var_3)));
                    /* LoopSeq 1 */
                    for (int i_15 = 4; i_15 < 20; i_15 += 1) 
                    {
                        arr_62 [(_Bool)1] [i_2] [i_13] [(_Bool)1] [(_Bool)1] [i_0] [i_13] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_56 [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_15 - 3] [i_15 - 3] [i_15 - 3] [i_15])) && (((/* implicit */_Bool) arr_5 [i_12 + 2] [i_15 - 1] [i_15])))) || (var_11)));
                        var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)52)))) + ((-(((/* implicit */int) var_5))))))), ((+((-(524427850U)))))));
                        arr_63 [(signed char)9] [i_2] [i_13] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_0] [i_2] [i_13] [i_15])) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -222278049)) ? (arr_29 [i_0] [5U] [5U]) : (((/* implicit */int) (unsigned short)16809))))))) : ((-(min((arr_1 [i_2] [(unsigned short)12]), (((/* implicit */unsigned int) (unsigned short)40293))))))));
                        arr_64 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3495561513U)) ? (((/* implicit */int) ((((/* implicit */int) arr_34 [i_12] [i_12 - 1] [i_15 - 2] [i_12])) > (var_2)))) : ((-(((/* implicit */int) (unsigned short)59251))))));
                    }
                }
                for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        var_31 = arr_6 [i_0] [i_0] [i_0];
                        var_32 = ((/* implicit */unsigned short) arr_31 [15] [(unsigned short)1] [i_12] [i_12] [i_12] [i_12 - 1]);
                        var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) var_1))), (min((((/* implicit */long long int) arr_32 [(signed char)19] [(signed char)19] [i_12 + 2] [11U] [i_12 - 1] [i_12])), (2274728619343447005LL)))))) ? (((long long int) (unsigned short)48726)) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_16])), ((unsigned short)29802)))) ? ((~(((/* implicit */int) var_8)))) : (min((((/* implicit */int) var_10)), (arr_14 [i_0] [i_0] [i_17]))))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        arr_73 [i_0] [i_2] [i_12] = ((/* implicit */unsigned long long int) ((unsigned char) arr_21 [i_0] [i_0] [i_0] [i_0]));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_12] [i_12 + 2] [i_18])) ? (((((/* implicit */int) var_10)) - (var_2))) : ((~(((/* implicit */int) var_10)))))))));
                    }
                    for (unsigned short i_19 = 3; i_19 < 20; i_19 += 4) 
                    {
                        var_35 = max((((/* implicit */unsigned int) arr_60 [i_0] [i_0] [i_12] [i_16])), (((((/* implicit */_Bool) arr_22 [i_0] [i_12 - 1] [i_19] [i_19 + 1] [i_19 + 1] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-95)), (arr_53 [i_0] [i_16]))))) : (arr_32 [i_0] [i_0] [i_0] [i_16] [i_19] [i_16]))));
                        arr_77 [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned long long int) 2147483626);
                        arr_78 [i_0] [i_0] [i_12 + 1] [i_16] = ((/* implicit */signed char) (unsigned char)120);
                    }
                    arr_79 [18] = ((/* implicit */unsigned int) arr_0 [i_0]);
                }
                for (int i_20 = 2; i_20 < 19; i_20 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        arr_87 [i_0] [i_0] [i_20] [i_0] [i_0] = ((/* implicit */unsigned short) -259902005);
                        arr_88 [(unsigned char)9] [i_2] [(unsigned short)10] [i_20] [(unsigned short)10] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_12 + 3] [i_12 + 3] [i_20 + 2] [(unsigned short)12])) / (((/* implicit */int) arr_40 [i_12 + 3] [14] [i_20 - 1] [i_12 + 3] [14]))));
                        var_36 = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) var_10)))));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (+(((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned short)28110)) - (28096))))))))));
                    }
                    for (unsigned char i_22 = 0; i_22 < 21; i_22 += 2) 
                    {
                        var_38 += ((/* implicit */unsigned int) ((_Bool) min((arr_85 [i_0] [i_12] [i_20] [i_12]), (((/* implicit */int) (unsigned char)108)))));
                        var_39 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) max((arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_22 [i_20] [(unsigned char)4] [i_12 - 1] [5] [i_12] [i_22])))))))), (arr_81 [i_0] [i_2] [i_12] [i_12] [i_22])));
                    }
                    arr_91 [i_0] [i_0] [12U] [i_0] [i_20] = ((/* implicit */unsigned char) var_10);
                    var_40 += ((/* implicit */signed char) arr_39 [i_0] [i_12] [i_12 - 1] [i_20 - 2] [i_20 + 2] [i_0] [i_0]);
                }
                for (int i_23 = 3; i_23 < 19; i_23 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_24 = 0; i_24 < 21; i_24 += 4) 
                    {
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_0] [i_23] [i_12] [i_23] [i_24])) || (((/* implicit */_Bool) var_0))))) - (((((/* implicit */_Bool) arr_83 [i_12 + 3] [i_12 + 3] [i_23 + 1] [i_23 + 1] [(unsigned short)6])) ? (((/* implicit */int) arr_83 [i_12 + 3] [i_12] [i_23 + 2] [i_24] [i_24])) : (((/* implicit */int) arr_83 [i_12 + 1] [i_23 - 1] [i_23 - 2] [(_Bool)1] [i_23])))))))));
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) var_12))));
                        arr_100 [i_2] [i_2] |= ((/* implicit */unsigned short) arr_31 [i_0] [i_2] [i_23] [i_0] [i_23] [i_12 + 1]);
                    }
                    arr_101 [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)25482)), (3410317729U)))) ? (((arr_89 [i_23]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))))) : (((((((/* implicit */int) (unsigned char)255)) >= (var_7))) ? (min((((/* implicit */unsigned int) 1753345551)), (arr_18 [i_0] [i_2] [i_12] [i_23]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29076)))))));
                    arr_102 [i_0] [i_0] [i_2] [i_23] [i_2] [i_23] = ((/* implicit */_Bool) ((unsigned char) arr_22 [7U] [i_2] [i_12] [i_23] [i_0] [i_0]));
                    var_43 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_71 [i_0] [i_2] [i_12] [i_2] [i_12])));
                }
            }
            var_44 = ((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_0] [i_0] [i_2] [i_0] [i_2])) >> (((((-7724812829140585160LL) / (((/* implicit */long long int) 524427851U)))) + (14729982050LL)))));
            arr_103 [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_7 [i_0] [i_2]);
            var_45 += ((/* implicit */unsigned short) (+((~(arr_85 [i_0] [i_2] [i_2] [i_0])))));
        }
        for (long long int i_25 = 0; i_25 < 21; i_25 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_26 = 0; i_26 < 21; i_26 += 3) 
            {
                var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_26])) & (-399273143)));
                var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) var_10))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_27 = 0; i_27 < 21; i_27 += 2) /* same iter space */
            {
                arr_113 [i_25] = ((/* implicit */unsigned int) var_12);
                var_48 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_27]))) : (arr_93 [i_27] [i_27]))) - (((unsigned int) (+(((/* implicit */int) arr_82 [i_27])))))));
            }
            for (unsigned char i_28 = 0; i_28 < 21; i_28 += 2) /* same iter space */
            {
                var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((int) min((arr_13 [i_28] [i_28] [i_28]), (((/* implicit */unsigned short) var_6))))))));
                arr_116 [i_0] [i_0] [i_28] &= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)1))))))));
                var_50 = ((/* implicit */long long int) arr_44 [4U] [4U] [4U] [i_0]);
                var_51 = ((/* implicit */unsigned int) arr_111 [i_0] [i_25] [3]);
            }
            for (unsigned char i_29 = 0; i_29 < 21; i_29 += 2) /* same iter space */
            {
                arr_121 [i_29] [(unsigned short)12] [i_29] = ((/* implicit */unsigned char) ((max((((int) arr_56 [i_0] [i_0] [18U] [i_0] [i_0] [i_0] [(unsigned char)4])), (((/* implicit */int) var_1)))) & ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_25] [(unsigned short)0] [i_29])))))))));
                var_52 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_25] [i_25] [19U])) / ((-(((/* implicit */int) (signed char)79))))));
            }
        }
        var_53 = var_12;
    }
    for (unsigned int i_30 = 0; i_30 < 21; i_30 += 1) /* same iter space */
    {
        var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) arr_12 [i_30]))));
        var_55 = ((/* implicit */int) arr_22 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30]);
        var_56 *= ((((((/* implicit */unsigned int) var_7)) == (((unsigned int) arr_23 [i_30] [i_30] [i_30])))) || ((!(((/* implicit */_Bool) arr_71 [i_30] [i_30] [i_30] [(signed char)2] [i_30])))));
    }
    for (unsigned int i_31 = 0; i_31 < 21; i_31 += 1) /* same iter space */
    {
        arr_129 [10U] [16LL] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_120 [i_31] [i_31] [i_31] [i_31])))));
        var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) ((var_11) ? (((((/* implicit */_Bool) arr_127 [i_31])) ? (((/* implicit */int) arr_127 [i_31])) : (var_7))) : (((/* implicit */int) arr_83 [i_31] [i_31] [i_31] [i_31] [i_31])))))));
        var_58 = ((/* implicit */long long int) (signed char)52);
    }
    var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? ((~((~(var_7))))) : (((/* implicit */int) var_3))));
    var_60 = ((/* implicit */int) max((((/* implicit */long long int) var_10)), (68719476735LL)));
}
