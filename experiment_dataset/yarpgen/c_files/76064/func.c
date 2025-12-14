/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76064
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
    var_16 = ((/* implicit */long long int) ((unsigned long long int) var_2));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned short) max((((/* implicit */signed char) arr_5 [i_1 + 1])), (((signed char) arr_5 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((_Bool) arr_12 [0U] [i_1 + 2] [i_3 + 2] [i_1 + 2] [i_1 + 2] [i_0]));
                                arr_13 [7ULL] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */int) max((((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) arr_3 [i_0]))))) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) arr_0 [i_1 + 1]))));
                                var_19 = ((/* implicit */unsigned long long int) arr_7 [i_2]);
                                var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)5139)) || (((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (unsigned short)44362)))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */_Bool) ((signed char) min((var_9), (((/* implicit */int) var_4)))));
                    var_21 = ((/* implicit */unsigned char) arr_11 [i_0] [i_2] [i_1 + 1] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_21 [i_2] [i_5] [i_1] [i_1] [i_2] = ((/* implicit */long long int) var_5);
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [i_0] [(signed char)1])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 13; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) arr_27 [i_7] [(signed char)8]);
                    arr_31 [i_7] [i_7] [i_7 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_7 - 2])) ? (arr_23 [i_8] [i_8]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_28 [i_9] [i_7] [i_7] [i_7]), (((/* implicit */unsigned short) arr_26 [i_7 - 2] [i_7 - 2] [i_9]))))))))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) 7917691981637819924ULL);
                                var_25 = ((/* implicit */int) var_11);
                                var_26 = (!((!(((/* implicit */_Bool) arr_34 [(_Bool)0] [i_7 - 1] [0LL] [(_Bool)1])))));
                            }
                        } 
                    } 
                    arr_40 [i_7 - 1] [i_8] [i_7 - 1] [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((_Bool) arr_28 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))), (((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [i_7] [i_8] [i_10]))) >= (var_0))))));
                    var_27 = ((/* implicit */unsigned char) arr_24 [i_10]);
                }
                /* LoopSeq 4 */
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    var_28 = ((/* implicit */long long int) (_Bool)1);
                    arr_44 [i_13] [i_8] [i_7] [i_7] = ((/* implicit */unsigned int) (+(((arr_26 [i_7 + 1] [i_8] [i_13]) ? (((/* implicit */int) arr_26 [i_7 - 2] [i_8] [i_13])) : (((/* implicit */int) arr_22 [i_13]))))));
                }
                for (unsigned int i_14 = 1; i_14 < 12; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 3; i_15 < 12; i_15 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)21174))));
                        var_30 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((int) arr_30 [i_7] [i_7] [i_7])) : (((/* implicit */int) min(((unsigned short)37206), (((/* implicit */unsigned short) arr_42 [i_7 - 1] [1] [i_7] [i_7]))))))))));
                    }
                    var_31 += ((/* implicit */_Bool) var_12);
                    /* LoopSeq 1 */
                    for (long long int i_16 = 2; i_16 < 13; i_16 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_38 [i_16] [i_8] [(_Bool)1] [12ULL] [i_8] [i_7])) ? (((/* implicit */long long int) arr_24 [i_16])) : (((arr_32 [i_8] [i_8] [i_8]) % (((/* implicit */long long int) ((/* implicit */int) var_12))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_8] [i_16])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_7] [i_8] [i_14 + 2] [i_16 - 1])) - (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 17363383366541789658ULL)) ? (2744005868U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21155))))))))));
                        arr_52 [i_16 + 1] [i_14] [i_8] [i_14] [i_7] = ((/* implicit */signed char) arr_38 [i_7] [i_8] [i_14] [i_14] [i_7] [i_16]);
                    }
                    var_33 = ((/* implicit */short) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                }
                for (int i_17 = 4; i_17 < 11; i_17 += 3) 
                {
                    arr_55 [(signed char)5] [10ULL] [10ULL] = ((/* implicit */short) ((((/* implicit */_Bool) 557785786)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21174))) : (7917691981637819924ULL)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        arr_60 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7 + 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_57 [i_7] [i_7] [10U] [i_7] [i_7] [i_7]))))) : (arr_33 [i_17 - 4] [i_7 - 2] [i_7] [i_7])));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7] [i_7 + 1] [i_17 + 2] [i_7])) ? (((/* implicit */int) arr_26 [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_53 [i_7] [i_7] [i_17 - 2]))));
                        arr_61 [i_18] [i_17] [i_8] [i_7 - 2] = (-(((/* implicit */int) (unsigned char)180)));
                        arr_62 [(_Bool)1] [i_8] [i_8] [(_Bool)1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_47 [i_18]))));
                    }
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) (!(var_14)));
                        arr_67 [i_7 - 1] [(signed char)3] [i_17 + 2] [i_19] &= ((/* implicit */_Bool) 3485093932630379889ULL);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 14; i_20 += 3) 
                    {
                        for (signed char i_21 = 2; i_21 < 13; i_21 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1084297753U)) ? (1550961422U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4096)))))) ? (((/* implicit */int) ((unsigned short) arr_27 [i_8] [i_7]))) : (((((/* implicit */int) (signed char)78)) - (var_9))))))));
                                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13049678995978487942ULL)) ? (((/* implicit */int) arr_43 [(short)6] [2ULL] [i_20] [i_21])) : (((/* implicit */int) arr_65 [i_7]))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_11))))) : (((/* implicit */int) ((arr_32 [(unsigned char)3] [i_8] [8ULL]) <= (((/* implicit */long long int) arr_56 [2LL] [i_20] [i_17] [2LL] [i_7])))))))) ? (((unsigned long long int) (~(((/* implicit */int) (unsigned short)8535))))) : (((((/* implicit */_Bool) arr_39 [9ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7] [i_7 + 1] [i_17]))) : (arr_51 [i_7 + 1] [i_7 + 1] [i_8] [i_7 + 1])))));
                                var_38 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_37 [i_21 - 1] [i_17 + 1] [i_8] [i_7]))))))) ? (((/* implicit */int) ((signed char) arr_64 [i_17] [i_17] [i_17 + 1] [2U]))) : (((/* implicit */int) (!(var_15))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_22 = 3; i_22 < 10; i_22 += 1) 
                {
                    arr_77 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((short) arr_47 [2LL]));
                    arr_78 [i_8] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_6)))) : (((/* implicit */int) ((short) arr_29 [i_8] [i_7])))))), (((((/* implicit */_Bool) ((signed char) var_4))) ? (var_0) : (((/* implicit */long long int) arr_50 [i_22 - 1]))))));
                    var_39 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_74 [i_22 + 3] [i_22] [(_Bool)1] [i_22 + 3]) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (0LL))))))), (arr_46 [i_22] [i_22])));
                }
                /* LoopSeq 1 */
                for (unsigned int i_23 = 2; i_23 < 13; i_23 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_0))))));
                                var_41 = ((/* implicit */int) ((((_Bool) var_1)) ? (arr_45 [i_8] [i_23 + 1] [i_24] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1152921504606322688LL)) > (arr_45 [i_7] [(_Bool)1] [i_23 - 1] [i_25]))))) > (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) 1152921504606322688LL)) : (14961650141079171727ULL)))))))));
                                arr_86 [8U] [8U] [i_25] [i_24] [(unsigned short)13] = ((var_3) >= (((long long int) (-(((/* implicit */int) arr_22 [i_7]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_26 = 0; i_26 < 14; i_26 += 3) 
                    {
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (((((/* implicit */_Bool) arr_28 [i_23] [i_23] [i_23] [i_23])) ? (arr_70 [i_26] [12U] [(_Bool)1] [12U] [i_8] [i_7 - 2]) : (((/* implicit */unsigned long long int) arr_33 [i_7 + 1] [i_7 + 1] [i_8] [i_8]))))))) ? (max((arr_39 [i_7 - 2]), (((/* implicit */unsigned int) arr_73 [i_7] [i_7] [i_7] [8LL] [8LL])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_43 = arr_65 [i_26];
                        var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) arr_49 [i_23 - 1] [(unsigned short)4] [(signed char)0] [(unsigned short)4] [i_23])))));
                    }
                    for (long long int i_27 = 0; i_27 < 14; i_27 += 2) 
                    {
                        var_45 = ((/* implicit */short) ((int) ((signed char) arr_72 [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_23 - 1])));
                        /* LoopSeq 1 */
                        for (int i_28 = 0; i_28 < 14; i_28 += 2) 
                        {
                            arr_95 [6ULL] [i_27] [i_23 - 1] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_75 [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_25 [i_23])) : (((/* implicit */int) ((signed char) min((arr_43 [i_28] [i_23] [i_23] [11LL]), (var_15)))))));
                            var_46 = ((/* implicit */_Bool) arr_29 [i_7] [i_7]);
                            arr_96 [i_28] [i_28] [i_27] [i_23] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) % (((min((((/* implicit */long long int) var_5)), (var_0))) - (((/* implicit */long long int) ((4092399551U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_23] [i_27] [(short)2] [i_27] [i_28] [i_28]))))))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                        {
                            arr_100 [i_7] [i_7] [i_8] [i_8] [(_Bool)1] [i_29] [(_Bool)1] = ((/* implicit */short) (_Bool)0);
                            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) arr_22 [i_27]))), (((((/* implicit */int) (unsigned char)255)) << (((1002920731U) - (1002920724U)))))))) : (max((((/* implicit */unsigned long long int) var_9)), (arr_38 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7] [i_29 - 1] [i_29])))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_30 = 4; i_30 < 11; i_30 += 2) 
                        {
                            arr_103 [i_7] [i_8] [i_23 + 1] [i_27] [i_30 + 3] = ((/* implicit */int) arr_101 [i_7] [i_8] [i_7] [i_7] [i_30 - 2]);
                            arr_104 [i_7] = min((min((arr_66 [i_7] [i_7 + 1] [i_7] [i_7 - 2] [i_30 + 1] [i_30]), (arr_66 [9ULL] [i_7] [(_Bool)1] [i_7 + 1] [i_30 - 1] [(short)7]))), (arr_66 [i_7] [i_7] [i_7] [i_7 - 1] [i_30 - 1] [i_30 + 1]));
                        }
                        for (unsigned short i_31 = 0; i_31 < 14; i_31 += 2) 
                        {
                            var_48 = ((/* implicit */short) var_13);
                            var_49 = ((/* implicit */signed char) arr_29 [i_7] [i_7]);
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_32 = 0; i_32 < 14; i_32 += 3) 
                    {
                        arr_110 [i_7] [(short)0] [(short)0] [i_32] [i_32] [i_32] = ((/* implicit */_Bool) arr_34 [i_7] [i_8] [i_8] [i_32]);
                        var_50 = ((/* implicit */long long int) ((arr_92 [i_7 - 2] [i_8] [i_8] [i_7 - 2] [i_23 - 1]) ? (arr_85 [i_7 - 2] [i_8] [i_8] [i_23] [i_32] [i_32] [i_32]) : (arr_85 [i_7] [i_7] [i_7] [i_7] [i_32] [i_7] [i_7])));
                    }
                }
                var_51 = ((/* implicit */unsigned short) arr_68 [(_Bool)1] [(_Bool)1] [i_8] [(_Bool)1]);
            }
        } 
    } 
}
