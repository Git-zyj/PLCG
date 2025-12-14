/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9959
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3]))) <= (arr_2 [i_0]))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((arr_15 [i_4] [i_0] [i_3] [i_2] [6ULL] [i_0] [i_0]) ? (268435455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
                            var_21 -= ((/* implicit */unsigned int) arr_7 [i_4] [i_4] [i_4] [i_4]);
                            arr_17 [i_0] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(short)10] [i_0])) ? (arr_13 [i_0]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) arr_5 [i_3]))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_2] [i_2] [i_4] [i_3])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)44919))))));
                            var_22 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_0] [i_2] [8ULL] [i_4]))));
                        }
                        for (int i_5 = 3; i_5 < 9; i_5 += 4) 
                        {
                            arr_20 [i_0] [i_1] [i_3] [(signed char)0] = ((/* implicit */_Bool) (+(7673039922921045965LL)));
                            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((-512400254) >= (((/* implicit */int) var_5)))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_24 [i_3] [i_3] [6ULL] |= var_2;
                            arr_25 [i_2] [i_0] [i_2] [(short)4] [i_6] = ((/* implicit */int) arr_12 [i_0] [i_0] [1U] [i_0] [i_0] [i_0]);
                            var_24 = ((/* implicit */unsigned short) ((unsigned long long int) 3320228966U));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */long long int) 3173793575U);
                    }
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            arr_32 [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1121173721U)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((~(((/* implicit */int) arr_21 [i_0] [i_0] [i_2] [10U] [i_8] [i_8]))))));
                            var_25 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_28 [i_8])) || (((/* implicit */_Bool) 3173793558U)))) || (((_Bool) var_15))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (2414804031973062001ULL)));
                            arr_36 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_5 [i_0])) / (var_8))));
                            var_27 = ((/* implicit */int) (short)127);
                        }
                        var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)5426))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        arr_40 [i_0] [(signed char)11] = ((/* implicit */unsigned char) 2414804031973062001ULL);
                        arr_41 [i_1] [i_0] = ((/* implicit */signed char) arr_18 [i_0] [i_2] [i_1] [i_0]);
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            arr_44 [i_0] [3U] [3U] = ((((/* implicit */long long int) 3173793575U)) < (((long long int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_29 = ((/* implicit */_Bool) (short)32767);
                        }
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)20617))));
                            arr_47 [i_0] [i_2] [i_0] [i_12] = ((/* implicit */unsigned char) ((long long int) ((signed char) (unsigned char)80)));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_2] [8ULL])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)144))) & (127ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */long long int) arr_19 [(short)8] [i_2] [i_2] [(short)8] [(short)8] [i_10])) : (9223372036854775804LL))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 11; i_14 += 2) 
                        {
                            {
                                arr_53 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (unsigned short)65517)))));
                                arr_54 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-2147483647 - 1));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_15 = 1; i_15 < 8; i_15 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_15] [i_0] [i_15 + 4] [i_15 + 4] [i_15] [i_15 + 4] [i_15 + 4])) : (((/* implicit */int) ((_Bool) (short)-32763)))));
                        arr_57 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_15 + 1] [i_2] [i_0] [i_0] [(short)0] [i_0]))))) + (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) 
                        {
                            var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -9223372036854775804LL)))) != (974738331U)));
                            var_34 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-5419))));
                            arr_60 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_16] [i_15 + 2] [i_2] [i_0] [i_0])) ? (arr_13 [i_0]) : (33554430)))) || (((/* implicit */_Bool) arr_55 [i_0] [i_1] [i_2] [i_15 + 3] [i_16])));
                            var_35 = 4293918720U;
                            var_36 ^= ((/* implicit */short) arr_48 [(_Bool)1] [i_1] [i_2] [i_16]);
                        }
                        for (long long int i_17 = 2; i_17 < 8; i_17 += 3) 
                        {
                            arr_63 [i_0] [i_0] [i_0] [(signed char)11] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)250)))))));
                            var_37 -= ((/* implicit */_Bool) 776748941);
                        }
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                        var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_22 [i_0] [i_1] [i_1] [i_2] [i_1])))));
                    }
                }
            } 
        } 
        arr_64 [i_0] = -2147483629;
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 8; i_19 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        for (long long int i_21 = 0; i_21 < 12; i_21 += 3) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned char) (+((+(arr_28 [i_0])))));
                                var_41 = ((/* implicit */int) ((short) ((short) arr_55 [(short)9] [(_Bool)1] [3LL] [i_20] [i_21])));
                                var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [4LL] [i_18] [i_19 + 1] [i_20])) ? (((long long int) (short)14210)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 7924696018728139708ULL))))));
                                arr_74 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_20] [i_19 + 2]))) : (arr_22 [i_0] [i_18] [i_19] [i_20] [i_21])))) ? ((~(arr_2 [i_18]))) : (((/* implicit */unsigned int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        for (long long int i_23 = 0; i_23 < 12; i_23 += 4) 
                        {
                            {
                                arr_80 [i_0] [i_18] [i_18] [i_18] [i_19] [i_22] [i_23] = ((/* implicit */_Bool) arr_62 [i_0] [i_0] [i_18] [i_19 + 4] [i_19 + 4] [i_22] [(short)10]);
                                arr_81 [i_0] [i_0] [i_18] [i_19 + 1] [i_18] [(signed char)3] [i_23] = ((/* implicit */signed char) (unsigned short)49537);
                                arr_82 [i_0] [i_0] [i_19 + 4] [i_22] [i_23] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_37 [i_0] [i_18] [i_19 - 1] [i_19 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_24 = 0; i_24 < 20; i_24 += 3) 
    {
        for (unsigned int i_25 = 2; i_25 < 18; i_25 += 2) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 20; i_26 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_27 = 1; i_27 < 19; i_27 += 2) 
                    {
                        arr_93 [i_24] [i_24] = ((/* implicit */unsigned long long int) arr_90 [i_26] [i_26] [i_26]);
                        var_43 = ((/* implicit */unsigned long long int) ((arr_90 [i_24] [(short)1] [i_24]) == ((-(((/* implicit */int) arr_84 [i_27 + 1]))))));
                    }
                    for (unsigned short i_28 = 0; i_28 < 20; i_28 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                        {
                            arr_100 [i_29] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_83 [i_25] [i_24])) < (((/* implicit */int) arr_87 [2ULL] [i_25] [i_26]))))), (min((((/* implicit */long long int) (_Bool)1)), (arr_86 [(short)2] [i_29]))))), (((/* implicit */long long int) (((+(((/* implicit */int) arr_84 [i_24])))) + (arr_94 [i_24] [i_24] [i_26] [i_26] [i_28] [(short)2]))))));
                            arr_101 [i_28] [i_25 + 1] [i_25] [i_25 - 2] [i_25 + 1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) ((arr_98 [i_24] [i_24] [9ULL] [i_24] [i_24]) * (((/* implicit */unsigned long long int) -1124459043))))))));
                            arr_102 [i_24] [(_Bool)1] [i_29] = ((max((arr_94 [i_24] [i_25 + 1] [10ULL] [i_26] [i_24] [i_25 - 1]), (arr_94 [i_24] [i_25 + 1] [11LL] [i_28] [3] [i_25]))) >> (((min((-811575264427311524LL), (((/* implicit */long long int) arr_94 [i_25] [i_25 + 1] [i_24] [i_28] [i_29 - 1] [(_Bool)1])))) + (811575264427311529LL))));
                            arr_103 [i_24] [i_29] [i_26] [i_29] [i_24] = ((/* implicit */signed char) min((((arr_90 [i_25 - 1] [i_29 - 1] [(_Bool)1]) & (((/* implicit */int) ((signed char) 4293918692U))))), (((((-776748932) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned short i_30 = 0; i_30 < 20; i_30 += 2) 
                        {
                            var_44 = ((/* implicit */_Bool) arr_84 [i_24]);
                            arr_106 [i_24] [i_24] = ((/* implicit */unsigned char) ((signed char) ((unsigned int) (_Bool)1)));
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_104 [i_24] [i_24] [(signed char)9] [i_24] [(short)19])))))) ? (((((long long int) (unsigned char)254)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))))) : (((/* implicit */long long int) min((arr_99 [i_25 + 2] [i_25 - 1] [i_25 - 2] [i_25 + 2] [i_30]), (arr_99 [i_25 - 1] [i_25 + 2] [i_25 + 1] [i_25 - 2] [i_26]))))));
                            var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_3), (arr_86 [i_26] [i_30]))))))), (((((/* implicit */_Bool) (short)-32746)) ? (arr_86 [i_24] [i_24]) : (((/* implicit */long long int) ((arr_99 [i_24] [i_24] [i_24] [i_24] [i_26]) ^ (arr_95 [i_28] [(signed char)0] [i_28])))))))))));
                        }
                        var_47 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_92 [i_24] [i_25 - 1] [i_25 + 1] [19LL])))), (((((/* implicit */int) arr_92 [19U] [i_26] [i_25 + 1] [i_24])) + (((/* implicit */int) arr_83 [i_28] [i_25 - 1]))))));
                        arr_107 [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_19)) | (((/* implicit */int) var_15)))), (((/* implicit */int) (unsigned char)95))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_91 [i_24] [i_25] [i_26] [i_28] [i_24]))) : (max((arr_98 [i_25] [i_25] [i_25 - 2] [i_25 + 1] [i_25 + 2]), (((/* implicit */unsigned long long int) arr_83 [i_25] [i_24]))))));
                        arr_108 [i_28] [i_28] [(_Bool)1] [i_25] [i_24] = ((/* implicit */unsigned short) ((((long long int) (~(arr_98 [8U] [5U] [i_26] [i_26] [i_26])))) + (min((max((-1LL), (((/* implicit */long long int) 4051560534U)))), (((/* implicit */long long int) min((arr_90 [i_24] [i_25 + 2] [i_26]), (((/* implicit */int) (short)-32761)))))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        arr_112 [i_24] [i_25] [i_26] [i_31] [i_26] [i_31] = ((/* implicit */long long int) (~((~(arr_88 [i_25 + 2] [i_25 + 2] [i_25 + 2])))));
                        var_48 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_94 [i_24] [i_25] [i_25 - 1] [i_31] [i_26] [i_31]) != (arr_94 [i_24] [i_24] [i_25 - 1] [i_31] [i_31] [i_31]))))));
                    }
                    for (unsigned short i_32 = 1; i_32 < 19; i_32 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                        {
                            var_49 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)8191)), (arr_97 [i_32] [i_25 - 1] [i_24] [i_24] [i_32])))));
                            var_50 = ((/* implicit */unsigned long long int) arr_116 [i_32]);
                        }
                        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                        {
                            var_51 = ((/* implicit */signed char) (short)-8190);
                            var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) (short)-2972))));
                            var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_89 [i_25 + 1] [i_25 - 2] [i_25 + 2] [i_25 + 1]))) ? (((/* implicit */long long int) ((3618323148U) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_111 [i_34] [i_32 - 1] [12ULL] [12ULL]))))))) : (arr_118 [i_25] [i_25] [i_32] [i_34])));
                            arr_120 [i_32] [i_32] [(_Bool)1] [i_26] [i_32 - 1] [i_24] [i_24] = ((/* implicit */int) var_12);
                        }
                        var_54 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */int) arr_84 [i_24])) - (((/* implicit */int) (short)8176)))) / (((/* implicit */int) arr_89 [i_32 - 1] [(_Bool)1] [(signed char)1] [i_24]))))), (max((min((arr_118 [i_24] [i_24] [i_24] [i_24]), (((/* implicit */long long int) 2113791676)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_85 [i_24] [i_24])))))))));
                    }
                    for (signed char i_35 = 1; i_35 < 19; i_35 += 2) 
                    {
                        arr_125 [i_24] [i_24] [i_35] [i_35] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_121 [i_24] [i_24] [i_25] [i_26] [i_35])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)212))))) || (((/* implicit */_Bool) (unsigned short)0))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_94 [i_26] [i_25] [i_26] [i_35] [i_35] [(signed char)1])) ? (arr_99 [(signed char)14] [i_25 + 2] [i_26] [i_26] [i_35]) : (((/* implicit */int) var_2)))))));
                        var_55 += ((/* implicit */_Bool) ((unsigned long long int) (signed char)-98));
                        arr_126 [(unsigned short)19] [i_25] [i_25] [i_25 + 2] [i_25] [i_35] = ((/* implicit */unsigned long long int) arr_90 [i_25 + 1] [i_25 + 2] [i_25 + 2]);
                        arr_127 [i_24] [i_24] [i_35] [i_25] [i_26] [i_35] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 676644138U)) ? (761364817U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115)))))) && ((!(((/* implicit */_Bool) arr_86 [i_25] [i_25 - 1]))))));
                    }
                }
            } 
        } 
    } 
}
