/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6950
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                    {
                        arr_9 [i_0] [i_2] [i_2] [(unsigned char)4] = ((/* implicit */unsigned long long int) 4084482707200417106LL);
                        var_14 *= ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */_Bool) (short)-26630)) ? (((/* implicit */long long int) ((/* implicit */int) (short)26082))) : (arr_3 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (-1711057359582763330LL)));
                        arr_10 [i_2] [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -489346151)) | (44785205U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) arr_8 [i_1] [(signed char)15] [i_3]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_2 - 1] [i_1] [(unsigned short)6] [i_2]))))) : (((((/* implicit */_Bool) 44785217U)) ? (var_2) : ((~(44785191U))))));
                        arr_11 [i_2] [i_1] [i_1] [i_3] [i_2] [10LL] = ((/* implicit */int) var_12);
                    }
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) -227080436)) == (-8553991130315104972LL))))));
                        arr_15 [i_0] [i_1] [4U] [i_2] = ((/* implicit */long long int) (+(var_6)));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        arr_18 [i_2] = ((/* implicit */int) ((unsigned short) (+(var_10))));
                        /* LoopSeq 3 */
                        for (int i_6 = 1; i_6 < 15; i_6 += 1) 
                        {
                            arr_22 [(short)7] [(short)7] [i_2] [i_2] [i_6] = ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_0))));
                            var_17 = ((/* implicit */signed char) var_0);
                        }
                        for (unsigned int i_7 = 3; i_7 < 17; i_7 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) arr_6 [i_2]);
                            var_19 ^= ((/* implicit */unsigned char) -4739057753578389792LL);
                            var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (2451640023U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232)))));
                            var_21 ^= ((/* implicit */int) arr_6 [i_0]);
                        }
                        for (unsigned int i_8 = 3; i_8 < 17; i_8 += 1) /* same iter space */
                        {
                            var_22 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_12)))) * (((((/* implicit */_Bool) (unsigned short)15699)) ? (2451640018U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_23 *= ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_13 [(signed char)9] [(_Bool)1] [i_2] [14])))) * ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5] [i_8]))) : (arr_26 [i_5]))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)254)) ? (1843327272U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31127))))))));
                        }
                    }
                    arr_30 [i_2] [i_2] = ((/* implicit */short) arr_0 [i_0]);
                    arr_31 [i_0 - 2] [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((short) var_7)), ((short)-24225))))));
                }
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_10 = 3; i_10 < 15; i_10 += 1) 
                    {
                        var_25 ^= ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) -1586413361922550425LL)) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) 2451640018U)) : ((-9223372036854775807LL - 1LL)))) : (-1196610378780321351LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                        arr_38 [i_0 + 2] [i_1] [i_10] [i_10 + 1] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) (short)22265)) || (((/* implicit */_Bool) ((int) arr_24 [i_0] [i_1] [i_9] [i_10] [i_10])))));
                        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (-1196610378780321351LL)))) ? ((~(2181689710U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (_Bool)1)))))))) << (((((((/* implicit */_Bool) 398731206272800677LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))) + (14)))));
                        var_27 = ((/* implicit */long long int) min((var_27), (arr_26 [i_0 + 1])));
                    }
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_12 = 3; i_12 < 15; i_12 += 4) 
                        {
                            arr_44 [i_12] [(short)2] [i_9] [10LL] [i_0] = ((/* implicit */unsigned char) -8721307703497776376LL);
                            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1] [(_Bool)1] [i_11]))) : (var_10)))) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) -8721307703497776376LL)) ? (var_2) : (((/* implicit */unsigned int) var_11))))));
                            arr_45 [i_11] [i_1] [i_9] [i_11] = (short)(-32767 - 1);
                        }
                        var_29 = min((((/* implicit */unsigned int) ((_Bool) var_6))), (((unsigned int) arr_20 [i_9] [(short)10] [(_Bool)1] [i_0 + 1] [i_11] [i_9] [i_9])));
                    }
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        arr_48 [(unsigned short)16] [i_9] [17LL] [14ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_47 [i_0 - 1]))));
                        var_30 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_13])) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)15]))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-41)), (arr_42 [i_0] [i_9] [i_1] [2] [i_0])))) ? (((/* implicit */unsigned int) arr_46 [i_0 - 1] [i_0 + 2] [i_0 - 2] [i_0 - 2])) : (min((var_2), (((/* implicit */unsigned int) arr_43 [i_13] [i_9] [9U] [i_9] [i_1] [14LL]))))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-16595)) : (-666210334)));
                        var_32 &= ((/* implicit */int) ((unsigned short) arr_5 [i_0 - 2]));
                    }
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */short) 9223372036854775807LL);
                        var_34 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)44))) / (-5554105636268913932LL)))) ? (-1565301555) : (((int) (unsigned short)14834)))), (((/* implicit */int) ((unsigned char) var_1)))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned short) arr_47 [(unsigned char)10]);
                        arr_55 [i_1] = ((/* implicit */_Bool) (((_Bool)0) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        arr_56 [i_0] [i_1] [(short)16] [(unsigned short)5] = ((/* implicit */long long int) ((short) (~(18446744073709551598ULL))));
                        arr_57 [(_Bool)1] [i_0] [i_1] [(short)1] [i_9] [i_15] = ((/* implicit */int) arr_39 [i_0] [i_1]);
                        arr_58 [i_0] [i_1] [i_1] [i_15] [i_15] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) var_0))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [(short)12])) ? (((/* implicit */long long int) arr_21 [i_16])) : (arr_40 [i_16] [i_9] [(unsigned short)14] [(unsigned short)13])));
                        arr_61 [i_16] [i_9] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((arr_8 [i_0] [i_0 - 1] [i_0 - 1]) + (2147483647))) >> (((arr_8 [i_0] [i_0 + 2] [(_Bool)1]) + (920772575)))));
                        var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) -5733203199563855791LL)) && (((/* implicit */_Bool) (short)26890)))))));
                        arr_62 [i_1] = ((/* implicit */short) ((var_6) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0 - 1] [i_16])))))));
                        arr_63 [i_0] [i_0] [i_1] [i_1] [i_9] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_0] [i_0 + 1])) ? (arr_39 [i_9] [i_0 + 2]) : (arr_39 [i_0] [i_0 - 1])));
                    }
                    var_38 = min((var_11), (((/* implicit */int) max((arr_53 [i_0] [i_0 - 1] [i_9] [i_9]), (min((arr_7 [i_9] [i_9] [i_9] [i_1]), (((/* implicit */unsigned char) (signed char)80))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_17 = 3; i_17 < 16; i_17 += 1) 
                    {
                        var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)4555))))) ? (var_12) : (((/* implicit */long long int) var_9))));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_0] [i_1] [i_9] [i_0 + 1] [i_17 - 3])) * (((((/* implicit */int) var_0)) / (642624213)))));
                        arr_66 [i_17] [i_9] [i_1] [i_17] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [(unsigned short)16])))))));
                    }
                }
                for (unsigned char i_18 = 4; i_18 < 17; i_18 += 4) 
                {
                    arr_69 [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)204), (((/* implicit */unsigned char) arr_20 [i_0] [i_1] [i_18 - 1] [i_1] [i_0 - 2] [i_0 - 2] [i_0 - 2]))))) ? ((+(((/* implicit */int) arr_20 [(_Bool)1] [i_1] [i_18 - 2] [i_1] [(unsigned short)16] [2ULL] [i_0 - 1])))) : (((((var_9) + (2147483647))) << (((619301482U) - (619301482U)))))));
                    arr_70 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_39 [i_0] [i_0]);
                    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) arr_67 [i_18 + 1] [i_1] [i_0 + 1]))) & (var_12))), (((/* implicit */long long int) ((((((((/* implicit */int) arr_17 [i_0] [i_1] [i_18] [(short)11])) ^ (var_11))) + (2147483647))) << (((((((/* implicit */_Bool) arr_54 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_1] [(_Bool)1] [i_1] [i_1] [0LL] [i_1] [(_Bool)1])))) - (22082)))))))))));
                    var_42 = ((/* implicit */int) var_6);
                }
                /* vectorizable */
                for (long long int i_19 = 0; i_19 < 18; i_19 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_21 = 1; i_21 < 16; i_21 += 4) 
                        {
                            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_11))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0 + 2] [i_20]))) : ((+(arr_13 [i_0] [i_1] [i_19] [i_20])))));
                        }
                        for (short i_22 = 4; i_22 < 16; i_22 += 2) 
                        {
                            arr_83 [i_20] [i_20] [8U] [i_20] [i_20] = ((/* implicit */short) ((unsigned int) (unsigned char)9));
                            var_45 = ((/* implicit */unsigned char) 9223372036854775807LL);
                            arr_84 [i_0] [i_1] [i_20] = ((/* implicit */_Bool) var_13);
                            arr_85 [i_0] [i_1] [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)182))))) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_0] [i_1] [i_19] [12]))) : (arr_68 [i_0] [i_1] [i_1] [i_22])))));
                            arr_86 [i_0] [i_1] [i_0] [i_20] [i_1] [i_22 - 4] [i_20] = ((((/* implicit */_Bool) arr_80 [i_22] [i_22] [i_20] [i_20] [i_0 - 1] [i_0])) ? (((/* implicit */long long int) var_11)) : (arr_80 [(short)1] [i_22] [i_20] [i_20] [i_0 - 2] [i_0]));
                        }
                        var_46 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_19] [(short)8] [(short)6]))) : (26728010U))));
                        arr_87 [i_20] [i_19] [i_0] [i_20] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_20])) ? (((/* implicit */long long int) var_4)) : (arr_3 [i_1])))) - (arr_72 [(short)14] [i_1] [i_20])));
                        var_47 = ((/* implicit */short) var_5);
                    }
                    for (long long int i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) ((_Bool) arr_24 [i_0 + 2] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                        arr_90 [i_0] [i_23] [i_19] = ((/* implicit */long long int) (~(((/* implicit */int) arr_54 [i_0 + 2]))));
                        arr_91 [i_0] [i_23] [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_0] [i_0])) - (((/* implicit */int) var_0))));
                        var_49 = ((/* implicit */int) ((arr_29 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 2]) ? (arr_42 [i_0 + 2] [i_1] [(signed char)5] [i_23] [i_0 + 1]) : (((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) (short)671))))))));
                    }
                    arr_92 [(unsigned char)7] [i_1] = ((/* implicit */unsigned long long int) (short)-23524);
                    var_50 = ((/* implicit */long long int) ((unsigned int) arr_77 [i_0 + 2] [i_1] [i_1] [12LL]));
                }
                arr_93 [(unsigned short)0] |= ((/* implicit */short) arr_39 [i_0] [(unsigned char)12]);
            }
        } 
    } 
    var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_8)) ? (var_4) : ((+(var_4)))))));
    /* LoopSeq 2 */
    for (int i_24 = 0; i_24 < 11; i_24 += 2) 
    {
        /* LoopNest 2 */
        for (short i_25 = 0; i_25 < 11; i_25 += 1) 
        {
            for (int i_26 = 4; i_26 < 7; i_26 += 4) 
            {
                {
                    arr_100 [i_24] [i_25] [i_24] [i_24] = ((/* implicit */int) ((unsigned short) ((((((/* implicit */int) (short)-23524)) + (2147483647))) << (((((/* implicit */int) arr_23 [i_26] [i_26 - 1])) - (1))))));
                    /* LoopSeq 2 */
                    for (short i_27 = 0; i_27 < 11; i_27 += 1) 
                    {
                        arr_105 [i_26 - 1] [(short)9] = ((/* implicit */unsigned short) var_8);
                        var_52 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((signed char) 726296667))) ? (arr_51 [i_27] [i_26] [i_25] [i_25] [i_24] [i_24]) : (((/* implicit */long long int) min((var_11), (((/* implicit */int) var_0)))))))));
                        var_53 = (((+(((/* implicit */int) arr_76 [i_27] [i_26 - 1] [i_25] [i_24])))) << (((((/* implicit */int) ((unsigned short) var_12))) - (37778))));
                        arr_106 [i_24] [1] [i_24] [i_24] = ((/* implicit */unsigned int) (+(max((-8024131725629553977LL), (((/* implicit */long long int) ((_Bool) var_7)))))));
                    }
                    for (int i_28 = 1; i_28 < 10; i_28 += 4) 
                    {
                        arr_111 [i_28] [i_25] [i_26] [i_28] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */int) arr_28 [(short)3] [i_28])) / (((/* implicit */int) (short)6927)))) : (((int) arr_68 [i_28] [i_28 - 1] [i_28 - 1] [i_28]))))), (arr_73 [i_24] [i_26])));
                        arr_112 [i_28] [i_25] [i_28] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)40)))))) ? ((~(arr_47 [i_26 - 3]))) : (((((/* implicit */_Bool) (unsigned short)17478)) ? (((/* implicit */int) var_3)) : (arr_47 [i_26 + 2])))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_29 = 0; i_29 < 11; i_29 += 2) 
        {
            for (int i_30 = 0; i_30 < 11; i_30 += 4) 
            {
                {
                    var_54 = ((/* implicit */long long int) max((var_54), (arr_108 [i_24] [i_24] [i_30] [i_29] [(unsigned char)4])));
                    arr_119 [10LL] [i_29] [(_Bool)1] = ((/* implicit */unsigned char) var_4);
                    var_55 ^= ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 1901268167)) ? (((/* implicit */int) (short)23523)) : (1901268167))) : ((-(((/* implicit */int) (short)9565)))))) : (((((/* implicit */int) arr_94 [i_24] [(short)0])) / (((/* implicit */int) arr_94 [i_24] [i_29])))));
                    var_56 = ((/* implicit */int) var_1);
                    var_57 = ((/* implicit */int) (unsigned char)197);
                }
            } 
        } 
        arr_120 [i_24] = ((/* implicit */_Bool) var_5);
    }
    for (int i_31 = 0; i_31 < 12; i_31 += 1) 
    {
        arr_123 [i_31] [i_31] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((-1), (((/* implicit */int) ((8388607ULL) >= (((/* implicit */unsigned long long int) 8024131725629553976LL))))))))));
        var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) max((((/* implicit */long long int) ((unsigned short) (unsigned char)208))), (((((/* implicit */_Bool) arr_122 [i_31])) ? (2714739635899422084LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned char)2]))))))))));
    }
}
