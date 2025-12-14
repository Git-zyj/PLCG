/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80018
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
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) (unsigned short)60825);
        var_12 ^= ((unsigned short) (-(arr_0 [(_Bool)1])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((arr_2 [i_1]) && (((/* implicit */_Bool) arr_5 [i_2]))));
            arr_10 [i_1] [i_1] [i_2] = (!(((/* implicit */_Bool) arr_4 [i_1])));
            var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)40))));
        }
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1])) ? ((-(((/* implicit */int) (unsigned char)93)))) : (((/* implicit */int) (signed char)62))));
            var_16 = (unsigned short)16;
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                for (signed char i_5 = 2; i_5 < 10; i_5 += 1) 
                {
                    {
                        arr_20 [i_1] [6U] [i_4 - 1] [i_5] = ((/* implicit */long long int) ((int) var_8));
                        arr_21 [i_1] [i_1] [i_4 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) || (((/* implicit */_Bool) var_2))));
                        var_17 = ((/* implicit */long long int) ((unsigned char) arr_1 [i_1] [i_1]));
                    }
                } 
            } 
            arr_22 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (signed char)-27)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                var_18 = ((/* implicit */unsigned long long int) var_8);
                arr_26 [i_1] [i_3] [i_1] [i_6] = (((((-(7082342496484691023LL))) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)1)));
            }
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                var_19 -= ((/* implicit */long long int) ((0ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20316)) ? (((/* implicit */int) (unsigned short)3027)) : (((/* implicit */int) arr_12 [(unsigned char)4] [i_7])))))));
                var_20 &= ((/* implicit */signed char) (~(var_7)));
                var_21 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_11 [i_1] [i_7]))));
                var_22 &= ((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (unsigned short)3012)))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned long long int) var_1);
                            arr_37 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) / (arr_15 [i_1] [i_1] [i_8])));
                            arr_38 [i_1] [i_3] [i_7] [i_1] [i_8] [i_8] [i_9] = ((/* implicit */_Bool) arr_17 [i_1] [i_1]);
                        }
                    } 
                } 
            }
            for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        arr_46 [i_1] = ((/* implicit */unsigned short) ((arr_32 [i_1] [i_3] [i_11] [i_12]) ? (((/* implicit */long long int) ((var_7) << (((var_3) - (3437137339281188607LL)))))) : (((((/* implicit */_Bool) (signed char)-95)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4649)))))));
                        var_24 *= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (signed char)39))) % (((/* implicit */int) ((short) 2251799813685247ULL)))));
                        var_25 *= ((/* implicit */short) var_0);
                        var_26 = ((/* implicit */short) var_2);
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_1] [i_3] [i_1])) == (((/* implicit */int) var_10))));
                    }
                    arr_47 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)29624)))) / (((unsigned long long int) arr_35 [i_11] [i_10] [i_1]))));
                    arr_48 [i_1] [i_1] [i_10] [i_11] = ((/* implicit */short) (unsigned char)99);
                    arr_49 [i_1] [i_10] [i_3] [i_1] = 1152921504606846960ULL;
                }
                for (unsigned char i_13 = 1; i_13 < 12; i_13 += 1) 
                {
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((long long int) ((arr_18 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) arr_0 [(_Bool)1])) : (var_5)))))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (short)-24536))))) ? (((/* implicit */int) arr_18 [i_1] [i_1])) : (((/* implicit */int) ((_Bool) (unsigned short)29623)))));
                    /* LoopSeq 4 */
                    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) var_1))));
                        var_31 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) arr_39 [i_3] [i_10] [i_13] [i_13]))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
                    {
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_10] [i_13 - 1])) ? (arr_29 [i_10] [i_3] [i_10] [i_13 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13971))))))));
                        var_33 ^= ((unsigned int) arr_39 [i_13] [i_13] [i_13] [i_13]);
                    }
                    for (unsigned char i_16 = 4; i_16 < 12; i_16 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned short) var_0);
                        arr_59 [(unsigned short)3] [(unsigned short)8] [(unsigned short)8] [i_1] [i_1] [i_16 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_10] [i_10] [i_13] [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_3] [i_10] [i_13 + 1] [i_16 - 3])))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_17]);
                        arr_62 [i_1] [i_17] [i_10] [i_17] [i_17] [6LL] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_28 [i_1] [(_Bool)0] [i_1] [i_1])))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_51 [i_3] [i_10] [i_3] [i_17]))))));
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) (unsigned short)13955))))))));
                        var_37 = ((/* implicit */unsigned int) arr_42 [i_1]);
                    }
                }
                var_38 = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) arr_30 [i_1] [i_3] [i_3] [i_10])))));
                arr_63 [i_1] [i_3] [i_10] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_55 [i_10] [i_3] [i_10] [i_1] [(unsigned short)9] [i_3]))));
            }
        }
        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_19 = 3; i_19 < 11; i_19 += 3) 
            {
                /* LoopSeq 4 */
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_21 = 0; i_21 < 13; i_21 += 4) 
                    {
                        arr_73 [i_1] [i_1] [i_19] [(short)11] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65527)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        var_39 = ((/* implicit */unsigned long long int) ((((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) < (((2511637448U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_40 = ((/* implicit */short) ((long long int) ((unsigned int) (unsigned short)13948)));
                    }
                    for (short i_22 = 1; i_22 < 12; i_22 += 1) 
                    {
                        arr_76 [i_22] [i_20 + 1] [i_1] [(unsigned short)9] [i_1] = ((/* implicit */unsigned long long int) arr_55 [(unsigned short)5] [i_19 - 1] [i_1] [i_1] [(unsigned short)10] [i_18]);
                        arr_77 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_28 [i_19 - 3] [i_20 + 1] [i_20 + 1] [i_22 - 1]);
                        arr_78 [i_1] [i_1] [i_19] [i_20] [i_22] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) >> (((var_5) - (14743235489564897830ULL)))))) + (var_3)));
                    }
                    var_41 = ((/* implicit */unsigned long long int) ((unsigned short) var_3));
                }
                for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 3) 
                {
                    var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (-(arr_7 [i_19 - 3]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 1; i_24 < 12; i_24 += 3) 
                    {
                        var_43 = ((/* implicit */long long int) ((((((/* implicit */int) arr_74 [i_1] [i_18] [i_18] [i_19] [i_23] [i_24])) | (((/* implicit */int) arr_19 [i_1] [i_18] [i_19 + 2] [i_23] [i_24 - 1])))) / (((/* implicit */int) (unsigned char)136))));
                        arr_84 [i_1] [i_1] [i_19] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)19490)))))));
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7932)) ? (((/* implicit */long long int) arr_40 [i_18] [i_19 + 1] [i_24 - 1])) : (var_3)));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 13; i_25 += 3) 
                    {
                        arr_88 [i_1] [i_18] [i_19] [i_23] [i_1] = ((/* implicit */unsigned char) ((unsigned short) arr_13 [i_1]));
                        var_45 += ((/* implicit */unsigned short) (+(((unsigned int) arr_65 [(unsigned short)0] [i_18]))));
                    }
                }
                for (unsigned char i_26 = 3; i_26 < 12; i_26 += 1) 
                {
                    var_46 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != ((+(arr_0 [i_1])))));
                    arr_93 [i_1] [i_1] [i_26 - 3] = ((/* implicit */unsigned short) arr_79 [i_1] [i_1] [i_19] [i_26] [i_1]);
                    /* LoopSeq 2 */
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) /* same iter space */
                    {
                        arr_96 [i_1] [i_26] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(var_0)))) % (arr_15 [i_1] [i_18] [i_1])));
                        arr_97 [i_1] [i_18] [i_19 + 2] [i_26] = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) arr_79 [i_1] [i_1] [i_19] [i_26] [i_27 - 1])))));
                        var_47 = ((/* implicit */long long int) var_0);
                        arr_98 [i_1] [i_18] [i_1] [8LL] [i_26] [i_27 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (var_7))))));
                    }
                    for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        var_48 = ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_1]))));
                        arr_101 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) 14296029261904461328ULL);
                        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 524287U)) ? (((/* implicit */int) arr_24 [i_1])) : (((/* implicit */int) arr_9 [i_26] [i_26 - 1]))));
                    }
                    arr_102 [i_1] [i_18] [i_18] [i_19 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_40 [i_1] [i_18] [i_19]))) || (((/* implicit */_Bool) var_8))));
                    arr_103 [i_1] [i_18] [i_19] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)13932);
                }
                for (signed char i_29 = 0; i_29 < 13; i_29 += 1) 
                {
                    arr_106 [i_1] [i_18] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_1]))))) ? (((/* implicit */int) arr_24 [i_1])) : (((/* implicit */int) (short)14497))));
                    var_50 *= ((/* implicit */unsigned long long int) arr_34 [i_18] [i_19] [5LL]);
                    var_51 = ((/* implicit */long long int) (unsigned short)51537);
                    /* LoopSeq 2 */
                    for (long long int i_30 = 3; i_30 < 10; i_30 += 3) 
                    {
                        arr_110 [i_1] = 524264U;
                        var_52 += ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)13947)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_31 = 2; i_31 < 12; i_31 += 1) 
                    {
                        arr_113 [i_31] [i_31] [i_1] [i_19 - 1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_17 [i_1] [i_1]);
                        arr_114 [i_18] [i_18] [i_19] [i_1] [i_31] = ((/* implicit */long long int) (unsigned short)51565);
                        var_53 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                        arr_115 [i_1] [i_18] [i_18] [i_18] [i_19 + 1] [i_29] [i_19 + 1] = ((/* implicit */unsigned short) var_4);
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_32 = 2; i_32 < 12; i_32 += 4) 
                {
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        {
                            arr_121 [i_1] [i_32] [i_19] |= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_29 [i_1] [i_18] [i_18] [i_33])) ? (((/* implicit */int) arr_14 [i_32])) : (((/* implicit */int) arr_30 [i_1] [i_19] [i_32] [i_33])))));
                            var_54 *= ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                    } 
                } 
            }
            for (unsigned int i_34 = 0; i_34 < 13; i_34 += 1) 
            {
                arr_126 [i_1] [i_1] [i_1] [i_18] = ((/* implicit */unsigned short) arr_65 [i_1] [i_18]);
                var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (arr_125 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51575))) : (((unsigned int) (unsigned char)111))));
            }
            for (unsigned char i_35 = 3; i_35 < 9; i_35 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_36 = 0; i_36 < 13; i_36 += 3) 
                {
                    for (int i_37 = 0; i_37 < 13; i_37 += 3) 
                    {
                        {
                            arr_135 [i_1] [i_1] [i_35] [i_36] [i_36] = ((/* implicit */long long int) (unsigned char)71);
                            var_56 = ((/* implicit */_Bool) arr_13 [i_1]);
                            var_57 = ((/* implicit */signed char) var_3);
                            var_58 = ((/* implicit */unsigned short) (signed char)-26);
                        }
                    } 
                } 
                var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_18]) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_1)))));
                var_60 = ((/* implicit */unsigned long long int) max((var_60), (arr_5 [i_1])));
                arr_136 [10U] |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
            }
            for (_Bool i_38 = 1; i_38 < 1; i_38 += 1) 
            {
                arr_140 [i_1] [i_1] [i_1] [i_38] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_66 [i_1])) : (((/* implicit */int) arr_105 [i_1] [i_18] [i_18] [i_1] [i_38 - 1]))))) % (arr_11 [i_1] [i_1])));
                var_61 = ((/* implicit */unsigned int) ((long long int) (unsigned char)159));
            }
            arr_141 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_18]))));
        }
        var_62 = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_81 [i_1] [i_1] [i_1] [i_1]))) | (arr_90 [i_1] [i_1] [i_1])))));
    }
    var_63 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) var_9))))) ? (var_3) : (((/* implicit */long long int) max((((/* implicit */int) var_2)), (var_9))))))));
    var_64 = ((/* implicit */short) ((unsigned char) var_9));
}
