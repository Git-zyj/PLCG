/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94846
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(arr_0 [2])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */int) max(((((~(var_1))) >> (((((/* implicit */int) arr_1 [i_0] [i_1])) - (31526))))), (((/* implicit */long long int) min(((~(((/* implicit */int) var_0)))), (max((((/* implicit */int) var_9)), (var_2))))))))) : (((/* implicit */int) max(((((~(var_1))) >> (((((((/* implicit */int) arr_1 [i_0] [i_1])) - (31526))) + (26209))))), (((/* implicit */long long int) min(((~(((/* implicit */int) var_0)))), (max((((/* implicit */int) var_9)), (var_2)))))))));
                                var_16 = min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))), (((1897841686220574115LL) >> (((((/* implicit */int) (short)10798)) - (10794))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)251)), (1897841686220574115LL)));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_2] [i_5])) == (((/* implicit */int) arr_5 [i_2] [i_5]))));
                        arr_21 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_2] [0U] [i_2])) ? (((/* implicit */long long int) arr_12 [i_0] [i_0] [(_Bool)1] [i_5] [i_5])) : (((arr_19 [i_0] [i_1] [i_0] [i_0]) ? (-1897841686220574116LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_2])))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775808ULL)) ? (1897841686220574116LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-70)))));
                            var_18 = ((/* implicit */unsigned char) (~((~(1897841686220574116LL)))));
                            var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_5]) : (arr_0 [i_0])));
                            arr_25 [i_0] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */short) -1897841686220574117LL);
                        }
                        for (short i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) ((signed char) var_5));
                            arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_5] [i_2] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (1897841686220574115LL)));
                            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((816506470473545237ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_5] [i_1] [i_2] [i_5] [i_7])))))) ? (arr_7 [i_7] [i_1] [i_1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [(short)0] [i_5] [6U] [i_5] [i_5] [i_7])))))));
                        }
                        for (short i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) arr_0 [i_0]);
                            var_23 -= ((/* implicit */short) ((arr_27 [i_0] [i_0] [i_8]) / (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_29 [i_8] [i_1] [i_1] [i_0])))))));
                            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)8))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(511U)))) ? (-1897841686220574117LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0]))))))));
                        }
                    }
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)-9667)) ? (arr_12 [i_0] [i_1] [i_2] [i_2] [i_9]) : (arr_12 [i_0] [i_0] [i_0] [i_2] [i_9])))));
                        arr_35 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        arr_39 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) | ((~(((((/* implicit */_Bool) var_12)) ? (1897841686220574115LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)20)), (15375158834690444841ULL))))));
                        var_27 *= ((/* implicit */unsigned int) var_1);
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_3 [i_10] [i_10]) ? (0U) : (var_4))) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)214))) : (arr_14 [i_0] [i_0] [i_2] [i_10] [i_10] [i_1]))) % (((/* implicit */unsigned int) arr_0 [i_1]))))) : (((((/* implicit */_Bool) (+(-1897841686220574127LL)))) ? (arr_7 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) (short)-30923)) : (1837345302)))))))))));
                    }
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])), (min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (0ULL)))))));
                        var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_27 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_11] [i_1])) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_1] [i_0] [i_11])) : (((/* implicit */int) arr_1 [i_11] [i_2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0]))) & (((unsigned long long int) -1897841686220574116LL))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) 
    {
        var_31 = (-(arr_42 [i_12] [i_12]));
        arr_46 [(short)6] = ((/* implicit */long long int) arr_44 [i_12]);
        /* LoopSeq 4 */
        for (unsigned short i_13 = 3; i_13 < 22; i_13 += 3) 
        {
            arr_51 [i_13 + 1] [i_13] = ((/* implicit */short) (~(((/* implicit */int) arr_48 [i_12] [i_13 + 1] [i_13 - 2]))));
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) 15375158834690444841ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2048))) : (0U)));
        }
        for (short i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2686659388U)) ? (((/* implicit */int) arr_54 [i_12] [i_12])) : (((/* implicit */int) (_Bool)1))));
                    var_35 = ((/* implicit */unsigned long long int) arr_52 [i_12] [i_12]);
                }
                arr_59 [i_12] [i_14] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_50 [i_12] [(signed char)9])) && (((/* implicit */_Bool) (unsigned short)60836)))) ? (((((/* implicit */_Bool) arr_48 [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_53 [(unsigned char)10])) : (((/* implicit */int) arr_58 [(unsigned short)15] [i_14] [(unsigned short)15] [(unsigned short)15] [i_14] [(unsigned short)15])))) : (((/* implicit */int) arr_58 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))));
            }
            arr_60 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) arr_52 [i_12] [i_12])) : (2048LL)))) ? (((arr_57 [i_14] [i_14] [i_14]) ? (-964293169) : (-964293169))) : (((/* implicit */int) ((short) var_4)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 2) 
            {
                arr_64 [i_17] [i_17] = ((/* implicit */unsigned long long int) arr_57 [i_12] [i_14] [i_17]);
                var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 134213632U)) ? (((/* implicit */int) arr_44 [i_17 + 1])) : (((/* implicit */int) (_Bool)1))));
            }
        }
        for (short i_18 = 0; i_18 < 23; i_18 += 2) /* same iter space */
        {
            arr_67 [i_18] [i_18] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_66 [i_12]))));
            arr_68 [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_18])) ? (((/* implicit */int) arr_66 [i_18])) : (((/* implicit */int) arr_66 [i_18]))));
        }
        for (short i_19 = 0; i_19 < 23; i_19 += 2) /* same iter space */
        {
            arr_73 [i_12] = ((/* implicit */long long int) (-(964293189)));
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 23; i_20 += 1) 
            {
                for (signed char i_21 = 4; i_21 < 19; i_21 += 3) 
                {
                    {
                        arr_79 [(signed char)22] [i_19] [(signed char)22] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_77 [i_12] [(unsigned short)1] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_78 [i_19] [i_19] [i_20] [i_19] [i_21 + 3] [i_20])));
                        var_37 = ((((/* implicit */_Bool) arr_58 [i_21 + 1] [i_21 + 3] [i_21 + 3] [i_21 + 3] [i_21 + 2] [i_21])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_58 [i_19] [i_21 - 4] [i_21] [i_21 - 4] [i_21 - 2] [i_21 - 2])));
                    }
                } 
            } 
            arr_80 [i_12] [i_12] [i_12] &= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-89)) < (((/* implicit */int) (_Bool)0))));
            /* LoopSeq 1 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_38 = ((/* implicit */short) (+(((/* implicit */int) ((short) var_2)))));
                var_39 = ((/* implicit */int) ((arr_45 [(signed char)17]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59406)) ? (((/* implicit */int) arr_57 [i_12] [i_19] [15ULL])) : (arr_61 [i_22] [i_19] [i_12] [i_12])))) : (var_10)));
                /* LoopSeq 3 */
                for (long long int i_23 = 0; i_23 < 23; i_23 += 1) /* same iter space */
                {
                    arr_86 [i_22] [i_19] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_74 [i_19] [i_19] [i_19]))));
                    /* LoopSeq 3 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        arr_89 [i_12] [i_12] [i_12] [i_22] [i_12] = ((/* implicit */signed char) (-((+(((/* implicit */int) (_Bool)1))))));
                        arr_90 [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_12] [i_23])) ? (((/* implicit */int) arr_58 [i_12] [i_19] [i_12] [i_22] [i_19] [i_12])) : (((/* implicit */int) var_3))));
                    }
                    for (short i_25 = 2; i_25 < 20; i_25 += 1) 
                    {
                        arr_93 [i_12] [i_12] [i_22] [i_12] [i_22] [i_19] = 1ULL;
                        arr_94 [i_12] [i_22] [i_12] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) (~(0ULL)))) ? (arr_84 [i_22] [i_25 - 1] [i_25] [i_25] [i_25 + 2] [10LL]) : (((/* implicit */int) (unsigned char)195))));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_78 [i_25 - 2] [i_25] [i_25] [i_25] [i_25 + 3] [i_25 - 1]) : (((/* implicit */unsigned long long int) arr_61 [0LL] [i_19] [0LL] [6ULL]))));
                        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) 4549581466631092054ULL)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 3994692669U)) : (0ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (int i_26 = 1; i_26 < 21; i_26 += 4) 
                    {
                        arr_97 [i_26] [i_22] [i_22] [i_23] [i_26] [i_22] [i_23] = ((/* implicit */unsigned char) arr_92 [i_12] [i_12] [i_12]);
                        var_42 -= ((/* implicit */unsigned char) 0ULL);
                        var_43 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_12] [i_26 - 1])) ? ((~(((/* implicit */int) arr_49 [i_12] [i_12] [i_22])))) : (((/* implicit */int) arr_48 [i_26 + 2] [i_26] [i_26 + 2]))));
                        var_44 *= ((/* implicit */short) (~(((/* implicit */int) (signed char)-120))));
                    }
                }
                for (long long int i_27 = 0; i_27 < 23; i_27 += 1) /* same iter space */
                {
                    arr_100 [i_22] [i_19] = ((/* implicit */unsigned int) (-(((arr_42 [11U] [i_27]) / (((/* implicit */int) arr_54 [i_12] [i_12]))))));
                    var_45 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_12] [i_19] [i_12] [i_27])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_12] [i_12] [i_22]))) : (18446744073709551615ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_12]))) * (1779511604U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))));
                    arr_101 [i_27] [i_22] [i_22] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_74 [i_12] [i_12] [i_27]))));
                    var_46 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_53 [i_19]))));
                    var_47 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)127)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -3478861405006386866LL))))));
                }
                for (long long int i_28 = 0; i_28 < 23; i_28 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_29 = 0; i_29 < 23; i_29 += 1) /* same iter space */
                    {
                        arr_109 [i_22] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)67))));
                        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)114)) || (((/* implicit */_Bool) 18446744073709551615ULL))));
                        var_49 = ((/* implicit */unsigned char) ((signed char) arr_44 [10U]));
                    }
                    for (unsigned char i_30 = 0; i_30 < 23; i_30 += 1) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_48 [i_12] [i_28] [i_19]))));
                        var_51 |= ((/* implicit */int) 1ULL);
                        var_52 = ((/* implicit */signed char) (_Bool)1);
                    }
                    for (unsigned char i_31 = 0; i_31 < 23; i_31 += 1) /* same iter space */
                    {
                        arr_117 [i_12] [i_19] [i_28] [i_12] [i_22] = (-(((/* implicit */int) (unsigned char)255)));
                        var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) ((((/* implicit */_Bool) (+(3406802522U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_116 [i_12] [i_12]))) : (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [8]))) : (arr_114 [(_Bool)1] [i_12] [(_Bool)1] [i_28] [i_12] [i_28]))))))));
                    }
                    var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_92 [i_12] [i_22] [i_28]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))));
                }
                var_55 += ((/* implicit */unsigned int) ((_Bool) arr_105 [i_12] [i_12] [i_12] [i_12] [i_12]));
            }
        }
        var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_71 [i_12] [i_12])) ? (arr_92 [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_102 [i_12] [i_12] [i_12] [i_12])))));
    }
    var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) ((var_9) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 18446744073709551588ULL)))))))));
    var_58 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4)))))));
    /* LoopNest 3 */
    for (short i_32 = 0; i_32 < 13; i_32 += 3) 
    {
        for (long long int i_33 = 1; i_33 < 11; i_33 += 1) 
        {
            for (unsigned short i_34 = 0; i_34 < 13; i_34 += 2) 
            {
                {
                    arr_126 [i_33] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) arr_111 [i_32] [i_33] [i_34] [i_33 + 2] [i_33 - 1])) : (arr_81 [i_34])))));
                    arr_127 [i_32] [i_32] = ((/* implicit */unsigned char) (short)2467);
                }
            } 
        } 
    } 
}
