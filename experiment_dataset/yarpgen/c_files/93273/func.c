/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93273
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
    var_13 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_14 -= ((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (arr_0 [(_Bool)1] [i_0])));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_15 *= ((/* implicit */short) max((arr_1 [(unsigned short)12]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [(unsigned char)13] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_1])) > (arr_4 [i_1])))))))));
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_4 [i_1])) : (arr_1 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
        var_16 += ((/* implicit */_Bool) (unsigned short)53614);
    }
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [(signed char)19]))) : (4245183347858460089LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((+(((arr_8 [i_2] [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                    {
                        arr_19 [i_2] [i_4] [i_5] [(unsigned char)8] [i_6] [i_7] = ((/* implicit */signed char) arr_15 [i_4] [i_5] [i_6] [i_7]);
                        arr_20 [i_2] [i_4] [5] [i_6] [i_6] [2LL] = (_Bool)1;
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                    {
                        arr_25 [i_2] [i_4] [i_5] [i_6] [i_8] = ((/* implicit */unsigned int) (_Bool)1);
                        var_19 &= ((/* implicit */unsigned char) ((arr_16 [i_2] [i_2]) + (((/* implicit */unsigned int) var_12))));
                        arr_26 [i_2] [i_5] [i_6] [i_8] = ((/* implicit */unsigned int) (signed char)40);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */short) ((arr_8 [i_4] [i_9]) > (((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [12ULL]) < (((/* implicit */int) var_10))))))));
                        var_21 &= ((/* implicit */unsigned long long int) var_6);
                        arr_29 [i_2] [i_5] [i_4] [i_5] [i_9] = ((/* implicit */long long int) arr_11 [i_2] [2LL] [i_2]);
                    }
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)20643))))))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        arr_37 [i_2] [i_11] [i_5] [i_5] [i_10] [i_11] = ((/* implicit */signed char) ((unsigned char) (short)-1));
                        var_23 *= ((/* implicit */_Bool) (+(arr_8 [i_2] [i_4])));
                    }
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_2] [i_4] [i_4] [i_4] [i_4] [i_5] [i_10])) * (((/* implicit */int) arr_34 [i_2] [i_2] [i_4] [i_4] [i_5] [22U] [18ULL]))));
                }
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    arr_40 [i_2] [i_5] [(short)17] [i_12] [22ULL] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_2] [i_5] [i_5] [i_2] [i_12] [i_4]))));
                    var_25 -= ((/* implicit */unsigned char) (!(((var_2) || (((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4]))))));
                    arr_41 [i_2] [i_12] [i_5] = ((/* implicit */short) (((!((_Bool)1))) ? ((~(arr_8 [(_Bool)1] [(_Bool)1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)26080)))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) arr_28 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                    arr_44 [i_2] [i_4] [i_4] [(signed char)18] [i_13] [i_13] = arr_11 [i_2] [i_13] [i_5];
                }
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    var_27 += ((/* implicit */signed char) arr_43 [i_5]);
                    arr_48 [i_4] [i_4] [(short)10] = var_7;
                    var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_33 [i_14] [(signed char)24]))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_42 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */int) var_2)) * (arr_22 [i_2] [i_5] [i_5] [i_14]))))));
                }
                for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    arr_53 [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)11079)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_6 [i_5]))) : (2992265834U)));
                    var_30 = ((/* implicit */unsigned long long int) arr_50 [i_2] [i_2] [i_2] [22ULL]);
                }
                /* LoopSeq 2 */
                for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        arr_60 [i_2] [(unsigned char)16] [i_17] [i_5] [i_17] = ((/* implicit */short) arr_13 [(short)19]);
                        arr_61 [i_2] [i_2] [i_5] [(unsigned char)20] [i_17] |= ((/* implicit */unsigned int) var_10);
                    }
                    arr_62 [i_2] [14ULL] [i_4] [i_5] [i_16] = ((/* implicit */short) (_Bool)1);
                }
                for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
                {
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [4] [i_4])) ? (var_12) : (((/* implicit */int) var_0))))) > (-1LL))))));
                    arr_66 [i_2] [i_2] [i_5] [(unsigned char)18] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [(short)6] [i_4] [23U] [i_18])) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3853)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))));
                }
            }
            for (unsigned int i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned long long int) (_Bool)1);
                /* LoopSeq 4 */
                for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    var_33 = ((/* implicit */unsigned short) var_12);
                    /* LoopSeq 2 */
                    for (signed char i_21 = 0; i_21 < 25; i_21 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2])) < (((/* implicit */int) arr_7 [i_19]))));
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_47 [i_19] [i_19])))))));
                        var_36 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) var_4)))));
                    }
                    for (signed char i_22 = 0; i_22 < 25; i_22 += 4) /* same iter space */
                    {
                        var_37 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (((((/* implicit */_Bool) arr_18 [i_22])) ? (arr_16 [i_4] [i_19]) : (((/* implicit */unsigned int) var_12))))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */int) arr_64 [i_19] [i_4] [i_2])) | (((/* implicit */int) var_9))));
                        arr_77 [i_22] [i_4] [i_19] [i_20] [i_22] [i_2] = ((/* implicit */int) (+(arr_11 [i_2] [i_20] [i_22])));
                    }
                    var_39 = ((/* implicit */short) ((unsigned char) ((arr_8 [i_20] [i_20]) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                }
                for (unsigned int i_23 = 0; i_23 < 25; i_23 += 4) /* same iter space */
                {
                    arr_81 [i_2] [i_4] [i_19] [i_23] &= ((/* implicit */int) (+(arr_39 [i_4] [i_4] [(unsigned short)16] [i_23])));
                    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((4U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_2] [i_4] [i_23] [i_23] [(unsigned short)2]))))))));
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)20643)) | (((/* implicit */int) arr_31 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                }
                for (unsigned int i_24 = 0; i_24 < 25; i_24 += 4) /* same iter space */
                {
                    arr_86 [i_2] [i_2] [2ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_75 [i_2] [(signed char)16] [i_4] [(signed char)10] [i_4] [i_19] [i_24])) << (((((/* implicit */int) var_10)) - (26919)))));
                    arr_87 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_4] [i_4] [i_4] [i_4] [i_4])) | (((/* implicit */int) arr_49 [i_2] [i_4] [i_19] [(unsigned char)21]))))) ? (((/* implicit */int) ((unsigned short) arr_49 [i_2] [i_4] [i_19] [i_19]))) : (((/* implicit */int) arr_67 [i_24] [i_24] [i_24] [i_24]))));
                }
                for (int i_25 = 0; i_25 < 25; i_25 += 1) 
                {
                    arr_90 [i_2] [i_4] [i_4] [i_4] [i_19] [i_25] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_25] [i_19] [i_4] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) < (arr_11 [21LL] [i_4] [(signed char)0])));
                    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) arr_51 [i_2] [i_4] [i_19] [i_19] [i_25]))));
                    arr_91 [i_2] [i_4] [(signed char)0] [i_25] = ((/* implicit */signed char) arr_8 [i_2] [i_2]);
                    arr_92 [i_2] [i_4] [i_19] [i_25] = ((/* implicit */unsigned int) ((int) arr_21 [i_25] [i_4] [i_2]));
                    /* LoopSeq 1 */
                    for (int i_26 = 0; i_26 < 25; i_26 += 4) 
                    {
                        arr_95 [i_26] [i_4] = ((/* implicit */long long int) arr_70 [i_2]);
                        var_43 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_19] [i_26]))));
                        var_44 = ((/* implicit */unsigned char) var_11);
                        arr_96 [i_2] [4] [i_25] [i_26] = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [(unsigned short)3] [i_25] [i_19] [i_19] [5LL] [i_2])) != (((/* implicit */int) arr_17 [11] [(_Bool)1] [i_19] [i_25] [i_2] [i_26]))));
                    }
                }
            }
            var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_10)) == (arr_22 [i_4] [i_4] [i_2] [i_2])))) <= (((/* implicit */int) (short)11079))));
            arr_97 [i_2] [i_2] [i_4] = ((/* implicit */long long int) var_10);
            /* LoopSeq 1 */
            for (short i_27 = 0; i_27 < 25; i_27 += 4) 
            {
                var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_56 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_56 [i_2] [i_4] [i_27] [i_4])) : (((/* implicit */int) var_11))));
                var_47 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                arr_101 [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_69 [i_2] [i_2] [i_4] [i_2]);
                var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_10 [i_2] [i_2])))))));
            }
        }
        for (long long int i_28 = 0; i_28 < 25; i_28 += 4) 
        {
            arr_104 [i_2] = ((/* implicit */unsigned int) var_4);
            /* LoopNest 3 */
            for (unsigned long long int i_29 = 0; i_29 < 25; i_29 += 4) 
            {
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    for (unsigned long long int i_31 = 0; i_31 < 25; i_31 += 4) 
                    {
                        {
                            arr_114 [i_2] [i_30] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((long long int) arr_83 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_93 [i_2] [i_28] [24U] [i_30]))) : ((-(var_5)))));
                            var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) arr_45 [i_2] [i_31] [(signed char)21] [i_30]))));
                            arr_115 [i_30] [i_30] [i_28] [i_29] [i_28] [i_30] [i_30] = ((/* implicit */unsigned int) var_2);
                            var_50 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_30]))) >= (arr_76 [i_29] [i_29] [i_29] [i_29]))) ? (-1LL) : (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_30] [1U] [i_29] [i_29] [(unsigned char)8] [i_30] [i_29]))) < (arr_84 [i_28] [i_31]))) ? (((/* implicit */int) arr_23 [i_28])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [24U] [(short)18]))))))))));
                            var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (short)15847)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_31] [(unsigned short)18] [(unsigned short)18] [i_2] [i_28] [i_2]))) : ((+(var_5))))))));
                        }
                    } 
                } 
            } 
        }
        var_52 += ((/* implicit */unsigned long long int) arr_13 [i_2]);
    }
}
