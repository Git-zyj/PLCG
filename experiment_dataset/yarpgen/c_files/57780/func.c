/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57780
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
    var_19 = ((/* implicit */long long int) (!(((0ULL) <= (0ULL)))));
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
    var_21 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_2) : (((/* implicit */int) arr_2 [i_0] [i_0])))))) << (((min(((+(((/* implicit */int) (unsigned char)144)))), (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [(unsigned short)5] [(unsigned short)5]))))))) - (65)))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((9223372036854775807LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) & (var_7)))))))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4007521449U)) + (7910929676825357208ULL)))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 4007521449U)))) : (((/* implicit */unsigned long long int) 4007521449U))));
        var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [14ULL] [i_0]))));
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned char)144);
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_25 ^= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_1 [i_1]))))));
            var_26 = ((/* implicit */_Bool) arr_7 [i_2]);
        }
        for (short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)6106)) >> (((max((((((/* implicit */int) (short)-6106)) + (((/* implicit */int) arr_2 [i_1] [i_3])))), (((((/* implicit */int) arr_9 [i_1] [i_1])) | (((/* implicit */int) (short)6106)))))) - (6130)))));
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)110)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3]))) / (min((((/* implicit */unsigned int) arr_10 [i_3] [i_1] [i_1])), (1850719210U))))) : (min((min((var_12), (((/* implicit */unsigned int) 1937380447)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (var_2)))))))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_5 = 1; i_5 < 23; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    var_28 = (i_5 % 2 == zero) ? (((/* implicit */short) (((((-(((/* implicit */int) (unsigned char)144)))) + (2147483647))) << (((arr_19 [i_1] [i_5 + 2] [i_5]) - (3523950291U)))))) : (((/* implicit */short) (((((-(((/* implicit */int) (unsigned char)144)))) + (2147483647))) << (((((arr_19 [i_1] [i_5 + 2] [i_5]) - (3523950291U))) - (3048533317U))))));
                    var_29 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)125)))) >= (((((/* implicit */int) var_6)) ^ (-708559003)))));
                }
                arr_24 [i_1] [i_5] [i_4] [(unsigned char)6] = ((/* implicit */unsigned long long int) -1330107853);
            }
            arr_25 [i_4] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)130)), (arr_14 [19U]))))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
        {
            arr_28 [i_1] [(unsigned short)3] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-86)), (arr_7 [i_1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)110)), (arr_18 [i_7] [i_7] [i_7] [i_7])))) : (min((10535814396884194408ULL), (((/* implicit */unsigned long long int) var_10))))))) ? ((+(((((/* implicit */unsigned long long int) arr_27 [2U] [i_7] [i_1])) * (0ULL))))) : (((/* implicit */unsigned long long int) 2095027707))));
            var_30 = max(((~(arr_8 [i_7]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_7] [i_7] [i_7] [i_7] [i_1])) + (((/* implicit */int) arr_23 [i_1] [i_7] [i_7] [i_7] [i_1]))))));
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-1))))), (arr_8 [i_1])))) ? ((+(((((/* implicit */_Bool) -200654217)) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) arr_13 [i_7])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (signed char)46)), (3085343917U))) >= ((-(2444248085U))))))))))));
        }
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_9 [i_1] [i_1]))));
                arr_35 [i_9] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 7577143661298875084ULL)) ? (arr_18 [i_1] [i_9] [i_9] [i_1]) : (((/* implicit */int) (unsigned short)37314)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_8] [21] [i_9] [i_9 - 1])))))));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 24; i_12 += 3) 
                    {
                        {
                            arr_44 [i_8] [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_12 - 2] [i_12 - 3]))));
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) arr_15 [i_1] [i_8]))));
                        }
                    } 
                } 
                arr_45 [i_1] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) * (((2667091374U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1])))))));
                var_34 += (+((-(((/* implicit */int) var_13)))));
                var_35 = ((/* implicit */unsigned long long int) arr_14 [i_10]);
                var_36 ^= ((/* implicit */unsigned short) (+(arr_22 [i_8])));
            }
            /* vectorizable */
            for (unsigned int i_13 = 2; i_13 < 22; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    for (unsigned int i_15 = 3; i_15 < 23; i_15 += 2) 
                    {
                        {
                            arr_56 [i_15] [i_15] = ((/* implicit */unsigned short) var_11);
                            arr_57 [i_15] = ((/* implicit */signed char) ((((9223372036854775807LL) <= (((/* implicit */long long int) 1850719210U)))) ? (((((/* implicit */_Bool) 5226008882597074193ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 1386382228U)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)6106)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    arr_60 [i_16] [2LL] [i_8] [i_1] = ((/* implicit */int) (-(arr_41 [i_1] [i_8] [i_1] [i_16])));
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((arr_27 [i_1] [i_13 + 3] [i_1]) <= (arr_27 [i_1] [i_13 + 1] [i_16]))))));
                    arr_61 [(signed char)3] [(signed char)3] [(unsigned char)0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_13 + 3] [i_13 + 2] [i_13 - 2]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        var_38 = ((/* implicit */long long int) arr_26 [i_1] [i_8]);
                        arr_65 [i_16] [i_8] [i_13] [i_16] [i_17] = ((/* implicit */short) -4724152761375125045LL);
                        var_39 = ((/* implicit */long long int) (((+(2228014865U))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 866828464))))))));
                    }
                    var_40 = ((/* implicit */_Bool) ((int) ((12088203506507019347ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                }
                var_41 = ((/* implicit */unsigned char) arr_26 [i_8] [i_13]);
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_71 [i_19] [i_19] [i_19] [i_18] [i_13] [i_8] [i_1] = arr_31 [i_8];
                            var_42 = ((/* implicit */unsigned long long int) 1473995918319717253LL);
                            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [2] [2] [2] [i_19]))) : (arr_22 [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) var_17))));
                        }
                    } 
                } 
            }
            for (int i_20 = 0; i_20 < 25; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    for (unsigned short i_22 = 1; i_22 < 23; i_22 += 2) 
                    {
                        {
                            var_44 ^= ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) 1778792459)) - (arr_77 [i_22 - 1] [i_22 + 1] [13] [i_22 + 1] [i_22 + 1])))));
                            var_45 = ((/* implicit */int) min((((((/* implicit */_Bool) (-(arr_78 [i_22] [i_22] [i_21] [i_8] [i_8] [10U])))) ? (((/* implicit */unsigned int) 1763340881)) : (1850719210U))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1] [i_22 - 1])))))));
                            var_46 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)22991)) : (((/* implicit */int) (short)16294))))) ? (arr_55 [i_22 + 1] [i_22] [2LL] [i_22 - 1] [2LL] [2LL] [i_22]) : (var_14)))), (arr_77 [i_1] [i_8] [i_8] [(_Bool)1] [i_22])));
                            var_47 = ((/* implicit */unsigned short) (-(var_17)));
                            var_48 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (short)27363)) << (((((/* implicit */int) (unsigned short)42544)) - (42541))))));
                        }
                    } 
                } 
                arr_81 [i_1] [i_1] [i_8] [i_1] = ((/* implicit */unsigned int) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                var_49 = (((-(arr_48 [i_1] [i_8] [i_20]))) / (((/* implicit */unsigned long long int) ((unsigned int) (signed char)127))));
                arr_82 [i_8] [i_20] = ((/* implicit */unsigned long long int) ((((var_18) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_20]))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-22))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (unsigned short)42544)))))))));
                var_50 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) (~(12820976377721138611ULL))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) ^ (var_9)))) ? (((-8042343125665846738LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (arr_29 [(unsigned char)16] [(unsigned short)21] [i_1])))));
            }
            var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) (short)0))));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 2) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 25; i_25 += 2) 
                {
                    {
                        var_52 -= ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) arr_21 [i_1])))));
                        var_53 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_14)) ? (arr_68 [i_1] [i_23] [i_24] [i_25]) : (arr_68 [i_1] [i_23] [i_24] [i_25])))));
                    }
                } 
            } 
            arr_91 [(unsigned short)12] [i_23] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) & (1850719210U)));
        }
        var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_83 [i_1] [i_1])) ? (1850719210U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)63)))))));
    }
}
