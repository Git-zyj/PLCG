/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5594
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_10 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((arr_1 [(_Bool)1]), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((arr_0 [i_0]) | (((/* implicit */int) var_9)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))))))));
        var_11 = ((/* implicit */signed char) max(((-(var_1))), (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_5))))) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = min((((/* implicit */long long int) var_3)), (arr_1 [i_0]));
        arr_3 [i_0] [i_0] &= ((/* implicit */signed char) (((_Bool)0) && (((/* implicit */_Bool) ((arr_1 [i_0]) / (var_7))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_12 = ((/* implicit */_Bool) var_0);
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (min((((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) arr_4 [5U])))), (-1493749665))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_1])) : (var_0))), (((/* implicit */int) arr_4 [i_1]))))));
        var_14 = ((((/* implicit */int) arr_5 [i_1])) & (-1493749665));
        var_15 = min((((((/* implicit */_Bool) ((long long int) arr_4 [2]))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)17)) || (var_8)))))), ((((~(((/* implicit */int) arr_4 [i_1])))) | (((/* implicit */int) (signed char)8)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_6)), (arr_6 [i_2] [i_2]))), (((/* implicit */long long int) arr_7 [i_2]))))) ? (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) arr_9 [i_2])), (arr_8 [i_2] [i_2])))))) : (min((((/* implicit */long long int) (+(((/* implicit */int) var_2))))), ((+(var_7)))))));
        arr_10 [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)26913)))))), (arr_8 [i_2] [i_2])));
        arr_11 [i_2] = ((/* implicit */long long int) var_9);
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (int i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_5] [i_5 - 1])) || ((!(((/* implicit */_Bool) arr_17 [i_4] [i_5 - 1]))))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_9))))) ? (min((arr_8 [i_2] [i_3]), (((/* implicit */unsigned int) arr_15 [i_5 + 1] [i_2] [i_3] [i_2])))) : (((/* implicit */unsigned int) -1493749665))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [(unsigned char)8] [i_3] [i_3] [i_4] [i_5])) / (var_6)))) ? (((((/* implicit */_Bool) 4089077584934157813LL)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_13 [i_2] [i_5])))) : (var_6))) : (arr_9 [i_4]))))));
                        arr_21 [i_2] [i_2] [i_3] [i_4] [i_4] [i_2] = ((/* implicit */_Bool) arr_8 [i_2] [i_3]);
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5 - 1] [i_4] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_15 [i_5 - 1] [i_3] [i_4] [3U])) : (((/* implicit */int) arr_18 [i_5 - 1] [i_2] [i_4] [i_5 - 1] [(signed char)15]))))) ? (min((((((/* implicit */_Bool) arr_17 [i_2] [i_3])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2]))))), (var_7))) : (((/* implicit */long long int) (+(arr_9 [i_5 + 1]))))));
                        var_20 = ((/* implicit */unsigned int) ((unsigned short) var_1));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_7 = 1; i_7 < 11; i_7 += 3) 
        {
            arr_27 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((1722790614) | (((/* implicit */int) var_8)))), (((int) arr_8 [i_6] [(unsigned char)6]))))) ? ((+(((var_8) ? (((/* implicit */int) arr_26 [i_6] [i_7] [10U])) : (var_6))))) : (((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [i_7] [i_7]))));
            /* LoopNest 2 */
            for (signed char i_8 = 2; i_8 < 12; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    {
                        var_21 &= ((/* implicit */signed char) arr_20 [i_7] [i_7 - 1] [i_7 + 3] [i_8 + 1] [i_7 - 1]);
                        arr_34 [i_6] [i_7] [i_7] [i_9] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_6 [i_8 + 2] [i_9]))));
                    }
                } 
            } 
        }
        for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_22 = (((+(((/* implicit */int) (unsigned short)26047)))) ^ (((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [i_10] [i_10])));
            var_23 |= ((/* implicit */_Bool) var_0);
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)26913))))), (2903890644135626096ULL)))) ? (((/* implicit */int) ((short) arr_25 [i_6] [i_6] [i_10]))) : (max((((((/* implicit */int) (unsigned short)39488)) * (((/* implicit */int) (unsigned char)198)))), (((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) arr_17 [i_6] [i_10])) : (var_0))))))))));
        }
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_54 [i_6] [i_6] [i_11] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */long long int) var_8);
                            var_25 = ((/* implicit */unsigned int) ((long long int) var_1));
                            arr_55 [i_11] [i_11 + 1] [(signed char)8] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_0)))) && (((/* implicit */_Bool) var_9))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)26031)))) % (max((2147483647), (((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_39 [i_12]) | (((/* implicit */int) arr_20 [i_6] [i_11] [i_12] [(unsigned char)18] [i_14 - 1]))))) || (((/* implicit */_Bool) arr_25 [i_11 + 1] [i_14 - 1] [i_14 - 1]))))) : (((/* implicit */int) arr_19 [i_11] [i_13] [i_14])))))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned int) var_3);
            /* LoopSeq 1 */
            for (int i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_16 = 3; i_16 < 11; i_16 += 2) 
                {
                    arr_61 [i_15] [i_11] [i_15] [i_16] [i_6] = var_0;
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) max((arr_37 [i_16]), (((/* implicit */int) min((var_3), (((/* implicit */short) arr_57 [i_6] [i_11 + 1] [i_11] [i_16 - 3]))))))))));
                    arr_62 [i_11] [i_11 + 1] [i_15] [i_16 - 3] = ((/* implicit */unsigned char) arr_16 [i_6] [i_11]);
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_42 [i_11 + 1] [i_15] [i_16 - 3])) : (((/* implicit */int) arr_42 [i_11 + 1] [i_15] [i_16 - 3])))))))));
                }
                var_30 = (i_11 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (((((/* implicit */_Bool) max((((/* implicit */int) arr_52 [6] [i_11] [i_15])), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6] [i_11] [i_15]))) : (arr_6 [i_11 + 1] [i_11 + 1])))))) : (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (((((/* implicit */_Bool) max((((/* implicit */int) arr_52 [6] [i_11] [i_15])), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6] [i_11] [i_15]))) : (arr_6 [i_11 + 1] [i_11 + 1]))))));
                var_31 ^= ((/* implicit */short) (+(((((var_2) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39504))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26031)))))));
                var_32 = ((/* implicit */_Bool) var_7);
            }
        }
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [(signed char)6])) ? (((/* implicit */int) arr_33 [i_6] [i_6] [i_6] [i_6] [(signed char)0] [i_6])) : (var_1)))) % ((~(var_4))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) var_3)) : (arr_9 [i_6])))))))))));
        var_34 |= ((/* implicit */long long int) (signed char)-5);
        arr_63 [i_6] |= ((/* implicit */unsigned char) var_5);
        /* LoopSeq 1 */
        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 2) 
        {
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 14; i_18 += 2) 
            {
                for (unsigned char i_19 = 1; i_19 < 13; i_19 += 4) 
                {
                    for (int i_20 = 0; i_20 < 14; i_20 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_9))))))) ? (((/* implicit */int) min((((/* implicit */short) arr_15 [i_6] [i_17] [9LL] [i_20])), ((short)-12378)))) : (max((((((/* implicit */_Bool) arr_33 [i_6] [i_6] [i_17] [i_18] [i_17] [i_20])) ? (((/* implicit */int) var_3)) : (1493749664))), (((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (unsigned short)26047)) : (((/* implicit */int) arr_25 [i_6] [i_17] [i_19]))))))));
                            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) arr_47 [i_17] [i_18] [i_19] [i_20]))));
                            var_37 = ((/* implicit */unsigned char) ((arr_51 [i_19 - 1] [i_20] [i_20] [i_20] [i_20] [i_20]) % (arr_51 [i_19 + 1] [i_19] [i_20] [i_20] [i_20] [i_20])));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_6] [i_19] [11ULL] [i_19 - 1])) ? (((/* implicit */int) arr_17 [21LL] [i_19 + 1])) : (((/* implicit */int) var_3))))) ? (((arr_43 [i_19 - 1] [i_19] [i_19] [i_19 + 1]) >> (((((/* implicit */int) arr_68 [i_19] [i_19] [i_19] [i_19 - 1])) + (112))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_19 + 1] [i_19 - 1] [i_19 - 1] [i_19] [i_19 - 1])) + (((/* implicit */int) arr_18 [i_19 + 1] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 + 1])))))));
                            arr_75 [i_6] [(_Bool)1] [i_18] [(_Bool)1] [i_20] = ((/* implicit */unsigned int) arr_30 [i_6] [i_20] [i_20]);
                        }
                    } 
                } 
            } 
            arr_76 [i_6] [6] [6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1493749672))));
        }
    }
    var_39 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (881661565337916406LL) : (((/* implicit */long long int) -1493749672))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))) ? (var_0) : (((min((var_0), (((/* implicit */int) var_8)))) ^ (((((/* implicit */int) var_5)) << (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_21 = 0; i_21 < 25; i_21 += 2) 
    {
        for (signed char i_22 = 1; i_22 < 24; i_22 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 25; i_23 += 4) 
                {
                    for (unsigned short i_24 = 2; i_24 < 22; i_24 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((var_1) / (((((/* implicit */int) var_9)) * (((/* implicit */int) (_Bool)1)))))))));
                            var_41 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((var_5), (((/* implicit */short) arr_81 [i_22] [i_22 + 1])))))));
                            /* LoopSeq 2 */
                            for (signed char i_25 = 0; i_25 < 25; i_25 += 2) 
                            {
                                var_42 = ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((arr_77 [i_24]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [i_22] [i_22]))))))), (((/* implicit */unsigned int) arr_91 [6LL] [6LL] [i_23] [i_22 + 1] [i_25] [i_22] [i_23]))));
                                var_43 = arr_87 [i_21] [i_22];
                                arr_94 [i_21] [i_23] [i_24 + 2] [i_23] [i_23] [i_21] &= ((/* implicit */signed char) (~(var_6)));
                            }
                            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                            {
                                arr_97 [i_23] |= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_96 [i_23] [i_26] [i_26] [i_26] [i_26])) | (((arr_80 [i_24] [i_24]) ^ (arr_91 [i_21] [i_22] [i_21] [i_24 + 1] [i_24 + 3] [i_24] [i_26]))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_92 [i_21] [i_22] [i_23] [i_24] [i_23]))))) && ((_Bool)0))))));
                                arr_98 [i_22] [i_22] = ((/* implicit */short) ((((((/* implicit */_Bool) max((-7911438359468599948LL), (((/* implicit */long long int) var_5))))) ? (((/* implicit */unsigned long long int) arr_80 [i_21] [i_22])) : (((((/* implicit */unsigned long long int) arr_77 [i_26])) | (18446744073709551615ULL))))) | (((/* implicit */unsigned long long int) max(((~(var_4))), (((/* implicit */unsigned int) (signed char)-1)))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_27 = 0; i_27 < 25; i_27 += 2) 
                {
                    for (unsigned short i_28 = 0; i_28 < 25; i_28 += 2) 
                    {
                        {
                            arr_104 [i_21] [i_22] = ((/* implicit */long long int) max((max((arr_82 [i_22] [i_27] [i_22]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_83 [i_21] [i_22] [i_27] [i_27])) ? (var_6) : (var_6)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (var_4)))))))));
                            arr_105 [i_22] [i_22] [i_27] [i_28] = (i_22 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((int) var_5)) << (((max((((/* implicit */unsigned int) arr_80 [i_21] [i_22])), (arr_82 [i_22] [(signed char)21] [i_22]))) - (1708719955U)))))) / ((~(arr_85 [i_22 - 1])))))) : (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((int) var_5)) << (((((max((((/* implicit */unsigned int) arr_80 [i_21] [i_22])), (arr_82 [i_22] [(signed char)21] [i_22]))) - (1708719955U))) - (480116763U)))))) / ((~(arr_85 [i_22 - 1]))))));
                            var_44 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > ((+(((((/* implicit */long long int) var_4)) + (var_7)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_45 = ((/* implicit */_Bool) (~(min((((/* implicit */int) min((((/* implicit */signed char) var_8)), ((signed char)-9)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (var_0)))))));
    var_46 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_3)))))), (((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-26914)))) ? (((/* implicit */long long int) max((((/* implicit */int) var_8)), (var_1)))) : (max((var_7), (((/* implicit */long long int) var_9))))))));
}
