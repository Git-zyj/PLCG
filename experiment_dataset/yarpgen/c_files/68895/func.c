/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68895
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
    var_20 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_0 [i_1 + 2] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)3316))))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_0 [i_0] [i_0])));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [(short)15] [(short)15] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)62219)) ? (((/* implicit */int) arr_9 [i_3] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)42)))), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_11 [i_4] [i_1 + 1] [i_2] [i_3])) : (((/* implicit */int) (signed char)-21))))))), ((~((~(arr_12 [i_3 + 2] [i_1 + 3])))))));
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_12 [i_3 + 3] [i_4 - 3]) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 - 1] [i_0] [i_1 - 1])))))) * (max((((/* implicit */unsigned long long int) arr_5 [i_3 - 2] [i_0] [i_1 + 1])), (var_19)))));
                                arr_17 [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */int) min(((unsigned short)62219), ((unsigned short)62230)))), (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned short)62220)) : (((/* implicit */int) var_14)))))) / (((((/* implicit */_Bool) (unsigned char)213)) ? ((~(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3])))) : (((/* implicit */int) max(((unsigned short)3), (((/* implicit */unsigned short) var_4)))))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)62219)), (((((((/* implicit */_Bool) arr_13 [i_0] [(signed char)5] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_1)))) % (((/* implicit */int) ((arr_7 [14] [(unsigned char)8] [(unsigned char)8] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                {
                    arr_26 [i_5] = ((/* implicit */unsigned char) arr_24 [i_6] [8ULL] [i_7] [i_7]);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 3; i_8 < 9; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_33 [i_9] [i_9] [i_9] [i_9] [4ULL] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)34264), (var_1)))) ? (((/* implicit */int) arr_29 [2LL] [i_7])) : (((/* implicit */int) var_7))))) & (((((9223372036854775796LL) ^ (arr_28 [(short)0]))) % (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)213)), ((unsigned short)65535)))))))));
                                arr_34 [i_5] [i_6] [i_9] [i_6] [(short)11] [(short)7] = ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))) != (max((arr_31 [i_5] [i_7] [i_8]), (((/* implicit */unsigned int) ((arr_8 [i_5] [i_5] [i_5] [i_5]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                                arr_35 [i_5] [i_9] [i_7] [2ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (var_16))))) : (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    arr_36 [i_5] [i_6] [i_7] |= ((/* implicit */signed char) min((((/* implicit */long long int) min((var_11), (((/* implicit */short) ((((/* implicit */int) (short)-26042)) != (((/* implicit */int) arr_5 [(unsigned short)4] [i_5] [(unsigned short)4])))))))), (max((arr_13 [i_7] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */long long int) ((short) var_6)))))));
                    arr_37 [(_Bool)1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)0)) ? (var_16) : (((/* implicit */unsigned long long int) arr_22 [i_5] [i_7])))) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (arr_8 [(short)14] [i_7] [i_5] [i_5]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((unsigned long long int) (+(((/* implicit */int) var_9)))))));
                }
                for (long long int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                {
                    arr_40 [i_5] [i_6] [i_10] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)189))) : (((((((/* implicit */_Bool) arr_5 [i_6] [i_10] [i_10])) ? (9687697725716884487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) / (((((/* implicit */_Bool) (unsigned short)35378)) ? (arr_10 [i_5] [i_10] [i_6] [7U] [7U] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    arr_41 [i_5] [i_6] = max((((/* implicit */long long int) ((unsigned char) -244328066510221971LL))), (max((((arr_13 [i_6] [i_6] [(short)4] [i_6] [(short)4]) / (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((((/* implicit */_Bool) 10819019412515891149ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12172))) : (var_10))))));
                    arr_42 [i_10] = ((/* implicit */unsigned int) arr_25 [i_5] [i_6] [i_6] [i_10]);
                }
                for (long long int i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        arr_47 [i_6] [4] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((arr_24 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */int) (unsigned char)151))))))) ? (((int) (-(((/* implicit */int) var_8))))) : (((/* implicit */int) ((_Bool) ((long long int) -6994225724342901983LL))))));
                        arr_48 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((0), (arr_45 [i_5] [i_5] [2LL] [i_5] [2LL]))) / (((/* implicit */int) arr_29 [i_5] [i_11]))))) ? (max((arr_30 [i_12] [i_6] [i_11] [i_12]), (((/* implicit */unsigned long long int) arr_5 [i_5] [i_6] [i_12])))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_8 [i_5] [(unsigned char)12] [i_11] [i_12]) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) / (var_0))))));
                        arr_49 [i_5] [i_6] [i_11] = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) ((9223372036854775807LL) > (((/* implicit */long long int) -238494258))))))));
                        arr_50 [i_5] [7LL] [i_11] [11ULL] [i_11] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9687697725716884487ULL)) ? (((/* implicit */long long int) 3851291693U)) : ((~((~(4023925183458556673LL)))))));
                        arr_51 [i_5] [i_12] [i_11] [i_5] [(signed char)9] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((unsigned int) arr_4 [i_5] [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) != (arr_43 [i_6] [i_6] [i_6])))), (0ULL)))));
                    }
                    for (unsigned short i_13 = 2; i_13 < 9; i_13 += 1) 
                    {
                        arr_54 [i_5] = ((signed char) (!(((/* implicit */_Bool) min((arr_10 [i_5] [i_5] [12LL] [i_13 - 1] [i_6] [i_11]), (((/* implicit */unsigned long long int) (unsigned short)62244)))))));
                        arr_55 [i_5] [i_11] [i_11] [i_13] [4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */int) arr_11 [9ULL] [i_6] [i_11] [(signed char)0])) >= (((/* implicit */int) (short)-7935)))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) < (arr_20 [i_13] [(unsigned char)7]))))))) : ((+(((463599147683160636ULL) << (((var_19) - (13916420573089947826ULL)))))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        arr_59 [i_5] [i_11] [i_11] [8U] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(-238494263)))) ? (((/* implicit */int) var_18)) : (((int) arr_57 [i_5] [i_5] [i_5])))) * (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) 5632655433719344005LL)))))));
                        arr_60 [i_5] [i_6] [i_5] [i_14] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))), (((((/* implicit */_Bool) arr_46 [i_5] [i_6] [i_14] [i_14] [(short)1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))) : (arr_46 [i_14] [i_14] [i_14] [i_5] [i_5] [i_6])))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 2; i_15 < 8; i_15 += 2) 
                    {
                        arr_63 [(unsigned char)8] [i_6] [i_11] = ((/* implicit */signed char) ((short) -2052435278));
                        arr_64 [i_5] [i_6] [i_15] [(unsigned char)7] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_8 [i_5] [i_6] [i_11] [i_11])) >= (arr_22 [i_5] [i_5]))) ? ((-(1700254388))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_5])))))));
                        arr_65 [i_5] [i_5] [i_11] [(unsigned char)9] = ((/* implicit */long long int) ((1700254406) != (((/* implicit */int) (unsigned char)220))));
                        arr_66 [i_5] = ((((/* implicit */_Bool) (short)-26042)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)));
                    }
                    arr_67 [i_6] [0LL] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                    arr_68 [i_5] [i_5] [i_6] [2LL] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_5]))) <= (((var_19) % (var_12))))))));
                    arr_69 [i_6] [i_6] [i_11] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)213))));
                }
                arr_70 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)213)), (var_0)));
                arr_71 [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-23582)), (arr_62 [7ULL] [(signed char)7] [(unsigned char)10]))))) / (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (13198240759671579992ULL)))))));
                arr_72 [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) arr_58 [i_5] [(unsigned short)7] [(unsigned char)11] [i_6] [i_6]))));
                arr_73 [i_5] [i_5] [i_5] |= min((max((0ULL), (((/* implicit */unsigned long long int) arr_28 [i_5])))), (((unsigned long long int) (-(((/* implicit */int) var_3))))));
            }
        } 
    } 
}
