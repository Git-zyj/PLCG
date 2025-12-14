/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7574
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
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [2U] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [i_2 - 1])) ? (arr_11 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5792)))))) || (((/* implicit */_Bool) arr_9 [i_0] [i_1 + 2] [i_2 + 1] [i_3] [i_4 - 1] [3ULL]))));
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)5792)) ? (((/* implicit */unsigned int) -1418575025)) : (255U)));
                        }
                        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) -1346073344);
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) -1418575025)), (arr_11 [i_3]))), (((/* implicit */unsigned int) arr_18 [i_0] [i_1 + 2] [i_2 + 3] [i_1])))))));
                            arr_20 [i_1] [i_1] [i_2 + 1] [8] [i_5 - 2] = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) != (arr_14 [9] [(signed char)1] [(signed char)1] [(signed char)1] [i_5 + 1]))));
                            arr_21 [i_1] [0U] [0U] [i_3] [i_3] = ((unsigned int) (!(((/* implicit */_Bool) arr_8 [i_0 + 2] [i_2 + 3] [i_1] [i_5 + 1]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_26 [i_0] [i_1 + 2] [i_1 + 2] [i_0] [(signed char)2] &= ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] [i_6])), (var_5))))) : ((-(var_2))))) : (((/* implicit */unsigned long long int) ((((min((-759989213), (((/* implicit */int) var_13)))) + (2147483647))) >> (((var_0) + (3606005504328215287LL)))))));
                            arr_27 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_10 [i_1]), (arr_6 [i_1]))))))) ? (((/* implicit */int) ((short) max((((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_3] [i_1])), (arr_3 [(unsigned short)7] [i_1]))))) : (((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_9)), (var_10)))))));
                            arr_28 [i_1] [i_3] = ((/* implicit */unsigned short) var_1);
                            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_3] [i_2] [i_1 + 1] [i_0] [i_0 - 1])) ? (7180889445515227529ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_17 [i_0] [i_1 - 1] [i_1] [i_3] [i_3]) : (((/* implicit */int) (signed char)14)))) : (((/* implicit */int) arr_22 [i_0 + 1] [i_3] [i_1] [i_1 + 1] [i_1 + 2])))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) arr_4 [i_1]))))) ? (((/* implicit */int) arr_10 [i_1])) : (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_22 [i_0 - 2] [i_0] [i_1] [i_2 + 2] [i_1]))))))));
                        }
                        var_16 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_5 [i_1 - 1] [i_0 + 1])) * (((/* implicit */int) arr_23 [i_0 + 2]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */int) arr_30 [(unsigned char)11] [i_9])) >= (((/* implicit */int) arr_6 [i_9])))))));
                        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_7] [i_8])) && (((/* implicit */_Bool) var_7))));
                        var_19 = ((/* implicit */unsigned short) ((unsigned char) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9] [(unsigned char)10]))))));
                        arr_37 [i_0] [4LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_0 - 2] [i_0 + 1]))));
                        var_20 = ((/* implicit */unsigned char) var_11);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                arr_41 [(unsigned short)11] = ((unsigned short) var_0);
                arr_42 [i_0] [i_7] [i_10] [(unsigned char)0] = (~(((((/* implicit */_Bool) (signed char)-14)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_7] [i_10]))))));
            }
        }
    }
    for (long long int i_11 = 3; i_11 < 9; i_11 += 1) /* same iter space */
    {
        arr_46 [i_11 + 1] = max(((+(((/* implicit */int) (short)5786)))), (((/* implicit */int) (unsigned char)154)));
        /* LoopSeq 3 */
        for (short i_12 = 1; i_12 < 7; i_12 += 4) /* same iter space */
        {
            arr_50 [i_11] [i_11] = ((/* implicit */short) (~((-(arr_3 [i_11 - 1] [12ULL])))));
            arr_51 [i_11 - 3] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -887729474)))) * (max((arr_8 [i_11 - 2] [i_11] [(unsigned char)12] [i_11 + 2]), (((/* implicit */unsigned int) arr_18 [i_11 + 2] [i_12 - 1] [i_12] [i_12 + 1]))))));
            arr_52 [i_11 - 3] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(_Bool)0] [i_12 + 1] [i_12 + 4]))) & (((((/* implicit */_Bool) arr_2 [i_11])) ? (((/* implicit */long long int) var_3)) : (arr_34 [i_11] [i_12 + 4] [i_11] [i_12 + 3])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15872))) % (max((((/* implicit */unsigned long long int) (signed char)17)), (var_4))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_30 [2U] [2U])), (arr_3 [6LL] [6LL]))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)135))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                arr_56 [i_12] [2U] [i_12] [i_12] = ((/* implicit */unsigned short) ((arr_17 [i_11] [i_11] [i_11 + 2] [(unsigned short)5] [i_11 - 1]) >= (arr_17 [i_13] [i_13] [i_13] [i_12 + 2] [6])));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)1017)) << (((arr_55 [i_12]) - (1039795820U)))))) ? (((((/* implicit */int) var_9)) >> (((4063232) - (4063221))))) : (((/* implicit */int) arr_47 [i_11 - 1])))))));
            }
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (min((((long long int) var_10)), (((/* implicit */long long int) arr_7 [(unsigned short)8] [(unsigned short)8] [i_12])))) : (((/* implicit */long long int) (+((+(0U))))))));
        }
        for (short i_14 = 1; i_14 < 7; i_14 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_48 [i_11 - 1])))))) ? (arr_4 [i_14]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [i_14 - 1] [i_14 + 1] [i_14 + 1])) - (((/* implicit */int) arr_43 [i_14])))))));
            arr_59 [i_14] [i_14] = ((/* implicit */signed char) ((17375928816794594322ULL) / (((/* implicit */unsigned long long int) 1715256649))));
        }
        for (int i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */_Bool) 17375928816794594322ULL)) ? (((/* implicit */unsigned long long int) 39804583U)) : (var_4))) : (((/* implicit */unsigned long long int) 1715256625)))));
            arr_63 [(short)6] [i_11] [(unsigned char)7] = ((/* implicit */long long int) (((+(arr_53 [i_15] [i_15] [i_15] [i_11 + 2]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_11 - 3])) ? (((/* implicit */int) arr_12 [i_11] [i_11 + 2] [i_15] [i_15])) : (((/* implicit */int) arr_12 [i_11] [i_11 + 1] [i_15] [i_15])))))));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((((/* implicit */_Bool) arr_48 [i_11 - 1])) ? (arr_48 [i_11 - 3]) : (arr_48 [i_11 - 3]))) ^ ((((!(((/* implicit */_Bool) arr_43 [i_15])))) ? (max((arr_55 [i_11]), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))))))));
        }
        var_26 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)2233))))), (arr_32 [i_11 - 1] [i_11 - 1] [i_11]))))) / (((((/* implicit */_Bool) arr_4 [0])) ? (arr_4 [(unsigned short)4]) : (arr_4 [10U])))));
    }
    for (long long int i_16 = 3; i_16 < 9; i_16 += 1) /* same iter space */
    {
        arr_66 [i_16] = ((/* implicit */short) 1521273632381210230ULL);
        /* LoopSeq 2 */
        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
        {
            var_27 -= ((/* implicit */unsigned short) arr_45 [i_16] [i_16]);
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 11; i_18 += 2) 
            {
                for (unsigned short i_19 = 0; i_19 < 11; i_19 += 2) 
                {
                    {
                        arr_75 [i_16 - 1] [i_17] [i_18] [i_19] = ((/* implicit */int) ((unsigned short) ((int) var_11)));
                        var_28 ^= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_19] [i_18] [(unsigned char)1] [i_16 + 2] [i_16]))))) : (max((((/* implicit */int) arr_47 [i_19])), (arr_17 [i_16] [i_16] [i_18] [i_19] [i_18]))))));
                        arr_76 [9U] [i_16] [10LL] [10LL] [i_18] [i_19] &= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_1 [i_16 - 3])) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_19] [i_18]))) | (var_4))))) & (((/* implicit */unsigned long long int) arr_36 [i_16] [i_16] [i_18] [i_19]))));
                    }
                } 
            } 
            var_29 &= ((((/* implicit */int) (unsigned char)15)) / ((~(((/* implicit */int) arr_13 [i_17] [i_17] [(unsigned char)3] [(signed char)13] [i_16] [i_16])))));
        }
        for (unsigned int i_20 = 1; i_20 < 7; i_20 += 4) 
        {
            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2147483648U)))) ? (((/* implicit */unsigned long long int) (-(var_8)))) : (((((/* implicit */unsigned long long int) 410099876)) + (var_2)))))) ? (max((2147483653U), (((/* implicit */unsigned int) ((-1715256650) / (((/* implicit */int) arr_24 [i_20] [i_16] [3] [i_20] [i_20 + 3]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((arr_25 [12U] [12U] [12U] [12U] [12U] [i_20]), (arr_25 [i_20 + 2] [i_16] [i_20] [i_16 + 1] [i_16 - 1] [i_16]))))))));
            var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) >> (((arr_55 [i_16 - 2]) - (1039795795U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) % (arr_11 [i_20 + 3]))))))) : (var_6)));
        }
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_69 [i_16 - 3] [i_16]))))))) - (((arr_48 [i_16]) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_58 [6U]))))))))));
    }
    /* LoopNest 2 */
    for (int i_21 = 2; i_21 < 12; i_21 += 2) 
    {
        for (short i_22 = 0; i_22 < 15; i_22 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_23 = 2; i_23 < 12; i_23 += 4) 
                {
                    var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_80 [i_22]))));
                    arr_87 [i_21] [i_22] [i_23] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) -1715256650)))), (((((/* implicit */unsigned long long int) ((31U) ^ (((/* implicit */unsigned int) var_6))))) <= (max((var_4), (((/* implicit */unsigned long long int) arr_84 [i_22] [i_22] [i_23]))))))));
                    arr_88 [i_21] [i_21] [i_22] [i_23] = ((/* implicit */unsigned char) arr_86 [i_21]);
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_79 [i_23 - 2] [i_21 - 2]), (arr_79 [i_23 + 1] [i_21 + 3]))))) + ((+(((((/* implicit */unsigned long long int) var_11)) - (1070815256914957293ULL))))))))));
                }
                for (int i_24 = 0; i_24 < 15; i_24 += 4) 
                {
                    arr_93 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) (+(var_8))))), (((((/* implicit */_Bool) 1311239686U)) ? (1715256638) : (((/* implicit */int) (unsigned char)254))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_25 = 4; i_25 < 14; i_25 += 1) 
                    {
                        arr_96 [i_21 - 1] [i_22] [i_24] [i_22] [i_22] = ((/* implicit */unsigned char) arr_81 [i_22]);
                        arr_97 [i_24] [i_24] [i_24] [i_21 - 2] &= max((((unsigned long long int) 1070815256914957309ULL)), (((/* implicit */unsigned long long int) (~((~(var_0)))))));
                        var_35 = ((/* implicit */unsigned short) ((unsigned int) arr_92 [i_21] [i_22] [i_24] [i_21]));
                    }
                    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_82 [i_21] [i_22])))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2)))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) arr_83 [i_22] [i_22] [i_24])) >> (((((/* implicit */int) var_13)) - (17352)))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) / (453960734U)))) ? (arr_84 [i_22] [i_22] [i_22]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_95 [i_24] [(signed char)6] [i_24] [(signed char)6] [(signed char)6])), (var_11))))))));
                    arr_98 [(unsigned short)4] [i_22] [i_22] [i_22] = ((/* implicit */_Bool) ((int) var_7));
                }
                arr_99 [i_21] [i_22] = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_81 [i_22])) <= (((/* implicit */int) (unsigned short)59267)))))))), (arr_90 [i_22] [i_21] [i_21 - 1] [i_21])));
                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) max(((+(min((((/* implicit */unsigned long long int) var_13)), (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) 1715256638)) : (arr_89 [i_21])))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_21] [i_21] [i_21 - 1])))))))))));
            }
        } 
    } 
}
