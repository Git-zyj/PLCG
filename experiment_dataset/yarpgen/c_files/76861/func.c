/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76861
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) min(((+(max((arr_0 [i_1]), (((/* implicit */int) var_11)))))), (((/* implicit */int) ((((long long int) (short)3853)) < (((/* implicit */long long int) ((/* implicit */int) ((var_13) < (((/* implicit */long long int) var_15)))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] [i_0] [i_4]);
                                var_16 = ((/* implicit */short) ((1928038185U) == (((/* implicit */unsigned int) (-(arr_0 [i_0]))))));
                                var_17 += ((/* implicit */int) (_Bool)1);
                                arr_14 [i_0] [20ULL] [i_0] [5LL] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_4]), (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_4]))))) ? (2359672438U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned short)4] = ((/* implicit */short) min((((/* implicit */unsigned int) max((min((var_7), (((/* implicit */int) arr_12 [i_3] [i_1] [i_2] [i_3] [i_4])))), (((/* implicit */int) (!((_Bool)1))))))), (var_9)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((min((var_13), (((/* implicit */long long int) max(((unsigned char)71), (((/* implicit */unsigned char) var_4))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_7)) : (var_5)))) ? (((long long int) (unsigned char)76)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))))));
    var_19 += ((/* implicit */unsigned short) min((((int) (-(((/* implicit */int) var_11))))), (((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) 727987332)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_23 [i_5] [i_5] [i_7] [i_7] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */long long int) arr_22 [i_5]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_7] [i_7] [i_7]))));
                arr_24 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14969102897249296721ULL)))))) : (((((/* implicit */unsigned long long int) arr_11 [i_5] [i_6] [i_7] [i_7] [i_7] [i_7] [i_7])) * (arr_17 [i_5])))));
                arr_25 [i_6] [3ULL] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_5] [i_6] [i_7])) ^ (arr_17 [i_7])))) ? (((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_5])) ? (2359672438U) : (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) (+(var_7))))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_21 ^= ((((/* implicit */_Bool) arr_7 [i_5] [i_6] [i_8] [i_5])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)13] [i_6] [i_5] [i_5]))) - (arr_19 [i_5] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_6] [i_6] [i_8]))));
                arr_29 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36537))) : (arr_19 [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) var_2)) : (16025195315206167647ULL)));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */int) arr_17 [i_5]);
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_9] [i_10])) ? (((/* implicit */int) arr_16 [i_8] [i_10])) : (((/* implicit */int) (short)-25462))));
                        }
                    } 
                } 
                arr_36 [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_6])) ? (84607274U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8] [i_6]))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
            }
            for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                arr_41 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (arr_11 [i_11] [i_11] [i_6] [i_6] [i_5] [i_5] [i_5])));
                var_24 = ((/* implicit */signed char) ((arr_19 [i_6] [i_6]) + (((/* implicit */long long int) 1935294858U))));
                arr_42 [i_6] [i_6] [i_6] = ((/* implicit */int) arr_30 [i_5] [i_11] [i_11] [i_6] [i_6] [i_11]);
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        {
                            arr_48 [i_6] [i_12] [i_6] = ((/* implicit */unsigned int) ((arr_18 [i_12] [i_11]) ? (arr_3 [i_5] [i_5] [i_12]) : (((/* implicit */int) arr_27 [i_12] [i_12] [i_13] [i_12]))));
                            arr_49 [i_5] [i_6] [i_6] [i_6] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (arr_9 [i_5]) : (((/* implicit */int) arr_16 [i_13] [(unsigned short)6]))))) ? (((/* implicit */int) ((2759688618U) > (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) (short)27765))));
                            var_25 = ((/* implicit */unsigned short) var_3);
                            var_26 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)63431)))) / (arr_3 [i_5] [i_5] [i_5])));
                        }
                    } 
                } 
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+(((/* implicit */int) ((16412872850788636017ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(unsigned short)0] [i_5] [i_6] [i_11])))))))))));
            }
            arr_50 [i_5] [i_6] = ((/* implicit */signed char) (unsigned char)131);
        }
        /* LoopNest 2 */
        for (unsigned char i_14 = 3; i_14 < 11; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                {
                    arr_56 [i_5] [i_5] = min((84607274U), (((/* implicit */unsigned int) -391634447)));
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        arr_60 [3ULL] [i_14] [i_14 - 1] [i_15] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_10 [i_16] [i_5] [i_14] [21] [i_14 - 1]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))), (max((((/* implicit */unsigned long long int) var_13)), (14969102897249296709ULL))))))));
                        arr_61 [i_5] [i_5] [i_16] [i_5] [i_5] = ((/* implicit */unsigned char) (+(((arr_11 [i_14 - 1] [i_14] [i_14 - 1] [i_5] [i_5] [i_5] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47957)))))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15)))))));
                        arr_62 [i_5] [i_5] [i_16] = ((/* implicit */unsigned char) arr_37 [i_5] [i_14 + 1]);
                    }
                    for (int i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        var_29 += ((/* implicit */long long int) arr_59 [i_5] [i_5] [i_15] [i_5] [i_17]);
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((unsigned char) (unsigned short)58062))));
                        arr_65 [i_5] [i_14] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_14 - 1] [(unsigned char)7] [i_17] [6ULL] [i_5]))) * (min((arr_17 [i_15]), (((/* implicit */unsigned long long int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_5]))) / (arr_19 [i_17] [i_17])))) ? (max((((/* implicit */unsigned int) var_3)), (arr_11 [i_17] [i_5] [i_15] [i_15] [i_14] [i_5] [i_5]))) : (((/* implicit */unsigned int) arr_26 [i_14 - 2] [i_14] [i_14] [i_17])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_59 [i_5] [i_5] [i_14 - 3] [i_14 - 2] [i_14 - 3]))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_18 = 2; i_18 < 11; i_18 += 1) 
        {
            for (unsigned short i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                {
                    var_31 ^= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_15)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_19 [i_5] [i_19]) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_4)), (arr_47 [i_5] [i_5] [2ULL] [2ULL] [i_18] [i_5]))))))) != (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)91))))), (((((/* implicit */_Bool) -3257189413949094056LL)) ? (var_14) : (((/* implicit */int) var_12)))))))));
                    /* LoopSeq 4 */
                    for (long long int i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        arr_75 [i_18] = ((/* implicit */unsigned short) min((((max((((/* implicit */unsigned long long int) (signed char)-32)), (arr_21 [i_18] [i_18] [i_19] [i_20]))) % (arr_21 [i_18] [i_18 - 1] [i_18 - 1] [i_20]))), (((/* implicit */unsigned long long int) 143592384))));
                        /* LoopSeq 1 */
                        for (long long int i_21 = 2; i_21 < 10; i_21 += 4) 
                        {
                            var_32 = ((/* implicit */int) arr_21 [i_18] [(unsigned char)0] [i_20] [i_21]);
                            arr_79 [i_21] [i_20] [i_20] [i_5] [i_5] |= ((((((-378561755) != (((/* implicit */int) (unsigned short)57464)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1618226917113242726LL))))) : (((/* implicit */int) (unsigned char)206)))) & (((/* implicit */int) ((unsigned short) max((var_5), (var_13))))));
                            arr_80 [(unsigned char)11] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */long long int) min((((/* implicit */unsigned short) arr_54 [i_19])), (((unsigned short) ((((/* implicit */_Bool) arr_38 [i_5] [i_18] [i_20] [8LL])) ? (((/* implicit */int) arr_27 [i_5] [i_19] [i_5] [i_5])) : (var_7))))));
                        }
                        var_33 = var_14;
                    }
                    for (long long int i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        var_34 = arr_74 [i_5] [i_5];
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)7457)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((!(((/* implicit */_Bool) arr_12 [i_19] [i_19] [i_18] [i_18] [i_5]))))))) : (((/* implicit */int) ((((int) arr_53 [i_5] [i_5] [i_18])) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-32330))))))))))));
                        arr_83 [i_5] [i_18] [i_18] = ((/* implicit */unsigned short) ((short) (!((!(((/* implicit */_Bool) arr_2 [i_22])))))));
                        arr_84 [i_5] [i_5] [i_18 + 1] [i_19] [i_22] [i_18] = ((/* implicit */unsigned char) (short)26428);
                        var_36 += (signed char)41;
                    }
                    for (int i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        var_37 = ((/* implicit */short) max((var_37), (((short) (-(((/* implicit */int) max((arr_7 [i_5] [8] [i_19] [i_23]), (arr_27 [i_5] [7LL] [i_19] [(_Bool)1])))))))));
                        var_38 = ((/* implicit */signed char) var_10);
                    }
                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 12; i_24 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [2LL] [i_19] [i_19] [i_19] [i_19] [i_5])) ? (((/* implicit */long long int) arr_32 [i_5] [i_5] [i_19] [i_19] [i_19] [i_24])) : (var_5))))));
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) var_11))));
                        /* LoopSeq 3 */
                        for (long long int i_25 = 2; i_25 < 9; i_25 += 1) 
                        {
                            var_41 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_76 [i_25] [(_Bool)1] [i_19] [i_18] [i_5]))));
                            arr_95 [i_18] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8648))) & (var_13)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) var_8)) : (arr_59 [i_5] [i_5] [i_5] [i_5] [i_5])))));
                            arr_96 [i_5] [i_18] [i_19] [i_5] [i_25] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_88 [i_18] [i_18] [i_19] [i_24])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))));
                        }
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            arr_100 [i_5] [i_18 + 1] [i_18 + 1] [i_19] [i_24] [i_18] [i_26] = ((/* implicit */_Bool) var_2);
                            arr_101 [i_18] [i_26] [i_18] [i_18 - 1] [i_26] = ((/* implicit */signed char) arr_43 [i_26] [i_18 + 1] [i_18] [i_18 - 1] [10]);
                            arr_102 [i_18] [i_18] [i_18] [i_24] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_5] [i_18] [i_26] [i_18 - 1])) ? (((/* implicit */int) (unsigned short)8077)) : (((/* implicit */int) arr_51 [i_5] [i_18 + 1] [i_18 - 2]))));
                        }
                        for (signed char i_27 = 0; i_27 < 12; i_27 += 1) 
                        {
                            var_42 ^= ((/* implicit */unsigned int) var_2);
                            var_43 ^= ((/* implicit */int) arr_88 [i_19] [i_18] [i_18] [i_24]);
                            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)88))))))))));
                            var_45 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_7 [i_18 - 1] [21] [i_18 - 2] [i_18 - 2]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_28 = 0; i_28 < 12; i_28 += 2) 
                        {
                            arr_107 [i_18] [i_24] [i_19] [(unsigned short)2] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_87 [i_18] [i_24])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_5] [i_5])) - (((/* implicit */int) (unsigned short)33572)))))));
                            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) 2428561543380905970ULL)) ? (arr_64 [i_18 - 2] [i_18 - 2]) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_71 [i_5] [i_18] [i_19] [i_24] [i_28])) : (((/* implicit */int) var_6)))))))));
                        }
                        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) 16018182530328645632ULL))));
                    }
                }
            } 
        } 
    }
}
