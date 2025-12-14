/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87745
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
    var_12 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_10 [(unsigned short)2] [i_3] [14] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)65535))))))) : (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (1490063752U)))));
                            var_13 -= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [(unsigned short)7])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) (_Bool)0)))))) * (((var_2) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))));
                            /* LoopSeq 2 */
                            for (int i_4 = 1; i_4 < 22; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) max((var_3), (var_11)))))), ((~((~(((/* implicit */int) (unsigned short)20826))))))));
                                var_15 -= ((/* implicit */int) (((_Bool)0) ? (((arr_1 [i_4 + 1]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (arr_14 [14ULL] [i_3] [i_3] [i_2] [i_2] [i_3] [i_0])))))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 2; i_5 < 22; i_5 += 4) 
                            {
                                var_16 = ((/* implicit */long long int) (-(arr_1 [i_0 - 1])));
                                arr_18 [i_5] [i_0] [2] [(unsigned char)18] [i_0] [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))));
                                var_17 = ((/* implicit */unsigned long long int) (-(var_1)));
                            }
                            arr_19 [13] [7U] [i_0] [i_0] [i_2] [2U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((2050133529207255469ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) (((_Bool)1) ? (var_5) : (((/* implicit */int) (short)18254))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44727)) ? (arr_17 [21ULL] [i_2] [19LL] [(_Bool)1]) : (arr_17 [i_0] [20U] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6)))));
                        }
                    } 
                } 
                arr_20 [(unsigned char)21] [i_0] [i_1] = ((/* implicit */int) arr_9 [i_1] [i_1] [(short)6] [i_0] [(_Bool)1]);
                /* LoopSeq 3 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)18255)) & (((/* implicit */int) var_10))))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_6 - 1] [i_0])), (1405505827625661032ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_6 - 1] [i_0])) + (((/* implicit */int) arr_7 [i_6 - 1] [i_0])))))));
                                arr_27 [i_8] [i_7] [i_0] [i_0] [(unsigned short)1] [(signed char)0] = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_6])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))))) : (((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned char)175)), (0ULL))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) (unsigned char)31)), (arr_13 [(unsigned char)2] [i_8] [(unsigned char)2] [18U] [i_8])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 2496860620U)) : (18446744073709551615ULL)))) ? (((/* implicit */int) arr_12 [i_7] [i_7] [i_8])) : ((~(((/* implicit */int) (unsigned short)2749))))))))))));
                                var_20 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) * (min((((/* implicit */unsigned int) (short)-18255)), (arr_1 [5])))))) == ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_6] [i_7] [i_8]))) : (((((/* implicit */_Bool) arr_14 [i_0] [(unsigned char)12] [6] [i_6] [(_Bool)1] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54904))) : (arr_26 [7] [7] [i_6] [i_7] [2U])))))));
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_1] [i_0] [7U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((7570292901811998208ULL) << (((/* implicit */int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [13LL]))))))))) ? (min((((/* implicit */long long int) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18256))) : (var_0)))), (arr_13 [21ULL] [i_6] [(short)18] [(_Bool)1] [i_0]))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) (~(var_5))))))));
                    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [19ULL] [14LL] [i_1] [i_6])) ? (((/* implicit */int) arr_9 [(unsigned short)3] [i_0] [(_Bool)1] [i_1] [22ULL])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((arr_9 [8ULL] [(signed char)5] [i_1] [i_6] [19U]), (arr_9 [(signed char)0] [i_6] [(_Bool)1] [7LL] [(unsigned short)12])))) : (((/* implicit */int) max((arr_9 [i_6] [i_6] [i_1] [i_0] [(unsigned char)19]), (arr_9 [i_0] [i_1] [(unsigned char)11] [i_6] [18ULL]))))));
                }
                /* vectorizable */
                for (unsigned int i_9 = 1; i_9 < 19; i_9 += 3) /* same iter space */
                {
                    var_22 = ((unsigned int) ((10U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))));
                    var_23 = ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_0]));
                }
                /* vectorizable */
                for (unsigned int i_10 = 1; i_10 < 19; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 1; i_11 < 21; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))) & (arr_1 [(unsigned short)2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 4292728845U)))))) : (9223372036854775807LL)));
                        arr_36 [(unsigned short)4] [8U] [2U] [i_0] [(unsigned char)4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) | (((/* implicit */int) var_4)))) & (((((/* implicit */int) (unsigned char)227)) - (((/* implicit */int) (signed char)-31))))));
                        var_25 = ((/* implicit */unsigned short) ((arr_21 [i_0] [i_0] [i_0] [i_0 + 1]) & (((/* implicit */int) arr_4 [i_0]))));
                        var_26 = ((/* implicit */unsigned short) ((((4294967275U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))))) < ((~(4294967295U)))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_2 [i_0 - 1]) : ((-(((/* implicit */int) (unsigned char)187)))))))));
                    }
                    for (short i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        arr_39 [i_12] [(unsigned short)22] [i_12] |= ((/* implicit */unsigned int) arr_6 [i_12] [i_12] [(unsigned char)20]);
                        var_28 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_12] [i_10 - 1] [(unsigned short)4]))));
                        arr_40 [i_0] [i_0] = ((/* implicit */unsigned char) 5U);
                    }
                    var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [6ULL] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        for (int i_14 = 0; i_14 < 23; i_14 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)82)) - (((/* implicit */int) arr_12 [i_0] [(unsigned char)8] [i_13])))))));
                                arr_46 [i_0] [i_14] [(signed char)5] [i_13] [i_0] = ((/* implicit */unsigned int) (unsigned short)33022);
                                arr_47 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-9223372036854775806LL)))) : (var_6)));
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) -9223372036854775806LL))))) - (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)18244))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (var_9))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_0] [i_10])))))));
                        var_33 = ((/* implicit */_Bool) max((var_33), (((_Bool) ((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_10])) ? (((/* implicit */int) arr_4 [i_15])) : (((/* implicit */int) arr_4 [i_15])))))));
                        var_34 = ((/* implicit */unsigned char) ((_Bool) var_2));
                    }
                    for (unsigned char i_16 = 1; i_16 < 20; i_16 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            arr_56 [(unsigned short)8] [(_Bool)1] [i_10] [i_0] [(unsigned char)10] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) & (((/* implicit */int) arr_25 [(_Bool)1] [i_16] [1ULL] [i_1] [i_1] [8LL])))) ^ ((~(((/* implicit */int) (signed char)-108))))));
                            var_35 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_7)) >> (((-9223372036854775789LL) - (-9223372036854775796LL)))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned short) ((arr_11 [i_10] [i_10 + 3] [i_16 + 1] [i_0] [(unsigned char)19] [i_18]) == (((var_2) ? (((/* implicit */int) arr_35 [i_10])) : (((/* implicit */int) var_2))))));
                            arr_59 [i_0] [(unsigned short)9] [i_10] [(signed char)16] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1573094343)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */int) (unsigned char)174)) | (((/* implicit */int) (unsigned short)65535))))));
                            arr_60 [i_0] = ((/* implicit */signed char) ((unsigned char) ((arr_43 [(unsigned short)0] [5] [(unsigned short)17] [0] [i_1] [12U]) && (((/* implicit */_Bool) var_1)))));
                            var_37 = ((/* implicit */_Bool) ((arr_42 [i_0] [i_1] [i_1] [(unsigned short)14] [i_1]) ? (((/* implicit */int) arr_42 [i_0] [9U] [9ULL] [i_16] [2])) : (((/* implicit */int) arr_42 [i_0] [i_1] [i_10] [14U] [(unsigned char)3]))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_48 [i_0] [i_10 + 2] [i_0])) != (((/* implicit */int) arr_48 [i_0] [i_10 + 2] [i_0]))));
                            arr_64 [i_0] [8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)47)) / (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_8))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 3) 
                        {
                            var_39 *= ((/* implicit */unsigned short) ((arr_1 [i_16 + 2]) << ((((((_Bool)0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)255)))) - (235)))));
                            arr_67 [18] [i_20] &= ((/* implicit */_Bool) ((((var_1) / (((/* implicit */int) arr_25 [(unsigned short)21] [22] [i_10] [(unsigned char)8] [i_16] [i_20])))) % (((/* implicit */int) arr_42 [10] [i_10 + 2] [i_10] [i_10 + 4] [20LL]))));
                            arr_68 [i_20] [i_0] [i_10] [7] [i_0] [16U] = ((/* implicit */unsigned short) ((((/* implicit */int) ((3614322182U) != (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) - (arr_52 [1] [i_1] [9U] [i_16])));
                        }
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_71 [i_0] [11ULL] [i_0] [i_21] [i_21] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_22 = 0; i_22 < 23; i_22 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) : (((((/* implicit */_Bool) (unsigned char)191)) ? (969035677) : (((/* implicit */int) var_11))))));
                            arr_74 [4U] [i_0] [i_10] [(unsigned char)11] [i_0] [i_0] = ((/* implicit */short) var_8);
                            var_41 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -28758725)))) ? (((/* implicit */int) (unsigned short)27606)) : (((/* implicit */int) arr_4 [i_22]))));
                        }
                        for (unsigned char i_23 = 0; i_23 < 23; i_23 += 3) 
                        {
                            arr_78 [21U] [(unsigned short)0] [(unsigned char)4] [i_0] = ((/* implicit */signed char) ((int) ((unsigned short) var_6)));
                            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -413376585)) ? (4125545615004476660ULL) : (((/* implicit */unsigned long long int) 4294967283U))))) ? (((int) var_10)) : ((~(((/* implicit */int) (unsigned short)43453)))))))));
                            arr_79 [i_21] [i_21] [18U] [(unsigned char)4] [(unsigned short)8] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)174))))) & (arr_13 [i_0 + 1] [16ULL] [(unsigned short)11] [(unsigned char)1] [i_0])));
                        }
                        for (unsigned int i_24 = 3; i_24 < 20; i_24 += 4) 
                        {
                            var_43 &= ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_42 [(signed char)18] [8] [i_21] [i_21] [18LL])) << (((arr_81 [i_24] [10ULL] [i_24] [i_24]) - (2602265991U)))))));
                            arr_82 [i_0] [i_1] [(_Bool)1] [i_21] [i_0] [(unsigned short)8] = ((/* implicit */_Bool) var_8);
                            var_44 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_31 [(signed char)0] [20ULL]))));
                            arr_83 [i_24] [i_0] [(unsigned short)0] [i_0] [(unsigned short)17] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-39))));
                        }
                        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)172)))))));
                    }
                }
                var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13810937871485266590ULL)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33092)))));
                var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(unsigned short)20] [i_0] [(unsigned char)20] [(signed char)19]))) < (14U)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (var_6))))))) ? ((((_Bool)0) ? (((/* implicit */int) var_8)) : (((arr_48 [i_0] [18U] [16ULL]) ? (((/* implicit */int) (_Bool)1)) : (arr_52 [3] [17U] [i_1] [(signed char)18]))))) : ((~(((/* implicit */int) arr_76 [i_0] [i_1] [12U] [10] [i_1]))))));
            }
        } 
    } 
    var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (0U))))));
    var_49 = var_9;
}
