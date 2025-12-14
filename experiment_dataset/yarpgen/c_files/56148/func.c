/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56148
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 4; i_2 < 20; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_15 [i_3] [i_1 - 2] [i_0] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2 + 3])) : (arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2 + 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2 + 3])))) : (max((arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1]), (((/* implicit */int) (unsigned char)243))))));
                                arr_16 [i_2] [i_1 + 3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (unsigned char)246);
                                arr_17 [i_2] [i_0] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)13), ((unsigned char)13)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned char)13))) ? (max((arr_13 [i_0] [i_0] [i_0] [i_2 - 2] [i_0] [i_1 + 1] [i_2]), (((/* implicit */unsigned int) (unsigned short)65535)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)254)))))));
                }
                for (long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    arr_22 [10ULL] [(_Bool)1] [10ULL] [i_5] = ((/* implicit */_Bool) max((max((var_10), (((/* implicit */int) var_13)))), (((int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_5])) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            arr_27 [i_0] [i_1] [i_1] [i_1] [14LL] [i_0] [i_0] = (((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(signed char)20]))) : (0ULL))) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) <= (((/* implicit */int) (unsigned char)246))))))) << ((((~(((((/* implicit */_Bool) arr_8 [10ULL] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)1)))))) + (25810))));
                            arr_28 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_6] [i_5] [i_0]);
                            arr_29 [i_1] [(_Bool)1] [i_7] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) max((var_3), (((/* implicit */unsigned short) (_Bool)0))))))));
                            arr_30 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) ((max(((~(((/* implicit */int) arr_24 [i_0])))), (((/* implicit */int) ((short) 0U))))) & (((/* implicit */int) (_Bool)1))));
                        }
                        arr_31 [i_0] [i_0] [i_5] [i_0] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) == (139637976727552LL)))) : ((((_Bool)0) ? (var_10) : (((/* implicit */int) (unsigned char)243))))))), (arr_20 [i_0] [i_5] [i_0])));
                    }
                }
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (1367730551857677704ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))))) ? (((/* implicit */unsigned long long int) 140737488355327LL)) : (arr_8 [i_1 + 3] [i_0])))) ? (((/* implicit */int) (unsigned char)250)) : ((+(((/* implicit */int) ((287104476244869120LL) < (((/* implicit */long long int) arr_2 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (int i_10 = 1; i_10 < 19; i_10 += 2) 
                        {
                            {
                                arr_41 [16LL] [16LL] [i_8] [i_9] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) % (((unsigned int) (unsigned char)13))));
                                arr_42 [i_0] [2] [2] [i_1] [i_9] [i_9] [i_10] = ((/* implicit */unsigned char) -1LL);
                            }
                        } 
                    } 
                }
                /* LoopSeq 4 */
                for (unsigned short i_11 = 4; i_11 < 20; i_11 += 3) 
                {
                    arr_45 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -1LL)))) + (arr_8 [i_11 + 2] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (max((var_5), (((/* implicit */unsigned long long int) (unsigned short)992)))) : (((/* implicit */unsigned long long int) arr_37 [i_1 - 1] [i_1] [i_11 - 2]))))));
                    arr_46 [i_11 + 3] [i_11 + 3] [i_11] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [19] [i_1 + 3] [i_11 - 1] [i_1] [i_11 - 3]))) % (arr_37 [i_0] [i_1 + 3] [i_0])))));
                }
                for (int i_12 = 3; i_12 < 20; i_12 += 1) 
                {
                    arr_51 [6LL] [6LL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37))) : (arr_50 [i_1 + 1] [(unsigned char)4]))))));
                    arr_52 [i_0] [i_0] [21LL] [i_12] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_43 [i_1 - 1] [i_1 + 1] [i_1 - 1])))));
                }
                for (int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    arr_55 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((arr_39 [i_0] [i_0] [i_13] [i_0] [(unsigned char)13]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_13] [i_13]))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)32))))))) != (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_6 [i_1] [0ULL])))))));
                    arr_56 [i_0] [i_0] = ((/* implicit */short) var_1);
                    arr_57 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_7)))) > (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)51876)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_7)))))))));
                }
                for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        arr_63 [18LL] [(unsigned short)4] [(unsigned short)4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_14] [(signed char)3]))))) ^ (((/* implicit */int) arr_54 [i_1] [i_1] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_1 - 2] [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 - 2]))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_48 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_7 [i_0] [17] [8LL])) : (arr_35 [(unsigned short)14])))))));
                        arr_64 [i_0] [i_0] [i_0] [i_14] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_7 [i_15] [i_1] [i_0])) == (min((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) << (((var_9) - (15623393223300590257ULL)))))), (((((/* implicit */_Bool) var_8)) ? (arr_44 [(signed char)7] [(signed char)7]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))));
                        arr_65 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) != (max((((30ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) (+(2123564949703854848LL))))))));
                    }
                    for (unsigned long long int i_16 = 3; i_16 < 19; i_16 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_17 = 3; i_17 < 21; i_17 += 1) 
                        {
                            arr_71 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_21 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_0])), (arr_5 [i_1 - 1] [i_1 + 1] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)18))))))));
                            arr_72 [i_0] = ((/* implicit */unsigned char) var_10);
                        }
                        /* vectorizable */
                        for (unsigned short i_18 = 2; i_18 < 22; i_18 += 3) 
                        {
                            arr_75 [i_0] [i_0] [i_18] = ((/* implicit */unsigned long long int) 0U);
                            arr_76 [i_18 - 2] [i_0] [i_16] [i_14] [i_14] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(30ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_1] [i_14] [i_16] [i_0]))))) : (-287104476244869120LL)));
                            arr_77 [i_0] [(unsigned short)18] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (unsigned short)13)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_25 [6U]))))));
                        }
                        arr_78 [i_0] [i_1] [i_14] [15U] = ((((((5138949692633006295LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0]))))) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) max((arr_35 [i_0]), (((/* implicit */long long int) arr_2 [i_0]))))))) << (((max((((long long int) arr_1 [i_0])), (((/* implicit */long long int) (unsigned char)237)))) - (208LL))));
                        arr_79 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_14] [i_14] [i_0])), ((-(arr_8 [i_0] [i_0])))));
                        arr_80 [i_0] [i_0] [i_0] [i_0] = arr_43 [i_0] [i_0] [i_0];
                    }
                    arr_81 [(unsigned char)14] [(unsigned char)14] [i_14] [i_0] = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_39 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 3] [(short)12])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_14] [2])) ? (var_10) : (((/* implicit */int) arr_24 [(signed char)14]))))))))));
                }
                arr_82 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((_Bool) max((5536269963847790179LL), (((/* implicit */long long int) arr_0 [i_0] [i_1 + 2]))))));
                arr_83 [i_0] [i_0] = ((/* implicit */int) arr_60 [i_1] [(unsigned char)17] [i_0] [i_0]);
                arr_84 [(signed char)14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 19U)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) == (((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_38 [i_1] [(_Bool)1] [i_0] [i_0] [(_Bool)1])) ? (var_4) : (0ULL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))))), (var_7)));
}
