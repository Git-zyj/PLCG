/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64972
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) <= (((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (short)-3)))));
        var_20 -= ((/* implicit */unsigned int) ((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) var_5);
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 8; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                arr_16 [i_4 + 1] [i_1] [i_2] = ((/* implicit */short) arr_1 [i_1]);
                                var_21 -= (short)21692;
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_8 [i_1]);
                }
            } 
        } 
        arr_18 [7] [i_1] = ((/* implicit */unsigned long long int) ((signed char) max((arr_9 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_1])))));
    }
    var_22 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (9) : (1774527634))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (short)17937)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) var_6)))))));
    var_23 = (short)17934;
    /* LoopNest 2 */
    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_6] [i_7] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_25 [i_8] [i_9] [i_10])) <= (((/* implicit */int) arr_25 [i_7] [i_9] [i_10]))))) : (((/* implicit */int) min((arr_25 [i_9] [i_8] [i_6 + 1]), (arr_25 [i_6 + 1] [i_6 + 1] [i_6 - 1]))))));
                                arr_31 [i_9] = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned long long int) arr_25 [i_6] [i_6] [i_6]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 2; i_11 < 16; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 16; i_12 += 3) 
                        {
                            {
                                var_25 = 4577885632979921820ULL;
                                var_26 = ((/* implicit */unsigned long long int) arr_24 [i_6]);
                                var_27 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (((/* implicit */int) (short)16577)) : (((/* implicit */int) var_9))))) / (((((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_12 + 2] [i_6] [i_6 - 2] [i_7])) ? (arr_19 [0ULL] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [i_6] [i_8] [i_6] [i_12])))))))));
                                arr_37 [i_6] [i_12 + 1] [i_6] [i_11 - 1] [i_6] &= ((/* implicit */short) ((((arr_26 [i_6] [i_6]) >= (arr_26 [i_11] [i_7]))) ? (((((/* implicit */_Bool) 0ULL)) ? (arr_26 [i_8] [i_8]) : (arr_26 [i_11] [i_11]))) : (((((/* implicit */_Bool) arr_26 [i_8] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) : (arr_26 [i_8] [i_8])))));
                            }
                        } 
                    } 
                }
                for (short i_13 = 4; i_13 < 14; i_13 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 2) 
                        {
                            var_28 -= (signed char)22;
                            arr_45 [i_6] [i_7] [i_6] [i_6] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) arr_39 [i_6 - 1] [i_6 - 1] [i_6] [6ULL])) + (((/* implicit */int) arr_24 [i_6 + 1]))));
                            arr_46 [i_6] = ((/* implicit */short) arr_40 [i_6 - 1]);
                            arr_47 [i_6] [i_7] [(signed char)3] [i_14] [i_15] = ((/* implicit */unsigned short) ((short) arr_30 [i_15] [i_14] [i_13] [i_7] [i_15]));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_13 + 3])) != (((/* implicit */int) ((signed char) var_13)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            arr_51 [i_6] [(unsigned short)6] [(unsigned short)6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (short)2047);
                            var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_6 - 2])) / (((/* implicit */int) arr_23 [i_6 - 1]))));
                            var_31 |= ((/* implicit */signed char) ((unsigned short) (signed char)51));
                            arr_52 [i_6] [i_6] [(short)14] [i_6] [(unsigned char)5] [i_6] |= ((/* implicit */short) ((unsigned char) var_10));
                        }
                        for (signed char i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            arr_56 [i_6 + 1] [i_6 + 1] [i_13] [i_13] [i_17] [i_7] [i_13] = ((((/* implicit */_Bool) (signed char)57)) ? (((unsigned long long int) 572117822)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)29150)))));
                            arr_57 [(unsigned short)1] [i_6 + 1] [i_13] [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_13 + 3] [i_13 + 3] [i_13 + 3] [i_13 + 3])) ? (((/* implicit */int) arr_39 [i_13 - 3] [i_13 - 3] [2U] [i_13 - 3])) : (((/* implicit */int) arr_39 [i_13 - 1] [i_13 - 1] [i_13 - 1] [7ULL]))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 18; i_18 += 2) 
                        {
                            arr_60 [i_18] [i_13] [i_13] [i_13] [i_7] [i_6 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_39 [i_18] [i_14] [i_6 - 2] [i_6 + 1])) - (((/* implicit */int) (short)29981))));
                            var_32 = ((((/* implicit */_Bool) arr_35 [i_18] [i_13 + 1] [i_7] [i_13] [i_7] [i_18])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_6] [i_6] [i_13 - 1] [i_6]))))) : (((/* implicit */int) arr_30 [i_6 - 1] [i_6] [i_13 + 2] [i_13 - 4] [i_13])));
                        }
                        var_33 = (short)-16678;
                        var_34 = ((/* implicit */short) (+(((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_6] [i_13 - 3] [i_13 - 4] [i_13 - 1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_19 = 0; i_19 < 18; i_19 += 2) /* same iter space */
                    {
                        arr_63 [i_19] [i_13 - 2] [i_7] [i_6 - 1] = ((/* implicit */short) ((unsigned short) arr_40 [i_6]));
                        arr_64 [i_6] [i_6] [(unsigned short)3] [i_19] |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-3139)) || (((/* implicit */_Bool) var_18))))) <= (((/* implicit */int) arr_27 [i_19] [i_13 + 3]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_20 = 0; i_20 < 18; i_20 += 2) /* same iter space */
                    {
                        var_35 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)66)) * (((/* implicit */int) arr_49 [i_6] [i_7] [4U]))))) ? (((/* implicit */int) arr_39 [i_6 - 1] [i_7] [i_13 + 1] [i_20])) : (((/* implicit */int) arr_23 [i_13]))));
                        arr_69 [i_6] [i_7] [i_7] [i_13] [i_7] = ((/* implicit */signed char) (short)2047);
                    }
                    var_36 += ((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)19819))))));
                    /* LoopSeq 2 */
                    for (short i_21 = 1; i_21 < 17; i_21 += 4) 
                    {
                        arr_72 [i_6] [i_6 + 1] [i_21] [i_21] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)216)), ((short)19087)))), (arr_21 [i_21 + 1] [i_13 - 2])));
                        arr_73 [i_21] [i_13] [i_6] [i_21] = ((/* implicit */unsigned long long int) max(((unsigned short)58926), (((/* implicit */unsigned short) (short)16577))));
                        var_37 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_61 [i_6] [i_6 - 2] [i_6])), (max(((+(((/* implicit */int) var_13)))), (((((/* implicit */_Bool) arr_66 [10])) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((/* implicit */int) arr_27 [i_21] [i_21]))))))));
                        /* LoopSeq 3 */
                        for (short i_22 = 0; i_22 < 18; i_22 += 4) /* same iter space */
                        {
                            arr_76 [i_7] [i_7] [i_7] [i_7] [i_21] [i_7] = ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7] [i_7]))) : (arr_59 [i_6] [i_6] [i_6]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_68 [i_21 - 1])))))))));
                            var_38 += ((/* implicit */short) arr_26 [i_6] [i_6]);
                        }
                        /* vectorizable */
                        for (short i_23 = 0; i_23 < 18; i_23 += 4) /* same iter space */
                        {
                            arr_81 [i_21] [i_6] [i_6] [i_21] [i_23] = ((/* implicit */short) (+(arr_62 [i_21 + 1] [i_21] [i_21 - 1] [i_21 - 1] [i_21 + 1] [i_21 - 1])));
                            var_39 = ((/* implicit */short) arr_21 [i_6] [i_7]);
                        }
                        for (short i_24 = 0; i_24 < 18; i_24 += 4) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (short)-16578))))))) ? (((/* implicit */int) (short)17937)) : (((/* implicit */int) var_16)))))));
                            arr_86 [i_6 + 1] [i_7] [i_13] [i_21] [i_24] = arr_24 [i_21];
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        arr_90 [i_6] [i_7] [i_7] [i_6] [i_7] [i_25] = ((/* implicit */short) ((((/* implicit */int) arr_41 [i_6 - 1] [i_7] [i_13 + 4] [i_6 + 1] [i_13 + 4] [i_13 - 4])) != (((/* implicit */int) arr_41 [3] [i_7] [i_25] [i_6 - 2] [i_7] [i_13 + 3]))));
                        arr_91 [i_7] [i_7] [(short)16] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1735))))) ? (((int) (short)9582)) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_85 [i_6] [i_13] [i_13] [i_25] [i_7])))))));
                        var_41 -= ((/* implicit */unsigned short) arr_53 [i_6 + 1] [i_6 + 1] [i_13] [i_25] [i_25]);
                    }
                }
                for (short i_26 = 0; i_26 < 18; i_26 += 4) /* same iter space */
                {
                    var_42 -= ((/* implicit */signed char) (short)30941);
                    /* LoopNest 2 */
                    for (short i_27 = 1; i_27 < 16; i_27 += 3) 
                    {
                        for (unsigned char i_28 = 0; i_28 < 18; i_28 += 2) 
                        {
                            {
                                arr_99 [i_7] [i_27] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)30878)), (arr_44 [i_6] [i_7] [i_6] [i_6] [i_6] [i_27] [i_28])));
                                arr_100 [i_27] = arr_68 [i_28];
                                arr_101 [i_6] [i_6] [i_6 - 2] [i_27] = arr_41 [i_7] [i_7] [i_7] [(short)15] [i_7] [(short)15];
                                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((arr_35 [i_26] [i_7] [i_28] [(short)6] [i_7] [i_28]) % (min((12671610171763279142ULL), (((/* implicit */unsigned long long int) (unsigned short)13070)))))) >> ((((-(((/* implicit */int) arr_67 [i_27 - 1] [(unsigned short)8] [i_6 + 1])))) + (81))))))));
                                arr_102 [i_27] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_59 [i_6 - 2] [i_6 + 1] [i_6 + 1]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6863)) ? (((/* implicit */int) (unsigned short)43073)) : (((/* implicit */int) arr_94 [16ULL] [i_27] [i_26])))))))) ? (arr_35 [i_27] [i_27] [(unsigned char)17] [i_6] [i_6] [i_6 + 1]) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))) > (7672424615046575501ULL)))), (max((((/* implicit */unsigned long long int) arr_74 [i_6] [i_27] [i_27] [i_27 - 1] [i_27 - 1])), (var_14)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_29 = 0; i_29 < 18; i_29 += 4) /* same iter space */
                {
                    arr_106 [i_6 + 1] [i_7] [i_7] = ((((/* implicit */int) (unsigned char)196)) ^ (((/* implicit */int) var_3)));
                    var_44 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-15800))));
                }
                var_45 = ((/* implicit */unsigned short) -2033761182);
                var_46 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_54 [i_6] [i_6] [i_6 + 1])) || (((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) 613067809U))))));
            }
        } 
    } 
}
