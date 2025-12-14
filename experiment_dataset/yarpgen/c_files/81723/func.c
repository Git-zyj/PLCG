/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81723
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
    var_10 = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((((/* implicit */int) (unsigned char)223)) / (((/* implicit */int) (unsigned char)203)))) + (1677600371))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? ((~((((_Bool)1) ? (arr_5 [i_1] [i_0 + 1]) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 - 1] [i_2 + 2])) / (((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9))), ((+(var_0))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
                    var_13 += ((/* implicit */signed char) (+(max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_0])) < (((/* implicit */int) var_6)))))))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1]))))))));
                    var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_2) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                }
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0] [i_0])) ? (arr_11 [i_0 + 1] [(short)7] [(short)7]) : (((/* implicit */long long int) var_5))))));
                    arr_16 [i_4] [i_1 + 2] = ((/* implicit */short) var_5);
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((unsigned short) (_Bool)1))));
                        var_18 ^= ((/* implicit */int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_0] [i_5 - 2] [i_0 + 1] [i_0]))))), (((((/* implicit */_Bool) (short)770)) ? (((((/* implicit */_Bool) 741652967)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 2]))))) : (min((var_5), (((/* implicit */unsigned int) var_4))))))));
                        arr_19 [i_5 - 2] [(unsigned short)21] [(short)23] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((+(arr_4 [i_1 - 1]))) : (((((/* implicit */int) var_6)) + (arr_4 [i_1 - 1])))));
                    }
                }
                for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    arr_22 [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                    arr_23 [i_0 + 1] [i_1 + 1] = max(((+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])))), (max((-745484606), (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])))));
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) min((max((((/* implicit */long long int) -1)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
                        arr_28 [6] = ((/* implicit */int) max(((short)511), (((/* implicit */short) (unsigned char)29))));
                        var_20 ^= ((/* implicit */signed char) ((unsigned long long int) (unsigned short)46685));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_26 [i_1] [i_1 - 1] [i_0 - 1]), (((/* implicit */long long int) (short)27059))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_22 = ((/* implicit */unsigned int) var_0);
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-1)) ? (9201739220920018878ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61222))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8])))));
                        arr_31 [10] [i_6] [i_6] [i_1 + 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 2116408570042753137LL)) && (((/* implicit */_Bool) -9223372036854775799LL))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_10 [i_0 - 1]))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_25 -= ((/* implicit */signed char) var_9);
                        /* LoopSeq 3 */
                        for (long long int i_10 = 4; i_10 < 23; i_10 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned int) var_4);
                            var_27 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4803)) ? (((/* implicit */int) arr_29 [i_0 + 1] [i_1 - 1] [i_6])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_36 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [18LL])) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (unsigned short)46664)) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                        }
                        for (long long int i_11 = 4; i_11 < 23; i_11 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) ((min((((/* implicit */int) arr_15 [i_1 + 1] [(signed char)0] [i_11 - 2])), (622904703))) >= (((((/* implicit */_Bool) ((9223372036854775798LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-29039)))))) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (short)-5497))))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((((((((/* implicit */_Bool) var_6)) ? (arr_35 [i_0 + 1] [i_1] [i_6] [i_9] [i_9] [i_11 - 4] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) / (((/* implicit */long long int) (-(var_5)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_2)))) ? ((-(arr_32 [i_1]))) : (((/* implicit */int) min(((short)-4804), ((short)-26540))))))))))));
                            var_30 &= var_6;
                            var_31 ^= ((unsigned short) ((((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_1] [21])) ? (((/* implicit */long long int) var_2)) : (9223372036854775798LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12477)))))));
                        }
                        for (long long int i_12 = 4; i_12 < 23; i_12 += 4) /* same iter space */
                        {
                            var_32 *= ((/* implicit */short) (+(((/* implicit */int) (short)29067))));
                            arr_42 [i_0] [i_12] [i_6] [i_9] [i_12 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)32767)) >= (((/* implicit */int) arr_34 [i_12] [i_12 - 4] [(signed char)10] [i_12 - 3] [7] [i_12] [(signed char)10])))) ? (((/* implicit */long long int) (+(((int) var_1))))) : (((((/* implicit */_Bool) arr_21 [i_1 + 2] [(signed char)8] [i_1 + 1])) ? (max((((/* implicit */long long int) (unsigned short)18826)), (var_0))) : (((long long int) var_0))))));
                            var_33 = ((/* implicit */short) var_0);
                        }
                    }
                    for (short i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) (short)7453)) : (((/* implicit */int) (unsigned short)55899))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -3544149156788852662LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27059))) : (1090759731141675382LL))))))))));
                        /* LoopSeq 3 */
                        for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            arr_48 [i_14] [i_13] [i_14] [i_14] [3U] [i_0] = ((/* implicit */unsigned char) var_1);
                            arr_49 [i_13] [i_14] [i_0] = ((arr_46 [i_0] [i_0] [i_0] [i_14] [i_14] [i_0] [i_14]) << (((((((/* implicit */_Bool) min((var_8), (((/* implicit */short) var_7))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_2 [17LL] [i_13] [i_0 + 1]) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_1))))))) - (5169177544523197063ULL))));
                        }
                        for (unsigned short i_15 = 2; i_15 < 22; i_15 += 1) 
                        {
                            arr_52 [i_6] = ((/* implicit */short) (signed char)35);
                            arr_53 [i_13] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55781)) ? (-8742699337625291912LL) : (((/* implicit */long long int) 8191))))) && (((/* implicit */_Bool) (unsigned char)207)));
                        }
                        for (signed char i_16 = 1; i_16 < 23; i_16 += 2) 
                        {
                            var_35 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)235)) | (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((int) var_6))) : (((((/* implicit */_Bool) arr_4 [i_13])) ? (((/* implicit */long long int) var_3)) : (max((9223372036854775779LL), (((/* implicit */long long int) (unsigned short)3)))))));
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) arr_34 [i_0] [i_0] [i_0] [(unsigned short)12] [i_0] [i_0 - 1] [i_0]))));
                            arr_57 [i_16] [i_6] [i_13] [i_6] [i_6] [i_0] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_40 [i_0 + 1] [i_1 + 2] [i_1] [i_16] [i_16 - 1] [i_16 + 1])) : (var_5)))));
                        }
                    }
                    var_37 = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (65535LL)))) ? (-4167070248616949232LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1126489374U))))));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (signed char i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3592)))))))) ? (var_9) : (((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) (signed char)82)), (-6040475163833730986LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9))))))))));
                                arr_66 [i_18] [i_17] [i_17] [(short)17] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_63 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_7)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) arr_63 [(short)12] [i_17] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                                var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) var_8))));
                                var_40 = ((/* implicit */unsigned short) min((max((min((var_0), (-6040475163833730968LL))), (((/* implicit */long long int) arr_18 [i_18] [(short)17] [i_6] [i_1] [i_0 - 1])))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) : (6040475163833730974LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (1854221903)))))))));
                                var_41 = ((/* implicit */short) min(((+(((/* implicit */int) arr_15 [i_17] [i_1 + 2] [(unsigned char)5])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [2] [2] [i_6])))))));
                            }
                        } 
                    } 
                }
                for (short i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    var_42 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_56 [i_1]) : ((~(max((((/* implicit */unsigned int) (_Bool)1)), (8388607U)))))));
                    /* LoopSeq 4 */
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_21 = 0; i_21 < 24; i_21 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)40724)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47836))) : (-8034132010104278160LL))))));
                            arr_75 [i_20] [i_20] [i_0] [4] [(unsigned short)15] [i_0] [i_20] = ((/* implicit */signed char) var_5);
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (signed char)-37)) ? (var_0) : (((/* implicit */long long int) arr_61 [i_21]))))));
                        }
                        var_45 ^= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_8))))));
                        /* LoopSeq 1 */
                        for (signed char i_22 = 0; i_22 < 24; i_22 += 3) 
                        {
                            var_46 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (short)28546))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17699))) : (((((/* implicit */_Bool) (signed char)-100)) ? (16383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                            var_47 ^= ((/* implicit */short) min((min((arr_50 [i_0 - 1] [i_20 + 1] [(unsigned short)12] [(unsigned short)12] [19U] [i_20] [(unsigned short)1]), ((unsigned short)65535))), (((/* implicit */unsigned short) var_1))));
                            var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) arr_76 [i_0] [i_1] [(unsigned short)15] [i_0] [i_22]))));
                        }
                    }
                    for (signed char i_23 = 0; i_23 < 24; i_23 += 1) /* same iter space */
                    {
                        arr_80 [i_23] [(signed char)1] [i_1] [i_23] = ((/* implicit */int) var_5);
                        arr_81 [i_0] [i_1] [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (unsigned short)64606))));
                        var_49 = ((/* implicit */unsigned char) var_2);
                        var_50 = ((/* implicit */short) arr_13 [i_1 + 1] [i_1 - 1] [i_0 + 1]);
                        arr_82 [i_23] [(short)22] = ((/* implicit */unsigned short) var_7);
                    }
                    for (signed char i_24 = 0; i_24 < 24; i_24 += 1) /* same iter space */
                    {
                        var_51 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (997425774U)));
                        var_52 = ((/* implicit */unsigned short) ((short) (signed char)99));
                        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_44 [i_0] [i_1] [i_19] [i_24]))))), (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (arr_4 [i_19]) : (((/* implicit */int) ((signed char) ((int) (unsigned char)196))))));
                        /* LoopSeq 1 */
                        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                        {
                            var_54 &= (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_4 [i_24])) : (max((var_0), (((/* implicit */long long int) var_5)))))));
                            var_55 = ((/* implicit */int) var_8);
                            var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) var_1))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_26 = 0; i_26 < 24; i_26 += 1) /* same iter space */
                    {
                        var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_34 [i_0 + 1] [i_1] [i_19] [i_26] [i_26] [i_26] [6U])) : (((/* implicit */int) arr_84 [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */long long int) arr_46 [i_0 - 1] [i_1] [i_26] [i_19] [i_0] [i_19] [i_0])) | (arr_39 [i_26] [i_19] [i_1 + 2] [(_Bool)1] [i_0])))));
                        arr_89 [i_0] [i_1] [i_19] [(unsigned char)8] = ((/* implicit */int) ((_Bool) var_7));
                        var_58 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)17699)) > (((/* implicit */int) (unsigned short)18805))));
                        var_59 = (+(((((/* implicit */int) var_4)) >> (((((/* implicit */int) (signed char)-52)) + (60))))));
                    }
                    var_60 = ((((/* implicit */int) (short)4799)) != (((/* implicit */int) (short)10505)));
                }
                var_61 = ((/* implicit */_Bool) max((var_61), (((((/* implicit */_Bool) arr_38 [i_1] [i_0] [i_0] [(short)3] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3611)) * (((/* implicit */int) (signed char)103)))))))));
            }
        } 
    } 
    var_62 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 3427215565U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3427215565U)))))));
    var_63 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)35)))))))), (((((/* implicit */int) ((short) var_8))) ^ (((/* implicit */int) var_1))))));
}
