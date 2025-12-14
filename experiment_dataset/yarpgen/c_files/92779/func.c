/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92779
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
    var_19 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_8 [i_0] [(unsigned char)12] = ((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned short)52783)))), (((((/* implicit */_Bool) min((var_18), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) max(((unsigned short)63120), (var_2)))) : (((/* implicit */int) var_9))))));
                /* LoopSeq 4 */
                for (int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -492527136)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)12752)) : (((/* implicit */int) arr_4 [4]))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)50430), (((/* implicit */unsigned short) var_10))))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_12 [i_3 + 1] [i_0 - 1] [i_4 - 3]))))) && ((!(((/* implicit */_Bool) (unsigned short)12747))))));
                                var_22 = ((/* implicit */long long int) max((min(((~(((/* implicit */int) var_17)))), (((/* implicit */int) (signed char)16)))), (max(((+(((/* implicit */int) var_6)))), (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_16)) - (117)))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)15885)), (0)))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) arr_10 [i_2 - 1] [i_0] [i_0]))))))) && (((/* implicit */_Bool) arr_14 [i_2] [i_0 + 1] [i_2 - 1] [i_2] [11LL]))));
                }
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_24 |= ((/* implicit */short) ((((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned short)15873)))), (((((/* implicit */int) var_3)) >> (((var_15) + (7757728919027244465LL)))))))) % ((~((-(var_12)))))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_25 ^= ((unsigned char) ((((((/* implicit */int) var_13)) & (((/* implicit */int) var_9)))) & (((/* implicit */int) min(((unsigned short)9092), (((/* implicit */unsigned short) var_0)))))));
                        var_26 = ((/* implicit */long long int) min(((~(min((482612432210837616ULL), (((/* implicit */unsigned long long int) (unsigned short)63115)))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9104)) ? (((/* implicit */int) (unsigned short)23170)) : (var_1)))), (((((/* implicit */_Bool) var_4)) ? (arr_16 [(unsigned char)9] [i_1] [i_0]) : (var_18))))))));
                        var_27 = ((((/* implicit */_Bool) (+(min((18179248029184822856ULL), (((/* implicit */unsigned long long int) 0))))))) ? (((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1860879835U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))))) : (((/* implicit */unsigned int) -1462910803)));
                        var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 585461098U)) ? (974242891) : (((/* implicit */int) (unsigned short)52783))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_1] [i_0 - 4]))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))));
                        arr_24 [i_0] = var_2;
                        arr_25 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56425)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (unsigned short)18317))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) arr_16 [i_0] [(unsigned short)19] [i_0])) ? (((/* implicit */int) (signed char)111)) : (292810913)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) -2008478110);
                            var_31 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)(-32767 - 1)))))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [(unsigned char)20] [7U] [i_0 - 1])) : (((/* implicit */int) (unsigned short)0)))) < (((/* implicit */int) var_7)))))));
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                        for (signed char i_9 = 3; i_9 < 21; i_9 += 3) 
                        {
                            arr_34 [i_0 + 2] [i_0] [i_0] [16LL] [(short)9] [i_9] = ((/* implicit */signed char) (~(var_4)));
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)62)) ? (-1713136893) : (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0 + 2] [(unsigned short)1] [9] [16LL])))))))));
                            var_35 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)24428)) || (((/* implicit */_Bool) arr_28 [(short)8] [i_9] [i_9] [(unsigned short)19] [i_9] [i_0])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)56444))))) : (arr_15 [i_0] [i_0 - 1] [i_0 - 3] [i_0 - 3])));
                        }
                        for (unsigned char i_10 = 2; i_10 < 18; i_10 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned short) ((-9) / (((/* implicit */int) arr_35 [i_0] [(unsigned char)3] [i_5] [i_5] [i_5] [i_5]))));
                            var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_17))));
                            arr_38 [i_10] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_27 [17U] [i_1] [i_5] [i_0] [17U])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_1] [i_10])))))));
                        }
                        arr_39 [i_0] [i_5] [(signed char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 4])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 4])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 4]))));
                    }
                    var_38 = ((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) ((short) max((1462910799), (((/* implicit */int) var_9))))))));
                }
                for (int i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    var_39 = ((/* implicit */unsigned char) ((max(((+(721106749U))), (((unsigned int) 2968259394U)))) + (((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) 3573860527U))), (-1462910815))))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 742974064)) + (((((/* implicit */_Bool) var_14)) ? (arr_43 [i_0 - 1] [i_1] [i_1] [i_1] [i_0 - 1] [i_0]) : (arr_43 [i_0 - 1] [i_0 - 1] [i_11] [i_11] [i_13] [i_0])))));
                                arr_47 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 5655780748243146681ULL);
                                arr_48 [(_Bool)1] [(unsigned char)16] [(unsigned char)16] [i_0] [i_13] = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) -1430137314)) ? (6927676124757564207ULL) : (((/* implicit */unsigned long long int) 198800016)))), (((/* implicit */unsigned long long int) var_3))))));
                            }
                        } 
                    } 
                    var_41 = (unsigned short)56444;
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 20; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */_Bool) (unsigned char)246);
                                var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((unsigned char) ((short) ((((/* implicit */_Bool) 198799989)) ? (((/* implicit */int) (unsigned short)10556)) : (198800029))))))));
                            }
                        } 
                    } 
                }
                for (int i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_17 = 3; i_17 < 19; i_17 += 4) 
                    {
                        arr_58 [i_0] [i_0] [i_0] [(short)14] &= ((/* implicit */signed char) (+(max((((/* implicit */int) var_14)), ((-(((/* implicit */int) (unsigned short)45817))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned char) var_17);
                            var_45 = ((/* implicit */unsigned long long int) (signed char)15);
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_64 [i_0] [i_0] [(short)13] [i_17] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39078))) : (arr_29 [i_0 - 3] [i_1] [i_16]))));
                            arr_65 [21U] [21U] [i_16] [i_0] [i_19] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) ((short) 0)))), (((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_16] [19U] [i_19] [i_0 - 1])) ? (((/* implicit */int) arr_35 [i_0] [(unsigned char)12] [i_17 + 2] [15U] [i_17 - 3] [i_0 - 3])) : (((/* implicit */int) arr_35 [i_0] [i_0] [(signed char)14] [i_0] [i_19] [i_0 - 2]))))));
                            var_46 = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned short)32844))))));
                            arr_66 [i_1] [i_0] = ((/* implicit */signed char) (unsigned char)84);
                        }
                        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 3) 
                        {
                            arr_71 [i_0] [i_0] [i_16] [i_17 + 1] [i_17 + 1] [i_20] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 403204968)) ? (max((((/* implicit */long long int) (unsigned short)9093)), (-4664983185828665792LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56434))))), (((/* implicit */long long int) var_16))));
                            arr_72 [i_0] [i_1] [(short)4] [i_0] [i_20] = ((/* implicit */unsigned char) (~(((unsigned int) ((var_3) ? (((/* implicit */int) arr_52 [i_0] [i_1] [i_16])) : (((/* implicit */int) var_3)))))));
                        }
                        arr_73 [i_0 - 1] [18LL] [i_0] [(short)4] [i_17 + 1] = ((/* implicit */signed char) min((var_5), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (unsigned short)56434)) || (((/* implicit */_Bool) var_17)))))))));
                    }
                    for (long long int i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 3) /* same iter space */
                        {
                            arr_79 [i_22] [i_21] [i_0] [i_0] [17LL] [i_0 - 2] = ((/* implicit */short) min((1465991495U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((3563605536U) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : ((-(((/* implicit */int) var_10)))))))));
                            arr_80 [(unsigned short)18] [i_1] [i_0] [14ULL] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)26450)), (-198800019)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56412))) : (6027440241762881293LL))), (((/* implicit */long long int) (signed char)(-127 - 1)))));
                            arr_81 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((757370181), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) min((198800003), (((/* implicit */int) var_2))))) : (min((9377644685221853908ULL), (((/* implicit */unsigned long long int) (short)-16384)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9070)))));
                        }
                        for (unsigned short i_23 = 0; i_23 < 22; i_23 += 3) /* same iter space */
                        {
                            var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) max((max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_15))), (((/* implicit */long long int) var_0)))), (min((min((((/* implicit */long long int) (unsigned short)56412)), (6550081757738645225LL))), (((/* implicit */long long int) (+(198800003)))))))))));
                            arr_85 [i_0] [i_0] [(short)20] [i_21] [i_23] [i_21] = ((/* implicit */unsigned long long int) -3968428723688287796LL);
                            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32052)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned short)9061)))))) : (min((((/* implicit */long long int) max((1705299163U), (((/* implicit */unsigned int) arr_82 [i_0]))))), (((var_12) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32051)))))))));
                            var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) min((arr_44 [i_21] [6LL] [i_21] [i_21] [i_23]), (((/* implicit */unsigned int) 757370181)))))));
                        }
                        var_50 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_16] [i_21]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 1) 
                    {
                        arr_88 [i_0 + 1] [15LL] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_60 [i_24] [i_16] [i_16] [14] [(unsigned short)0] [(unsigned short)0] [i_0 + 2])) : (((/* implicit */int) var_11))))) ? (arr_19 [i_0] [(signed char)13] [i_0] [i_0]) : (((/* implicit */int) ((_Bool) var_3)))));
                        arr_89 [i_0] = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (unsigned short)60257)))));
                    }
                    for (unsigned short i_25 = 1; i_25 < 21; i_25 += 2) 
                    {
                        var_51 = (unsigned char)240;
                        var_52 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32052))) < (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 17657672101107775075ULL)) ? (arr_76 [(signed char)18] [i_16] [14U] [i_1] [14U] [i_1] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    }
                    arr_93 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)5736))))), (((unsigned long long int) (_Bool)0))))) ? ((-(min((((/* implicit */long long int) var_17)), (arr_68 [i_16] [i_1] [9LL] [(unsigned short)16] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    /* LoopNest 2 */
                    for (signed char i_26 = 0; i_26 < 22; i_26 += 3) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 22; i_27 += 1) 
                        {
                            {
                                var_53 = ((/* implicit */unsigned long long int) (signed char)-16);
                                arr_101 [i_16] [i_0] [i_16] [i_0] [(unsigned char)21] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((1855845280), (((/* implicit */int) (signed char)16))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_0] [1U] [(unsigned short)13] [(unsigned short)7]))) : (arr_16 [i_1] [i_26] [i_0]))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) 801239684U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))))));
                                var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_86 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3] [(unsigned char)6] [i_1]))))) ? (((/* implicit */int) (unsigned short)47274)) : (((/* implicit */int) ((unsigned short) arr_97 [i_0] [i_0 - 1] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_28 = 0; i_28 < 22; i_28 += 3) 
                    {
                        for (short i_29 = 0; i_29 < 22; i_29 += 2) 
                        {
                            {
                                var_55 = (-(((((((/* implicit */int) (unsigned short)47245)) / (((/* implicit */int) (signed char)7)))) + (((/* implicit */int) (signed char)-7)))));
                                var_56 = ((/* implicit */long long int) var_14);
                            }
                        } 
                    } 
                    var_57 = ((/* implicit */short) ((min((((/* implicit */long long int) var_10)), (var_12))) != (var_12)));
                }
                var_58 -= ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)251)), (min(((~(535747390))), (((/* implicit */int) ((unsigned short) (unsigned short)47245)))))));
            }
        } 
    } 
    var_59 |= ((/* implicit */long long int) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59289))) : (8495208568907220286LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 8213541890026849562ULL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)73))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_30 = 0; i_30 < 20; i_30 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_31 = 0; i_31 < 20; i_31 += 3) 
        {
            for (unsigned short i_32 = 0; i_32 < 20; i_32 += 1) 
            {
                for (int i_33 = 1; i_33 < 19; i_33 += 3) 
                {
                    {
                        var_60 = ((/* implicit */short) ((arr_78 [i_30] [i_31] [i_32] [i_32] [i_33] [i_33] [i_33 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        var_61 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)24))))) >> (((/* implicit */int) arr_22 [i_31] [i_33] [i_33] [i_33] [i_31]))));
                        var_62 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)8192)) == (((/* implicit */int) (unsigned char)244)))) ? (((/* implicit */int) ((8213541890026849561ULL) == (((/* implicit */unsigned long long int) var_12))))) : ((~(((/* implicit */int) (signed char)-43))))));
                        arr_120 [i_31] = ((/* implicit */unsigned long long int) var_3);
                    }
                } 
            } 
        } 
        arr_121 [i_30] = ((((/* implicit */_Bool) (unsigned short)992)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_109 [i_30])));
        var_63 = ((/* implicit */unsigned int) var_3);
    }
}
