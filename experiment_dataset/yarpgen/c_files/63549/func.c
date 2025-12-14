/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63549
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
    var_10 = min((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_1)))))))));
    var_11 = min((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_3)))), (var_2)))), (var_8));
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_5);
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) arr_1 [(signed char)14] [i_0 - 2]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) arr_4 [i_1]);
        arr_6 [i_1] = ((/* implicit */long long int) (~(((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((short) arr_9 [i_3] [i_2] [i_1]));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
                    {
                        arr_13 [i_1] = var_9;
                        arr_14 [i_1] [15ULL] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) : (arr_9 [i_1] [i_2] [i_3])));
                        var_15 = ((/* implicit */_Bool) ((int) ((_Bool) arr_12 [i_1] [i_3] [i_4])));
                        arr_15 [i_1] [i_1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
                        arr_16 [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_1]))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (arr_12 [0] [i_2] [10ULL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2970)))))));
                                arr_22 [(short)15] [19LL] [i_3] [(unsigned short)12] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5 - 1]))) | (arr_9 [i_6 - 1] [i_6 + 1] [i_5 - 2])));
                                var_17 = ((/* implicit */int) var_1);
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_21 [20LL] [i_2] [(unsigned char)6]))) ? (var_2) : (((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    arr_23 [(signed char)0] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [21LL])) ? (((/* implicit */int) arr_19 [i_1] [16LL] [17U] [i_3])) : (((/* implicit */int) var_4)))) / (((/* implicit */int) var_4))));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */short) max((((((((/* implicit */int) (short)-2970)) % (((/* implicit */int) arr_4 [(unsigned short)10])))) - (((/* implicit */int) ((((/* implicit */unsigned int) arr_24 [i_7])) > (var_8)))))), (((((/* implicit */int) max((var_0), (((/* implicit */short) arr_19 [i_7] [i_7] [2U] [2U]))))) | (((/* implicit */int) var_5))))));
        arr_27 [i_7] = ((/* implicit */long long int) var_6);
    }
    for (int i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        var_19 = ((long long int) (unsigned char)56);
        arr_31 [i_8] = ((/* implicit */signed char) var_5);
        /* LoopSeq 1 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((signed char) arr_17 [i_8] [i_8] [i_8] [(unsigned char)20]));
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                arr_37 [13ULL] [i_8] [i_10] = ((/* implicit */signed char) ((int) arr_7 [i_9 - 1]));
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 19; i_11 += 1) 
                {
                    for (signed char i_12 = 1; i_12 < 18; i_12 += 4) 
                    {
                        {
                            arr_43 [i_8] [(signed char)4] [i_10] [i_11 - 2] [i_8] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_9 - 1] [i_10] [i_11 + 1] [(short)13]))) : (var_7)))))), (min((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (~(arr_21 [i_8] [i_8] [i_10]))))))));
                            arr_44 [12ULL] [i_9] [i_9] [i_9 - 1] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_9 [i_8] [i_9 - 1] [i_10])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((/* implicit */int) var_5))))) ? (arr_21 [i_8] [i_10] [i_12]) : (((/* implicit */int) arr_18 [18] [9] [9] [i_11 - 1])))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) / (((/* implicit */int) var_6))))));
                        }
                    } 
                } 
            }
            for (short i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                arr_47 [i_8] [i_8] [i_13] [i_9 - 1] = ((/* implicit */int) max((((/* implicit */long long int) (short)2970)), (0LL)));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_38 [i_8] [i_8] [i_13]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8]))) : (arr_7 [i_8])));
                arr_48 [i_8] [(short)17] [i_8] = ((/* implicit */unsigned char) ((unsigned short) arr_7 [i_8]));
                arr_49 [i_8] [i_9] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) min((((/* implicit */short) arr_45 [i_8] [i_9])), (var_0)))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    arr_52 [i_8] [i_9] [i_9] [i_9] [(signed char)12] = ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) var_9)));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1680235206) : (((/* implicit */int) (short)2970)))))) + (max((arr_46 [i_9 - 1] [i_9 - 1] [i_8]), (arr_46 [i_9 - 1] [i_9 - 1] [i_8])))));
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) var_2);
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_41 [i_15] [15U] [i_13] [i_9] [i_8]))));
                        arr_56 [10LL] [i_8] [i_8] [i_14] [(unsigned short)8] = var_5;
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_60 [i_8] [i_9] [i_8] [(unsigned char)11] [i_16] [2] = ((/* implicit */unsigned char) var_8);
                        arr_61 [i_8] [i_14] [i_14] = ((/* implicit */int) max((((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_8] [i_8] [(_Bool)1] [i_8] [(unsigned char)3] [i_8] [(unsigned char)4])) % (((/* implicit */int) var_6))))) : (((arr_40 [i_8] [i_9 - 1] [i_13] [10] [i_8]) ? (arr_28 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_9 - 1] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_50 [i_9 - 1] [(short)8]))))));
                        var_25 = ((/* implicit */int) var_4);
                    }
                    for (unsigned char i_17 = 3; i_17 < 19; i_17 += 4) 
                    {
                        arr_64 [13] [i_9 - 1] [i_13] [(unsigned short)19] [i_14] [i_8] [1ULL] = ((/* implicit */_Bool) var_9);
                        var_26 = min((min((((/* implicit */unsigned long long int) arr_34 [i_17] [i_9])), (((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [10LL]))) : (arr_62 [i_8] [i_9] [i_9] [i_13] [i_14] [i_8]))))), (((/* implicit */unsigned long long int) ((((long long int) var_9)) <= (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_17 - 1] [14] [11ULL])))))));
                        var_27 *= ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) arr_30 [i_14])), (((var_5) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                    }
                }
                /* vectorizable */
                for (long long int i_18 = 1; i_18 < 20; i_18 += 3) 
                {
                    var_28 = ((/* implicit */signed char) var_2);
                    arr_68 [i_13] [i_8] [i_8] = ((/* implicit */_Bool) ((arr_36 [i_9 - 1] [i_9 - 1] [i_9 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9 - 1] [i_9 - 1] [i_9 - 1]))) : (arr_50 [i_9 - 1] [i_18 + 1])));
                }
                for (short i_19 = 1; i_19 < 18; i_19 += 1) 
                {
                    arr_71 [16LL] [i_8] [i_9] [i_8] [8ULL] = ((/* implicit */unsigned long long int) ((long long int) (-(var_2))));
                    /* LoopSeq 1 */
                    for (short i_20 = 1; i_20 < 19; i_20 += 4) 
                    {
                        arr_75 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_39 [i_8] [i_8] [i_9] [i_13] [i_19] [i_13]))));
                        arr_76 [i_8] [i_9] [i_13] [i_19] [i_20] [i_13] [(_Bool)1] = ((/* implicit */unsigned short) var_8);
                        var_29 = (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (arr_29 [i_8] [i_8]))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_21 = 1; i_21 < 17; i_21 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) ((signed char) arr_53 [i_8] [i_9] [i_13] [0] [2] [i_21]))))));
                        arr_80 [i_21] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) var_8);
                        arr_81 [i_8] [i_8] [i_9] [i_13] [i_19] [i_19] [i_8] = ((/* implicit */long long int) arr_18 [i_19] [i_13] [(unsigned char)14] [i_8]);
                    }
                    /* vectorizable */
                    for (unsigned char i_22 = 0; i_22 < 21; i_22 += 3) 
                    {
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (-(arr_7 [i_8]))))));
                        arr_84 [1U] [i_8] [(unsigned char)12] [i_13] [i_8] [i_8] [i_8] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_8] [i_13] [i_22])) || (((/* implicit */_Bool) var_6)))))));
                        var_32 = ((/* implicit */unsigned long long int) arr_4 [i_8]);
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_50 [(signed char)0] [i_22]))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))));
                        arr_85 [i_8] [i_8] [i_13] [i_8] [i_22] [(short)9] = ((/* implicit */_Bool) arr_72 [i_8] [i_9]);
                    }
                    for (signed char i_23 = 0; i_23 < 21; i_23 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) arr_12 [i_8] [(short)3] [i_23])) : (min((((int) var_6)), (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_8] [i_8] [0U] [i_8] [i_8]))))))))));
                        var_35 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_5)))));
                    }
                }
            }
            for (int i_24 = 1; i_24 < 18; i_24 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_25 = 1; i_25 < 20; i_25 += 3) 
                {
                    var_36 = ((/* implicit */unsigned short) 72057594037927680LL);
                    var_37 = ((/* implicit */unsigned long long int) var_3);
                    arr_92 [i_8] [(_Bool)1] [i_8] [i_9] [i_24] [i_25] = ((/* implicit */int) arr_55 [14ULL] [i_9 - 1] [i_24 + 3] [(short)0]);
                }
                for (long long int i_26 = 3; i_26 < 19; i_26 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_27 = 0; i_27 < 21; i_27 += 3) 
                    {
                        var_38 += ((int) arr_74 [(short)20] [i_24 + 2] [i_26] [i_26] [i_26] [i_26 - 3] [i_26 - 3]);
                        var_39 -= ((/* implicit */unsigned char) arr_91 [i_9] [i_24] [i_26] [i_24]);
                        var_40 = ((/* implicit */short) arr_38 [(signed char)12] [i_9 - 1] [(short)16]);
                    }
                    var_41 = ((/* implicit */long long int) ((((((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8] [i_9] [i_9 - 1])))))) + (((/* implicit */int) var_3)))) >> (((((/* implicit */int) var_6)) - (48)))));
                }
                for (unsigned long long int i_28 = 0; i_28 < 21; i_28 += 4) 
                {
                    var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) arr_35 [i_8] [i_28] [i_8] [i_8]))));
                    var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) arr_45 [i_8] [i_9]))));
                }
                arr_100 [i_8] [i_8] [(unsigned char)19] = var_4;
            }
            var_44 = ((/* implicit */unsigned long long int) max((var_44), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_17 [i_8] [1] [i_9] [i_9]), (((/* implicit */unsigned short) arr_4 [i_8]))))) ? (((/* implicit */int) ((short) var_1))) : ((~(((/* implicit */int) arr_88 [(unsigned short)15] [19ULL]))))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) / (min((((/* implicit */unsigned long long int) arr_17 [i_8] [7LL] [i_9] [i_9])), (arr_7 [i_8])))))))));
            /* LoopSeq 1 */
            for (signed char i_29 = 0; i_29 < 21; i_29 += 2) 
            {
                var_45 = arr_34 [i_8] [i_9];
                var_46 = ((/* implicit */unsigned char) arr_34 [0] [i_9]);
                arr_103 [i_8] [i_9] [(signed char)1] [i_8] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_102 [i_8] [i_8]))))));
                arr_104 [i_8] [(unsigned char)5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_79 [(signed char)17] [i_9 - 1] [i_9] [i_8] [i_9 - 1])), ((-(((unsigned long long int) var_4))))));
            }
            /* LoopNest 2 */
            for (short i_30 = 0; i_30 < 21; i_30 += 4) 
            {
                for (unsigned char i_31 = 2; i_31 < 17; i_31 += 4) 
                {
                    {
                        var_47 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_94 [i_31 + 1] [i_31 + 4] [i_30] [i_9 - 1] [7ULL] [i_8])) ? (((/* implicit */int) arr_98 [i_31] [i_31 + 3] [i_31 + 3] [i_31 - 2])) : (((/* implicit */int) (signed char)-52)))), (max((((/* implicit */int) ((((/* implicit */int) arr_4 [(short)17])) < (((/* implicit */int) var_6))))), (arr_11 [i_31 + 4] [i_9 - 1])))));
                        arr_110 [i_8] [i_9 - 1] [16LL] = ((/* implicit */unsigned long long int) ((arr_65 [i_8] [i_8] [i_8] [(unsigned short)4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) arr_12 [i_8] [i_8] [i_8]))), (max((((/* implicit */unsigned long long int) arr_12 [i_9 - 1] [i_9 - 1] [i_31])), (var_9))))))));
                        var_49 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_7) >> (((/* implicit */int) arr_42 [11ULL] [i_31 + 4] [i_30] [i_30] [i_9 - 1] [i_8] [i_8]))))) - (((((/* implicit */unsigned long long int) ((arr_96 [i_31] [i_30] [i_9] [i_8]) / (((/* implicit */long long int) var_7))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_89 [i_8] [(signed char)1] [i_8] [i_8])))))));
                    }
                } 
            } 
        }
        var_50 -= ((/* implicit */long long int) var_4);
    }
    var_51 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_8)) * (((unsigned long long int) var_8))));
    var_52 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) >= (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_2))))) ? (4272070264925831687LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
}
