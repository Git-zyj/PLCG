/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78376
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) arr_9 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [(_Bool)1]);
                                arr_15 [i_4] [i_1] [(unsigned char)6] [i_3 - 1] [(unsigned char)5] = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1] [3U]))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_2] [i_1] [i_2] [i_0] [i_0] [i_0] [i_2])) : (var_9))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_1] [i_2] [i_1] [i_1] [(signed char)7] [i_1] [i_2])), ((unsigned short)53813))))));
                }
            } 
        } 
        arr_16 [9] [9] = ((/* implicit */unsigned int) var_3);
        arr_17 [i_0] = ((/* implicit */long long int) arr_9 [9ULL] [(unsigned char)8] [i_0] [i_0] [5]);
    }
    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_19 = ((arr_23 [i_5] [i_6] [i_7]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                    var_20 = ((/* implicit */short) var_14);
                    var_21 = (+(min((arr_21 [i_5 + 3]), (arr_21 [i_5 + 2]))));
                    var_22 = ((/* implicit */signed char) arr_22 [i_5 + 1]);
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        for (signed char i_9 = 1; i_9 < 12; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (arr_22 [i_9])))) : (14829888846326320783ULL)))) ? (((14829888846326320783ULL) + (((/* implicit */unsigned long long int) arr_21 [i_9 + 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5 + 2])) ? (arr_22 [i_5 + 1]) : (arr_22 [i_5 + 2]))))));
                                var_24 += ((/* implicit */int) ((max((((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5] [i_7] [i_7] [i_8]))) : (14829888846326320783ULL))), (((/* implicit */unsigned long long int) var_9)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_12))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3455415595437095287LL))))))))))));
                                var_25 -= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_21 [i_5])), (1400346696U)))) >= ((-(arr_23 [i_5] [1LL] [7ULL])))))), (var_9)));
                                var_26 = 14829888846326320789ULL;
                                var_27 = (((+(max((arr_19 [(unsigned short)4] [(unsigned short)4]), (9223372036854775807LL))))) << (min((((/* implicit */int) max(((unsigned short)59637), (var_8)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_28 [i_5] [0LL] [i_7] [8] [i_9] [0LL])) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_10 = 3; i_10 < 11; i_10 += 1) 
        {
            for (unsigned int i_11 = 2; i_11 < 10; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) 2147483647)) ? (3616855227383230825ULL) : (((/* implicit */unsigned long long int) var_9)))) >> (((/* implicit */int) arr_28 [i_10 - 3] [i_10 - 3] [i_11] [i_5] [i_11 + 3] [(unsigned short)4]))));
                                var_29 = ((/* implicit */long long int) max((max((arr_35 [(short)0] [i_11] [i_12 + 1] [i_13]), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-363344972480530080LL) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31705))) : (arr_32 [i_13])))))))));
                                arr_43 [i_12] [i_12] [i_12] [i_12] [i_12] [i_11] [i_11] = ((/* implicit */int) 1456863571345799212ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        arr_46 [i_5] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5897)) ? (((/* implicit */long long int) -1666536242)) : (-363344972480530099LL)));
                        var_30 |= ((/* implicit */signed char) (~(14829888846326320787ULL)));
                        arr_47 [i_11] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 5823456618820100970ULL)) ? (((/* implicit */int) arr_30 [(unsigned short)6] [(unsigned short)6] [i_11 - 2] [(unsigned short)6] [i_5 + 3] [i_11 - 2] [i_10 - 3])) : (((/* implicit */int) var_10)))), (((((/* implicit */int) arr_30 [(unsigned short)8] [(unsigned char)6] [(signed char)0] [(unsigned short)4] [i_5 - 1] [i_11 - 1] [i_10 - 2])) * (((/* implicit */int) arr_30 [i_5] [i_10 - 2] [i_11 + 2] [5U] [i_5 + 2] [i_11 - 2] [i_10 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 3; i_15 < 11; i_15 += 2) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            {
                                arr_53 [i_5] [i_11 - 1] [i_11] [i_5 + 3] [5U] = ((/* implicit */unsigned int) (~((+((-(3616855227383230828ULL)))))));
                                var_31 += ((/* implicit */short) -363344972480530080LL);
                                arr_54 [i_11] [i_10 + 2] [i_11 + 3] [i_16] [(unsigned short)7] [i_16] [i_10 + 2] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14829888846326320795ULL)) ? (1400346696U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55461)))))) < (min((var_16), (((/* implicit */unsigned long long int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_16) << (((/* implicit */int) (unsigned char)11)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)251)) ? (arr_42 [i_11]) : (((/* implicit */long long int) arr_24 [i_10]))))))))) : ((+(min((((/* implicit */unsigned long long int) var_6)), (14829888846326320807ULL)))))));
                                arr_55 [i_5] [i_5] [i_15] [i_11] [i_16] [i_11] = ((/* implicit */int) ((unsigned short) arr_23 [i_5 + 3] [i_5] [i_5]));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_17 = 1; i_17 < 12; i_17 += 2) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        for (short i_20 = 0; i_20 < 13; i_20 += 4) 
                        {
                            {
                                arr_67 [i_5] [i_17] [i_18 + 2] [i_17] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2047))) != (14829888846326320772ULL)));
                                var_32 = ((/* implicit */int) arr_48 [i_5] [i_17] [i_5] [i_19]);
                                arr_68 [i_5] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_50 [i_18] [i_18] [i_18] [3U] [i_20]), (((/* implicit */unsigned int) arr_21 [i_20]))))), (min((var_16), (0ULL)))))) ? (var_16) : (((/* implicit */unsigned long long int) var_4))));
                                var_33 = ((((/* implicit */_Bool) -3794884588812710957LL)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : ((~((~(((/* implicit */int) var_14)))))));
                                var_34 = ((/* implicit */long long int) min((var_34), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 963484511U))))), (((var_1) ? (min((((/* implicit */long long int) (short)1023)), (363344972480530098LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) max((min((arr_33 [i_5] [i_17 + 1]), (((/* implicit */long long int) var_12)))), (((arr_44 [i_5] [i_17] [i_5 + 3] [12] [12] [i_17]) ^ (arr_44 [i_5] [i_17 + 1] [i_5 + 3] [(short)10] [i_5] [i_5 - 1]))))))));
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_18 + 2] [i_17 - 1] [i_5 + 3] [0] [i_18 + 2] [i_17])) || ((!(((/* implicit */_Bool) arr_21 [i_18 + 2])))))))));
                    var_37 = ((/* implicit */unsigned int) min((var_3), (((/* implicit */long long int) (!(((var_11) < (((/* implicit */int) (unsigned char)246)))))))));
                }
            } 
        } 
        arr_69 [i_5 + 1] [i_5 + 2] = arr_41 [i_5] [0LL] [4] [(unsigned char)10] [i_5] [4ULL] [i_5 - 1];
    }
    for (unsigned int i_21 = 1; i_21 < 11; i_21 += 1) 
    {
        var_38 = ((/* implicit */long long int) 2044U);
        /* LoopSeq 1 */
        for (long long int i_22 = 1; i_22 < 12; i_22 += 1) 
        {
            var_39 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65517))))), (arr_49 [i_21] [i_21 + 2] [(unsigned char)2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64512)) || (((/* implicit */_Bool) -848620806)))))) / (arr_49 [i_21] [i_22 + 1] [8]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_23 = 0; i_23 < 13; i_23 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_24 = 0; i_24 < 13; i_24 += 2) 
                {
                    for (unsigned long long int i_25 = 1; i_25 < 10; i_25 += 4) 
                    {
                        {
                            arr_81 [i_21] [i_24] [i_25 + 2] [i_25 + 2] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [(unsigned char)12] [8LL])) << (((var_4) - (2123740391)))))) ? (((((/* implicit */_Bool) -3070753284350057290LL)) ? (10604266957136317203ULL) : (((/* implicit */unsigned long long int) -363344972480530121LL)))) : (((/* implicit */unsigned long long int) var_9))));
                            arr_82 [i_23] [i_25 + 1] [i_25 + 1] [i_23] [(unsigned char)12] [i_24] = ((/* implicit */unsigned int) (signed char)1);
                        }
                    } 
                } 
                arr_83 [i_22] [i_22] [i_23] [i_22] = ((((/* implicit */int) ((var_16) == (((/* implicit */unsigned long long int) 3331482784U))))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (arr_58 [i_22] [(unsigned char)1])))));
            }
            for (unsigned char i_26 = 0; i_26 < 13; i_26 += 4) 
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 13; i_27 += 2) 
                {
                    for (unsigned char i_28 = 1; i_28 < 11; i_28 += 1) 
                    {
                        {
                            arr_91 [i_21] [i_22] [i_22] [i_27] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_22 [i_21])))) ? (((((/* implicit */_Bool) (unsigned short)18804)) ? (((((/* implicit */_Bool) arr_80 [i_27] [i_27] [i_26] [i_27] [i_28 + 1] [i_28])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) arr_50 [i_21] [i_22] [i_22] [i_22] [i_22])) : (arr_23 [3LL] [3LL] [i_22]))))) : (((/* implicit */long long int) arr_45 [i_28 - 1] [i_28 - 1] [i_28 - 1] [i_28 - 1] [4LL] [i_27]))));
                            var_40 += (unsigned short)64026;
                            arr_92 [i_21] [i_21] [i_26] [(unsigned char)0] [3] [i_26] = ((((/* implicit */long long int) ((/* implicit */int) arr_30 [(unsigned short)4] [11U] [i_21] [i_27] [i_28 + 1] [i_26] [i_21]))) - (var_3));
                        }
                    } 
                } 
                arr_93 [i_21 + 1] [(signed char)9] = ((/* implicit */unsigned long long int) 628774237U);
                var_41 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_21])) ? (var_11) : (((/* implicit */int) (unsigned short)41160))))) ? (arr_87 [i_22] [i_21] [i_26] [i_21]) : (((((/* implicit */int) var_1)) << (((2147483647U) - (2147483646U)))))))));
            }
        }
        arr_94 [i_21] [i_21 - 1] = max((min((((/* implicit */long long int) (unsigned short)59639)), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) var_9)) : (-3020449183009510744LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_72 [i_21]))))));
    }
    var_42 += ((/* implicit */int) ((signed char) ((max((3616855227383230833ULL), (((/* implicit */unsigned long long int) (unsigned short)12288)))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (short)5357))))))));
    var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) min((max((((/* implicit */int) (unsigned short)5908)), (max((((/* implicit */int) var_8)), (1516331101))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_2)))))))))));
    var_44 = ((/* implicit */long long int) min((((/* implicit */int) var_5)), (var_4)));
}
