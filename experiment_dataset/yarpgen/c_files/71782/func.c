/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71782
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
    var_15 = var_12;
    var_16 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) max((var_8), ((unsigned char)207)))) || (((/* implicit */_Bool) var_0)))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)37217)) ? (((/* implicit */unsigned int) (+(((var_7) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))))) : (((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28319)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (min((arr_2 [i_0 + 1]), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_2 [i_0 - 1])))) ? (((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) : (((/* implicit */int) arr_1 [i_0 + 1]))));
        arr_5 [i_0] = var_14;
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_10 [(unsigned short)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (arr_8 [(signed char)11]) : (((/* implicit */unsigned int) ((int) (unsigned short)28329)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            arr_13 [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_7 [i_1 + 2]))))));
            arr_14 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_6 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [1U] [(signed char)8])) ^ (((/* implicit */int) arr_9 [i_2])))))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            arr_24 [i_1 + 2] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) arr_12 [i_1] [i_1 + 2] [i_3]);
                            arr_25 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_29 [i_1 + 1] [i_1] [(unsigned char)15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_6 - 1]) : (arr_6 [i_6 - 1])));
                arr_30 [i_2] [i_2] [i_2 - 1] = ((/* implicit */unsigned int) arr_6 [(unsigned char)1]);
                arr_31 [i_1] [3U] [i_2] [(signed char)12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_2 + 2] [i_6] [i_1]))));
            }
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                arr_35 [1ULL] [i_1] = ((/* implicit */unsigned short) arr_8 [i_1 + 1]);
                arr_36 [i_2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_28 [i_1])) ? (arr_17 [i_1] [12ULL] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40834))))));
                arr_37 [i_1] [i_2] [i_2] [i_7] = ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) arr_9 [i_2])) : ((~(((/* implicit */int) var_0))))));
                arr_38 [i_1] [i_2 - 2] [i_7] [i_1] = ((/* implicit */_Bool) (unsigned short)28319);
            }
            arr_39 [i_1] [i_1] = arr_27 [i_2 + 2] [i_2 - 1] [i_1];
        }
        arr_40 [i_1] [i_1] = ((/* implicit */_Bool) ((arr_11 [i_1 + 2] [i_1 + 2]) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (signed char)3))));
        arr_41 [(_Bool)0] [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)40834)) - (((/* implicit */int) (unsigned char)69))));
    }
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_45 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)108)) ? (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) arr_9 [(short)0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_8])))))));
        arr_46 [(_Bool)1] [i_8] = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)16869))))), ((+(((/* implicit */int) (short)13972)))))));
        /* LoopSeq 3 */
        for (unsigned short i_9 = 2; i_9 < 14; i_9 += 2) 
        {
            arr_50 [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(unsigned short)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)24702)) * (((/* implicit */int) arr_44 [i_8]))))))) : (arr_17 [i_9] [i_9] [i_9])));
            /* LoopSeq 3 */
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                arr_55 [i_8] [i_10] = ((/* implicit */unsigned int) ((signed char) max((var_1), (((/* implicit */unsigned long long int) var_8)))));
                arr_56 [i_8] [(signed char)3] [i_8] [i_10] = ((/* implicit */unsigned char) max((var_6), (arr_12 [i_10] [i_9] [i_10])));
                arr_57 [i_8] [i_8] [i_10] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)28324))))))))));
                arr_58 [(_Bool)1] [i_9 + 1] [i_10] [i_10] = ((/* implicit */_Bool) ((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_8] [i_9 + 1] [i_10] [i_9 + 1]))))), (arr_15 [i_10] [i_9 - 2] [i_8]))) << (((((((/* implicit */_Bool) var_6)) ? (((arr_26 [i_8] [i_10]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(unsigned short)14] [(unsigned short)14] [(_Bool)1] [i_9 - 1]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_52 [i_8] [i_8] [i_9] [i_10]))))))) - (22U)))));
                arr_59 [i_8] [i_8] [i_8] [(signed char)6] = ((/* implicit */long long int) var_10);
            }
            for (short i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                arr_63 [i_8] [i_8] [i_8] = (!(((/* implicit */_Bool) min((arr_43 [i_9 - 2] [i_8]), (arr_43 [i_9 + 1] [i_9])))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    for (unsigned short i_13 = 4; i_13 < 14; i_13 += 2) 
                    {
                        {
                            arr_71 [(_Bool)1] [(_Bool)1] [(_Bool)1] [12U] [14U] [i_9 - 2] &= ((/* implicit */unsigned short) arr_18 [i_8] [(signed char)1] [i_8]);
                            arr_72 [(_Bool)1] [i_9 - 1] [i_11] [i_13] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_43 [12LL] [i_13])), ((-(((((/* implicit */int) var_8)) + (((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_14 = 2; i_14 < 13; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    for (short i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        {
                            arr_83 [4LL] [(unsigned short)8] [i_14] [i_14] [i_9] [i_8] [i_8] = ((/* implicit */_Bool) arr_20 [(unsigned short)12] [i_9] [3] [i_8]);
                            arr_84 [i_16] [i_15] [i_14 - 1] [i_9] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)13972)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_14 - 2] [i_14 - 2] [i_8]))) : (1937431357U)))));
                        }
                    } 
                } 
                arr_85 [i_8] [i_14] = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (1317329284006246458ULL))));
            }
            arr_86 [i_8] [i_8] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
            arr_87 [i_9] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-22745)) + (((((/* implicit */int) arr_22 [i_9] [i_9])) / (((/* implicit */int) arr_22 [i_9] [i_9]))))));
        }
        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) 
        {
            arr_90 [i_8] [i_8] = ((/* implicit */unsigned int) ((arr_17 [(_Bool)1] [(_Bool)1] [i_8]) & (arr_17 [i_8] [i_17] [i_17])));
            arr_91 [i_8] [i_17] [i_8] &= ((/* implicit */unsigned long long int) (-(min((4278565791U), (((/* implicit */unsigned int) (unsigned char)64))))));
            arr_92 [i_8] = ((/* implicit */short) arr_62 [i_8] [(unsigned char)2]);
            arr_93 [i_8] [(unsigned char)4] [(_Bool)1] = ((/* implicit */signed char) ((min((min((((/* implicit */unsigned long long int) var_4)), (arr_47 [i_8] [i_17]))), (((/* implicit */unsigned long long int) arr_33 [i_8] [i_8] [i_8] [(unsigned char)6])))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-2)) * (((/* implicit */int) arr_18 [2] [i_8] [i_8]))))) : (arr_26 [i_8] [i_17]))))));
        }
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            arr_97 [i_18] [i_8] = ((/* implicit */int) var_14);
            arr_98 [i_8] [i_8] &= ((/* implicit */short) (+(max((arr_73 [i_8] [i_18 - 1]), (4278565796U)))));
            arr_99 [i_18] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_8])) ? ((~(((/* implicit */int) (!(arr_75 [i_8] [i_18])))))) : (((/* implicit */int) arr_51 [(signed char)11] [i_18] [9U] [i_8]))));
        }
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        arr_102 [i_19] = 1317329284006246458ULL;
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                {
                    arr_107 [i_21] [i_21] = ((/* implicit */_Bool) var_0);
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 14; i_22 += 3) 
                    {
                        for (unsigned short i_23 = 3; i_23 < 13; i_23 += 1) 
                        {
                            {
                                arr_113 [i_19] [i_19] [i_19] [i_22] = ((/* implicit */unsigned long long int) arr_100 [i_20]);
                                arr_114 [(unsigned char)6] [i_19] [i_20] [i_20] [i_21] [i_21] [(_Bool)1] = ((/* implicit */int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)40819))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 359961451222799004ULL)))) : (4278565791U))), (((/* implicit */unsigned int) (~(((((((/* implicit */int) (short)-25013)) + (2147483647))) << (((((/* implicit */int) arr_51 [i_19] [0U] [(unsigned char)12] [(unsigned char)12])) - (14383))))))))));
                                arr_115 [i_20] [i_22] [i_20] = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned long long int) arr_76 [i_19] [i_20] [i_21] [3] [i_23])), (arr_19 [(_Bool)1]))));
                            }
                        } 
                    } 
                    arr_116 [5] [i_20] [i_21] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) + (((unsigned int) 269246891536064401ULL))))), (((((/* implicit */_Bool) min((3458267302U), (((/* implicit */unsigned int) arr_9 [i_21]))))) ? (min((((/* implicit */unsigned long long int) var_8)), (arr_32 [0U] [(unsigned char)2] [(signed char)12] [i_21]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)40839)) : (((/* implicit */int) arr_69 [i_19] [i_19] [i_19] [(unsigned short)1] [i_21])))))))));
                }
            } 
        } 
    }
}
