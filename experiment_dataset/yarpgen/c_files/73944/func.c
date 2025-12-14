/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73944
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((1578648341U), (2716318945U)))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) (~(var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_14 [i_3] [i_3] [i_2] = ((/* implicit */long long int) var_10);
                            var_13 &= ((/* implicit */_Bool) var_11);
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (+(arr_2 [i_1]))))));
                        }
                        arr_15 [i_0] &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67108863ULL)) ? (arr_10 [(_Bool)1] [i_2] [i_1] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1])))))) ? (((/* implicit */int) arr_13 [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) 1673814761U)) && (((/* implicit */_Bool) var_7)))))))), (((var_2) ? (max((18446744073642442752ULL), (((/* implicit */unsigned long long int) 8106347622214851631LL)))) : (((/* implicit */unsigned long long int) max((var_6), (arr_6 [i_0] [i_1] [i_2 + 2] [i_3]))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_0 - 4] [i_0 - 4] = ((((/* implicit */int) (unsigned short)54958)) - (((/* implicit */int) (_Bool)0)));
                            arr_20 [i_0 - 3] [i_1] [i_2] [i_5 - 1] [i_1] [i_3] [i_0] = ((((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_13 [i_2 - 2] [i_1]))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54958))) : (arr_9 [i_0] [i_1] [i_0] [i_0]))))) : (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (var_8) : (((/* implicit */int) var_10))))), (arr_9 [i_1] [i_2] [i_3] [i_5 - 1]))));
                            var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-803355597)));
                            arr_21 [i_2] [i_5] = ((int) (~(arr_6 [i_0] [i_0] [i_2 - 1] [i_5])));
                            arr_22 [i_0] [i_0] [i_2 + 2] [i_3] [i_5] = ((/* implicit */long long int) arr_17 [i_5] [i_3] [i_2 + 2] [i_1] [i_0] [i_0 - 1] [i_0]);
                        }
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((var_4), (((/* implicit */long long int) arr_12 [i_6] [i_1] [i_2] [i_1] [i_0])))))));
                            var_17 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_2 + 1] [i_0 - 2] [i_0 - 2] [i_0] [i_0]))))));
                            var_18 -= ((/* implicit */_Bool) (((~(arr_9 [i_0] [i_1] [i_6] [i_3]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? ((-(arr_2 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))))));
                        }
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_3))));
                        arr_25 [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)-4811)), ((unsigned short)55445))))))) ? (var_8) : (((((/* implicit */int) (unsigned short)10563)) << (((((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_2 - 3] [i_0 - 3] [(_Bool)1] [i_0])) - (11140)))))));
                    }
                    for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_20 *= ((/* implicit */unsigned long long int) (-(var_8)));
                            var_21 = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_4 [i_8] [i_7])))), (((/* implicit */int) max((((/* implicit */short) var_5)), (((short) var_9)))))));
                            var_22 = ((/* implicit */unsigned int) 18446744073642442753ULL);
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((255U) >= (1578648336U))) ? (arr_11 [i_9] [(_Bool)1] [i_2] [(_Bool)1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)10577))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10577)) ? (-15LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) : (((/* implicit */int) var_7)))))));
                            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */int) (short)5937)) != (arr_29 [i_0 - 3] [i_1] [i_1] [i_1] [i_9])));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_10] [i_2] [i_7] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_17 [i_0] [i_1] [12ULL] [i_0 + 1] [i_10] [i_0] [i_1])) != (((/* implicit */int) (short)-22733)))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)54958)) || (((/* implicit */_Bool) var_1))))), (((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10] [i_7] [i_10] [i_10] [(unsigned short)5] [i_0]))))))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_30 [i_10] [i_0]))))))));
                            arr_36 [i_0] [(short)5] [i_10] [i_7] [7ULL] = ((/* implicit */_Bool) ((unsigned int) (signed char)-32));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 309787474)) ? (-1152921504606846976LL) : (-8616912653444810417LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -752376219)), (var_6)))) : (arr_10 [i_1] [i_2] [i_7] [(_Bool)1])))) ? ((~(((((/* implicit */_Bool) arr_31 [i_0] [(unsigned short)8] [i_2] [i_7] [i_11] [i_2])) ? (arr_30 [i_7] [(_Bool)1]) : (((/* implicit */int) arr_13 [i_0] [i_1])))))) : (((((arr_34 [i_11] [i_7] [(unsigned short)10] [(unsigned short)10] [i_1] [i_0]) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_1])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_11] [i_11])))) - (((arr_31 [i_0] [i_0] [i_1] [i_1] [i_0] [(_Bool)1]) >> (((17592186044415LL) - (17592186044412LL)))))))));
                            arr_39 [i_0] [12ULL] [i_1] [9] [i_1] = ((/* implicit */long long int) ((((unsigned int) max((var_4), (((/* implicit */long long int) arr_28 [i_0] [i_0] [i_2 - 3] [i_2] [i_7] [i_7] [i_11]))))) >> (((var_0) + (4623763747951535148LL)))));
                        }
                        for (int i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */_Bool) (((+(arr_9 [i_0] [i_0] [i_7] [i_0]))) & (((/* implicit */unsigned long long int) arr_40 [i_0 + 1] [(unsigned short)4] [i_2 - 1] [i_7]))));
                            arr_42 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_29 [i_0 - 4] [i_7] [i_2] [i_7] [i_1]) | (((/* implicit */int) arr_34 [i_0] [i_1] [i_2] [i_12] [(short)6] [i_12]))))) ? (((arr_11 [i_0] [0ULL] [i_2] [i_1] [i_12]) << (((((/* implicit */int) (unsigned short)10591)) - (10552))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2] [i_2 - 1] [i_2 - 2]))))) >> (((((((((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_0))) + (9223372036854775807LL))) >> (((arr_32 [i_0 - 3] [i_0] [i_0 - 3] [i_0] [(_Bool)1]) - (15693771071043939798ULL))))) - (16733233LL)))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((short) ((long long int) arr_26 [i_0] [i_0 + 1] [i_0] [i_2 - 1]))))));
                            var_28 = (!(min((var_5), ((!(((/* implicit */_Bool) var_11)))))));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 4] [i_2] [i_2 - 1] [i_13 - 1] [i_13])) ? (((/* implicit */int) ((signed char) arr_7 [i_1] [i_2] [i_7] [i_13]))) : (var_3)))) / ((((!(((/* implicit */_Bool) (unsigned short)33272)))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)10613)), (arr_43 [i_0 - 3] [(_Bool)1] [i_2] [i_7] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_4) : (var_4)))))));
                            var_30 = (!(((/* implicit */_Bool) ((((((/* implicit */int) var_9)) >> (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) (unsigned short)10595)) - (10579)))))));
                            var_31 ^= ((/* implicit */unsigned short) arr_13 [(_Bool)1] [i_13 - 1]);
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_9))) && (((/* implicit */_Bool) -1LL))));
                            var_33 ^= ((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (short)-4))));
                        }
                        var_34 = ((/* implicit */unsigned int) ((long long int) ((unsigned int) (~(((/* implicit */int) arr_1 [i_1] [4LL]))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [5] [i_1] [i_1] [i_2] [i_14])) ? (((/* implicit */int) arr_16 [(_Bool)1] [i_1] [(_Bool)1] [i_14])) : (((/* implicit */int) var_2)))))))) < (max((arr_38 [i_2 + 2] [10] [i_2 - 1]), (arr_38 [i_2 - 3] [i_1] [i_2 + 2])))));
                        var_36 ^= ((/* implicit */_Bool) arr_4 [i_14] [i_1]);
                    }
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_16 = 0; i_16 < 13; i_16 += 4) 
                        {
                            arr_53 [i_0] [i_1] [i_2] [5ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */int) var_10)) << (((((arr_49 [i_0] [9LL] [i_2] [i_15]) + (1444657458))) - (21)))))))) ? (((/* implicit */int) var_5)) : ((~((~(((/* implicit */int) arr_52 [(_Bool)1] [i_1] [8] [i_15] [i_15]))))))));
                            arr_54 [i_0] = arr_48 [i_0] [4] [i_2 - 3] [i_2 - 3] [i_16] [4];
                            arr_55 [i_1] = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_16] [i_2] [i_15] [i_16] [i_0] [i_0]);
                            arr_56 [3] [i_1] [i_2] [i_15] [(_Bool)1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_5 [i_16])) : (arr_30 [i_0] [i_0]))));
                        }
                        for (short i_17 = 0; i_17 < 13; i_17 += 4) 
                        {
                            var_37 = ((/* implicit */signed char) max((var_0), (((/* implicit */long long int) (((-(1975928684U))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))))));
                            var_38 = ((/* implicit */signed char) var_5);
                        }
                        for (short i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            var_39 = ((/* implicit */unsigned short) ((int) ((signed char) ((((/* implicit */_Bool) 18446744073642442729ULL)) || (((/* implicit */_Bool) (short)385))))));
                            var_40 = ((/* implicit */long long int) (_Bool)0);
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_11 [i_0 - 3] [i_0] [i_0 + 1] [i_2] [i_2 - 1])) ? (arr_46 [i_2 + 1] [i_2 + 1] [i_15] [i_15] [i_0 + 1] [i_2]) : (((((/* implicit */_Bool) 1796134836)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_11 [i_0] [i_1] [i_2] [5U] [i_18]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_1])))));
                        }
                        var_42 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3282413923U)) ? (16777215ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85)))))) ? (var_4) : (((/* implicit */long long int) 752376195))));
                        /* LoopSeq 2 */
                        for (long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                        {
                            var_43 = ((/* implicit */long long int) ((short) max((((/* implicit */int) arr_1 [i_0 - 1] [i_1])), ((((_Bool)1) ? (arr_50 [i_0 - 4] [i_1]) : (((/* implicit */int) (signed char)0)))))));
                            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) max((((/* implicit */int) arr_57 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_15] [i_19])), ((-(((/* implicit */int) arr_48 [i_2 - 3] [i_2 - 3] [i_0 - 3] [(unsigned short)2] [(unsigned short)2] [i_2 - 3])))))))));
                        }
                        for (unsigned short i_20 = 0; i_20 < 13; i_20 += 4) 
                        {
                            var_45 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_59 [i_15] [i_2 - 3] [i_2] [(_Bool)0] [i_0 - 4] [i_0 - 1] [i_0])), (((unsigned long long int) arr_59 [i_15] [i_2 - 3] [i_2] [i_1] [i_0 - 4] [i_0] [i_0]))));
                            arr_68 [i_0] [i_20] [i_2] [i_1] &= ((/* implicit */unsigned int) ((long long int) (short)-12663));
                            arr_69 [i_0] [i_1] [i_2] [i_15] [i_20] [i_2 - 2] = ((/* implicit */_Bool) var_8);
                        }
                        var_46 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0 - 1] [i_2 - 1] [(_Bool)1] [i_2 + 2]))))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_70 [i_0] [i_1] [i_0] [i_15] = ((/* implicit */short) min((((/* implicit */int) ((_Bool) var_6))), ((~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)65535)) - (65518)))))))));
                    }
                    arr_71 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(max((((/* implicit */int) max((var_11), (var_11)))), (arr_31 [i_0] [i_1] [i_1] [i_1] [i_2 - 2] [i_2 + 2])))));
                    var_47 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_64 [i_2] [(_Bool)1] [i_2] [1] [i_2] [i_1] [(unsigned short)3]) : (((/* implicit */int) arr_41 [10U] [i_1] [i_0]))))) ? (((/* implicit */int) ((short) arr_52 [i_0] [i_0] [i_1] [5] [i_2]))) : ((-(((/* implicit */int) (unsigned short)41825))))))));
                    var_48 = ((/* implicit */unsigned long long int) var_4);
                }
                var_49 = ((/* implicit */long long int) (short)-12668);
                /* LoopSeq 2 */
                for (unsigned long long int i_21 = 4; i_21 < 10; i_21 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (0) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [11LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            arr_83 [i_0] [i_1] [i_21] [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) arr_27 [i_0 + 1] [i_21 + 3]);
                            arr_84 [i_21] [i_22] [i_21] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_21] [i_21] [i_22] [10ULL])) || (((/* implicit */_Bool) arr_24 [i_22] [i_1] [i_21] [i_22] [i_23])))) || (((/* implicit */_Bool) arr_11 [i_0 - 3] [i_1] [i_21] [i_22] [i_23]))));
                            arr_85 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-401)), (813414885U))))));
                            var_51 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (arr_63 [(unsigned short)9] [(unsigned short)9] [i_22] [i_22] [(short)5]) : (((((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14)))))) << ((((-(arr_40 [i_0] [i_1] [i_21] [i_22]))) - (4183614604U)))))));
                        }
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        arr_88 [i_24] = ((/* implicit */unsigned int) ((unsigned long long int) -1148227408));
                        var_52 += var_9;
                        arr_89 [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((arr_45 [i_0 - 3] [i_1] [i_21 - 3] [i_0 - 3] [(unsigned short)6] [i_21 + 3]), (((/* implicit */unsigned long long int) -884510011)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_60 [i_0] [i_0] [3] [(_Bool)1] [(unsigned short)11] [i_1] [i_1])))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3982890649U)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                        arr_90 [i_21] &= (~(min(((~(var_3))), (((/* implicit */int) arr_52 [i_24] [i_24] [i_21] [i_1] [i_0 - 3])))));
                    }
                    arr_91 [1] [i_1] [i_1] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 813414879U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((222728122U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) >= (((((/* implicit */_Bool) var_0)) ? (-7689929891214878625LL) : (((/* implicit */long long int) arr_49 [i_0] [i_1] [i_21] [i_21])))))))) : (max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1))), (((/* implicit */unsigned int) (unsigned short)47057))))));
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_53 = ((/* implicit */unsigned short) 7689929891214878610LL);
                    var_54 = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_25] [i_1] [i_0]);
                }
                var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) arr_76 [i_0]))));
            }
        } 
    } 
    var_56 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) var_5))))));
}
