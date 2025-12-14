/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78522
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_15 [i_3] [i_3] [i_3] [i_0 + 1] [(unsigned short)0] [(unsigned short)0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (arr_11 [i_3] [i_3] [i_2 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))))), (min((var_12), (((/* implicit */unsigned int) (unsigned short)23067)))))))));
                            arr_16 [i_0 - 1] [i_0 - 1] [3LL] [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */_Bool) min((((/* implicit */short) arr_5 [i_2 + 1] [i_4])), (var_7)));
                            arr_17 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_0 + 2] [i_2 + 1] [i_3] [i_4]))));
                            arr_18 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_9 [i_2] [i_2] [i_2] [i_2 + 1]);
                            arr_19 [i_3] [i_3] [i_1] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (unsigned char)7))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 8; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_6 = 1; i_6 < 7; i_6 += 3) 
                    {
                        arr_25 [i_0] [(unsigned char)1] [i_1] [i_2 - 1] [i_5 + 2] [i_6] = arr_20 [i_0] [i_1] [i_2] [i_5] [i_5] [i_2];
                        arr_26 [i_5] [i_1] = ((/* implicit */int) arr_22 [i_6 + 1] [i_5 - 1] [i_0 + 2] [i_2 - 1]);
                    }
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_29 [i_7] [i_5] [6LL] [i_0 + 2] [i_0 + 2] = arr_10 [i_2 - 1] [(unsigned char)3];
                        arr_30 [i_0] [i_0] [i_1] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-16)) ? (3453933385191466935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32466))))), (((/* implicit */unsigned long long int) ((arr_3 [i_2 + 1]) <= (((/* implicit */long long int) (-(var_11)))))))));
                    }
                    arr_31 [i_0] [i_1] [i_5 + 2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))) ? ((~((-(var_1))))) : (((/* implicit */long long int) (~(((unsigned int) 4294967295U)))))));
                    arr_32 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [(_Bool)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_5]))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_14 [i_2])))))) != (min((((((/* implicit */_Bool) arr_14 [i_0])) ? (arr_12 [i_0] [i_0] [i_5 + 2]) : (((/* implicit */long long int) arr_24 [i_0] [i_1] [i_2 - 1] [i_2] [i_5])))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_2 - 1] [i_0]))))))));
                    arr_33 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) min((arr_4 [i_0 + 1] [i_2]), (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_1]))) : ((+(var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_5] [i_5 + 1] [i_5])) - (((/* implicit */int) var_13))))) ? (min((var_11), (((/* implicit */unsigned int) arr_2 [i_0 - 1])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))))))))));
                    arr_34 [i_1] = ((/* implicit */short) var_0);
                }
            }
            arr_35 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (min((((/* implicit */long long int) arr_5 [i_0] [i_0])), (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))))) == (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) | ((-9223372036854775807LL - 1LL))))) ? (min((var_3), (((/* implicit */long long int) arr_1 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1])))))))));
        }
        for (int i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            arr_40 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 2] [i_8] [i_0 + 2] [i_0 + 2]))) <= (var_0))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-75)), ((unsigned char)124)))) : (-583536850)))), (var_0)));
            arr_41 [i_0 - 1] [(short)7] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)47)) ^ (((/* implicit */int) (unsigned short)8697))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    arr_48 [i_0] [(unsigned char)8] [i_8] [i_9] [i_10] = ((/* implicit */long long int) arr_0 [i_0]);
                    arr_49 [2ULL] [i_9] [i_9] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) arr_8 [i_8] [i_9] [i_8] [i_0 + 2]);
                }
                arr_50 [i_0] [i_8] [i_9] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_9] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9] [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1]))))) == (((/* implicit */long long int) arr_43 [i_0 + 2] [i_8] [i_8] [i_9]))));
            }
            arr_51 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_27 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : ((-(4969244551309953047ULL)))))) ? (min((var_3), (((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */unsigned short) var_6))))))) : (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_38 [i_8]))) * (var_9))))));
            arr_52 [i_0 + 2] [i_0] [i_8] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_5)))))) ? (min(((-(var_1))), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_8] [i_8])))) : (((((/* implicit */_Bool) -4106624110435943317LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (9223372036854775807LL)))));
        }
        arr_53 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (583536847) : ((-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (signed char)-1))))))));
        arr_54 [i_0] = ((/* implicit */int) (unsigned char)0);
    }
    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        arr_57 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_11])) ? ((~(((/* implicit */int) arr_56 [i_11] [i_11])))) : ((-(511)))));
        arr_58 [i_11] [i_11] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) arr_56 [i_11] [i_11])) < (((/* implicit */int) (short)-20758))))))) >> (((((((/* implicit */_Bool) max(((unsigned char)32), ((unsigned char)29)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))) + (21918)))));
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 23; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                for (unsigned char i_14 = 1; i_14 < 19; i_14 += 4) 
                {
                    {
                        arr_66 [(unsigned short)14] [i_12] [(unsigned short)14] [i_14] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_63 [i_11] [i_12] [i_11])) : (((/* implicit */int) arr_56 [i_11] [i_11]))))) ? (max((((/* implicit */long long int) var_11)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_55 [(signed char)4])))))))));
                        arr_67 [i_14] [i_11] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_12]))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_65 [(signed char)12] [i_14 + 3] [i_13] [i_14 - 1]))) * (2048126307U)))));
                        arr_68 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) arr_59 [i_14] [i_12]);
                    }
                } 
            } 
            arr_69 [i_12] [i_12] [i_11] = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */int) arr_64 [9] [i_12])), (var_9)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_11] [i_11] [i_11] [i_11]))))), (((/* implicit */unsigned long long int) var_8))));
            /* LoopNest 3 */
            for (short i_15 = 1; i_15 < 22; i_15 += 1) 
            {
                for (unsigned int i_16 = 2; i_16 < 20; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 2) 
                    {
                        {
                            arr_79 [i_11] [i_12] [i_15 - 1] [i_16] [i_17] = ((((/* implicit */_Bool) (short)20757)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [(short)10] [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_64 [i_17] [i_16 - 1])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_4)) : ((-(var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_72 [i_17] [i_16] [i_15] [i_12] [i_11])), (var_0))))))));
                            arr_80 [16] [i_12] [i_15 + 1] [16] [i_17] [i_12] [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_60 [i_15])))))));
                        }
                    } 
                } 
            } 
        }
        arr_81 [i_11] = ((/* implicit */unsigned int) (~(min((var_9), (((/* implicit */int) arr_56 [i_11] [i_11]))))));
    }
    var_14 = ((/* implicit */unsigned char) (((_Bool)1) ? ((-((~(((/* implicit */int) (_Bool)1)))))) : ((-(((/* implicit */int) (unsigned short)2785))))));
}
