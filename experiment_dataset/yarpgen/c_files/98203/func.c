/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98203
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
    var_18 |= ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)2)), (arr_8 [i_0] [i_2] [i_3] [i_1])))) && (((/* implicit */_Bool) var_6))))));
                            arr_9 [i_3] [i_3] [7U] [15ULL] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_2])) == (min((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_6 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((_Bool) 1422679296)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_15 [i_1] [i_1] [i_0] [i_1] [i_1] [(unsigned char)14] = min((((/* implicit */int) (short)-19525)), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned short) 1422679296))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)41)))))));
                            arr_16 [i_0] = ((/* implicit */int) max((arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1]), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_6 = 4; i_6 < 17; i_6 += 2) 
                {
                    arr_19 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((signed char) (signed char)31));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(arr_7 [i_6 - 4] [7] [i_6 - 3] [7]))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                            {
                                var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9] [i_1] [i_7 - 1])) ? (((((/* implicit */int) (signed char)-62)) ^ (((/* implicit */int) (unsigned char)125)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-62)), ((unsigned char)151))))))) ? (min((((/* implicit */unsigned int) ((signed char) var_16))), (((unsigned int) var_0)))) : (min((((/* implicit */unsigned int) var_9)), (arr_3 [i_7 - 1])))));
                                arr_29 [i_9] [i_0] [i_8] [i_7] [i_7] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) ((signed char) (signed char)74))) <= (((((/* implicit */_Bool) (short)1410)) ? (var_10) : (((/* implicit */int) (unsigned short)11062))))))), (1422679296)));
                                arr_30 [(signed char)1] [i_0] [i_9] [i_8] [i_9] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) var_6)))));
                                arr_31 [i_0] [i_1] [i_7] [i_8] [i_1] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (signed char)-6)) ^ (((/* implicit */int) ((unsigned short) (unsigned short)57744))))));
                            }
                            var_23 = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (unsigned char)136)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_10 = 2; i_10 < 16; i_10 += 3) 
                {
                    var_24 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_0] [i_1] [i_1])) - (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_0)));
                    arr_34 [i_0] = ((/* implicit */unsigned short) (unsigned char)244);
                    /* LoopSeq 1 */
                    for (signed char i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 1; i_12 < 16; i_12 += 2) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (853825424)));
                            var_26 = ((/* implicit */unsigned char) ((arr_35 [i_12 + 2] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 + 2]) ^ (((/* implicit */int) ((unsigned char) var_10)))));
                            arr_39 [i_0] [i_1] [(signed char)5] [i_12] [i_0] = ((/* implicit */int) var_9);
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((unsigned long long int) var_12))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 2; i_13 < 16; i_13 += 2) 
                        {
                            arr_44 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_11 [i_13 + 2] [i_10] [i_10])) ? (-515706880) : (((/* implicit */int) arr_11 [i_13 + 1] [(signed char)15] [i_13])));
                            arr_45 [(signed char)0] [i_0] [i_10] [i_10 - 1] = (((((-(((/* implicit */int) (unsigned char)21)))) + (2147483647))) << (((((((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))) + (43))) - (8))));
                            arr_46 [i_0] [i_0] [i_11] [i_0] [i_10 - 2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)153)))) ? (((/* implicit */int) ((unsigned char) (signed char)-7))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)243)) : (-515706867)))));
                        }
                        arr_47 [i_0] [i_1] [i_10] = ((/* implicit */unsigned short) ((-135381251) / (-646496591)));
                        var_28 |= ((/* implicit */unsigned char) ((int) ((unsigned short) arr_28 [(_Bool)1] [10U] [i_10 + 2] [(unsigned char)10] [10U] [(unsigned char)10])));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 1; i_14 < 17; i_14 += 3) 
                    {
                        for (signed char i_15 = 2; i_15 < 17; i_15 += 1) 
                        {
                            {
                                arr_52 [i_0] [i_14] [i_15 - 2] [i_0] [i_14] = ((/* implicit */unsigned int) arr_51 [i_0] [i_0] [i_14] [5] [i_0]);
                                var_29 = ((/* implicit */unsigned short) 646496589);
                                arr_53 [i_0] [i_0] [i_10] [i_14 + 1] [8] = ((/* implicit */signed char) (unsigned short)55675);
                                arr_54 [i_0] [i_1] [8] [i_14] [i_15] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_10] [i_10] [i_14] [i_14]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_30 = (unsigned char)242;
    /* LoopNest 2 */
    for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
    {
        for (int i_17 = 0; i_17 < 22; i_17 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        for (short i_20 = 0; i_20 < 22; i_20 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))) ^ (arr_55 [i_19]))));
                                arr_67 [i_17] [i_19] [(signed char)13] [i_17] [i_17] = ((/* implicit */unsigned char) max((((unsigned int) var_15)), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 12923342628514483425ULL)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_16] [i_16] [i_16] [i_16] [i_16]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))))))));
                            }
                        } 
                    } 
                    var_32 ^= ((/* implicit */unsigned char) arr_66 [i_16] [i_17] [i_18] [i_18] [i_18]);
                }
                for (signed char i_21 = 3; i_21 < 21; i_21 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_22 = 2; i_22 < 21; i_22 += 1) 
                    {
                        for (unsigned int i_23 = 1; i_23 < 21; i_23 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (signed char)62))));
                                arr_76 [i_21 - 2] [i_17] [i_21 - 2] [(signed char)20] [i_21] = ((/* implicit */unsigned char) ((unsigned int) arr_59 [i_21 + 1] [i_21]));
                            }
                        } 
                    } 
                    var_34 |= ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))), (((((((/* implicit */_Bool) -1255955772)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_16] [i_17] [i_21] [i_21]))) : (1022579935U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)245)), (3814162493922035583ULL))))));
                }
                for (unsigned int i_24 = 2; i_24 < 20; i_24 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_25 = 0; i_25 < 22; i_25 += 4) 
                    {
                        for (signed char i_26 = 2; i_26 < 18; i_26 += 1) 
                        {
                            {
                                arr_85 [i_16] [i_17] [i_24] [i_25] [i_17] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_74 [(signed char)16] [i_16] [i_16] [i_24 + 1] [8ULL] [i_16] [i_25]))))) ? (((((/* implicit */int) arr_74 [i_24] [i_24] [i_24] [i_24 - 2] [i_24] [i_25] [i_25])) * (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_74 [i_17] [i_17] [i_17] [i_24 + 1] [i_24 + 1] [i_25] [i_25])) ? (((/* implicit */int) arr_74 [i_24 + 1] [i_24] [i_24 + 1] [i_24 + 1] [i_26 + 4] [i_16] [i_26])) : (((/* implicit */int) arr_74 [(_Bool)1] [i_17] [i_24] [i_24 + 1] [i_26 + 4] [i_16] [i_26]))))));
                                arr_86 [i_16] [i_17] [i_17] [i_17] [0] [i_17] = ((((/* implicit */unsigned long long int) ((var_11) | (((/* implicit */int) (_Bool)1))))) & (min((17405591882222104756ULL), (((/* implicit */unsigned long long int) -1422679303)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_27 = 2; i_27 < 20; i_27 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_28 = 0; i_28 < 22; i_28 += 3) 
                        {
                            var_36 = (signed char)-35;
                            var_37 = (unsigned char)160;
                            var_38 = ((/* implicit */signed char) arr_60 [i_17] [i_17] [i_27] [i_28]);
                        }
                        for (unsigned char i_29 = 0; i_29 < 22; i_29 += 1) 
                        {
                            var_39 *= ((/* implicit */unsigned int) 1422679296);
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) 60337903))));
                            var_41 = ((/* implicit */int) ((unsigned char) min((arr_75 [i_27] [i_27 + 1] [i_27] [i_27] [(signed char)10]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))))))));
                        }
                        for (unsigned int i_30 = 1; i_30 < 19; i_30 += 4) 
                        {
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1422679290)) * (((unsigned int) var_2))));
                            var_43 = (unsigned char)1;
                            var_44 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_12)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1555828608)) ? (arr_62 [i_16]) : (-515706909))))))) : (((/* implicit */int) ((arr_73 [i_27] [i_27 - 1] [i_27] [8U] [i_27 + 1]) != (-515706880))))));
                        }
                        var_45 = ((/* implicit */unsigned char) ((((var_4) + (1422679296))) - (((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)50)) - (((/* implicit */int) var_13))))))));
                        /* LoopSeq 1 */
                        for (int i_31 = 1; i_31 < 21; i_31 += 1) 
                        {
                            var_46 = ((/* implicit */unsigned short) min((min(((short)27518), (((/* implicit */short) ((signed char) var_13))))), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) arr_56 [i_24])) : (-515706880)))))))));
                            arr_98 [i_17] [i_17] [(unsigned char)19] [i_27] = ((/* implicit */int) arr_93 [i_16] [i_17] [(signed char)6] [i_27 + 1] [i_31]);
                            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((signed char)72), (var_13)))))))));
                            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) var_9))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_32 = 0; i_32 < 22; i_32 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_33 = 0; i_33 < 22; i_33 += 2) 
                        {
                            arr_104 [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7078))) : (1130047089U))))));
                            arr_105 [i_17] = ((/* implicit */short) ((1130047084U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_101 [i_16] [(signed char)15] [(short)5] [i_32] [i_17] [i_24 - 1])))));
                        }
                        for (short i_34 = 2; i_34 < 19; i_34 += 1) 
                        {
                            arr_109 [i_17] = ((/* implicit */unsigned short) ((signed char) 2147483647));
                            arr_110 [i_17] [i_32] [i_32] [(signed char)0] [(unsigned short)17] [i_32] [i_32] = var_6;
                            arr_111 [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_72 [i_17] [i_34] [i_34 + 3] [i_34 - 2] [i_34 - 1] [i_34])) | (((/* implicit */int) arr_72 [i_17] [i_34 - 1] [i_34 - 2] [i_34 - 1] [i_34 - 2] [i_34 + 1]))));
                            arr_112 [i_17] [i_34] [17U] [i_34] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) arr_93 [i_24] [i_24 + 2] [i_32] [i_34 - 1] [i_34 + 1])) : (((/* implicit */int) arr_66 [(unsigned char)14] [i_24 + 2] [i_24] [i_24 - 2] [i_24 + 1]))));
                        }
                        for (unsigned long long int i_35 = 0; i_35 < 22; i_35 += 1) 
                        {
                            arr_116 [i_17] = ((/* implicit */unsigned int) 1407112812);
                            arr_117 [i_16] [i_16] [i_16] [i_16] [i_16] |= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) arr_84 [i_16] [i_17] [i_35] [i_16] [i_24] [i_17] [i_35])) : (((/* implicit */int) arr_57 [i_17] [i_32] [i_16])))));
                        }
                        arr_118 [i_16] [i_16] [i_24 + 2] [(unsigned char)2] [i_32] |= (-(((((/* implicit */int) (unsigned short)15843)) + (((/* implicit */int) var_17)))));
                        arr_119 [i_16] [i_16] [i_17] [(unsigned short)17] [i_16] = ((/* implicit */signed char) ((short) arr_64 [i_17] [17] [i_24] [i_17]));
                        var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((((/* implicit */_Bool) arr_115 [i_16] [i_17] [i_16] [i_24] [i_32])) ? (((((/* implicit */int) (signed char)-63)) ^ (var_11))) : (((1422679290) % (1422679290))))))));
                    }
                }
                /* LoopNest 3 */
                for (unsigned char i_36 = 1; i_36 < 19; i_36 += 2) 
                {
                    for (unsigned long long int i_37 = 4; i_37 < 21; i_37 += 3) 
                    {
                        for (unsigned char i_38 = 0; i_38 < 22; i_38 += 2) 
                        {
                            {
                                var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) (_Bool)1))));
                                var_51 &= ((((/* implicit */_Bool) (~(max((var_11), (((/* implicit */int) arr_69 [i_16] [i_16] [i_36]))))))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) ((signed char) ((-1422679297) - (var_11))))));
                                arr_129 [i_38] |= ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)0)), (min((((signed char) (signed char)-92)), (((signed char) 2005203889))))));
                                arr_130 [i_16] [i_17] [i_36 + 2] [i_17] [i_38] = ((/* implicit */signed char) ((int) min((arr_57 [i_36 + 1] [i_37 - 4] [i_17]), (((/* implicit */short) var_8)))));
                            }
                        } 
                    } 
                } 
                arr_131 [i_17] = ((/* implicit */unsigned char) ((int) (short)-21558));
            }
        } 
    } 
}
