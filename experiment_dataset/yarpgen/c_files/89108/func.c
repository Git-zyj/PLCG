/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89108
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_1] [0LL] = ((/* implicit */unsigned short) arr_1 [i_0]);
                arr_5 [(unsigned short)4] [i_1] [(unsigned short)4] = ((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_2 [i_0])));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_0 [i_0]) / (((/* implicit */int) var_4))))) % (var_2)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_16 [i_5] [i_2] = ((/* implicit */long long int) var_7);
                            arr_17 [10ULL] [i_3 - 1] = arr_0 [i_5];
                            /* LoopSeq 1 */
                            for (long long int i_6 = 2; i_6 < 11; i_6 += 2) 
                            {
                                arr_20 [i_4] = ((/* implicit */_Bool) arr_3 [(unsigned short)5] [(unsigned short)5] [i_4]);
                                arr_21 [i_2] [i_2] [i_2] [(unsigned char)6] [i_4] [i_5] [i_6] = ((/* implicit */int) arr_3 [(unsigned short)6] [i_5] [i_6]);
                                arr_22 [i_2] [i_3] [i_3] [i_3] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) (+(arr_19 [i_2] [i_3 - 1] [i_3 - 1] [(unsigned short)7] [11ULL] [i_6])));
                                arr_23 [i_2] [i_2] = ((/* implicit */unsigned short) 13111586696255201280ULL);
                            }
                        }
                    } 
                } 
                arr_24 [(_Bool)0] [i_3] [(_Bool)1] = ((/* implicit */_Bool) var_8);
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 10; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (int i_9 = 1; i_9 < 9; i_9 += 2) 
                        {
                            {
                                arr_35 [i_2] [i_3] [9U] [5] [9U] [(unsigned char)3] [5U] = ((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [i_2] [i_2]);
                                arr_36 [i_2] [i_3 + 1] [i_3] [i_3 + 1] [i_8] [i_9 + 1] = ((/* implicit */_Bool) arr_33 [i_2] [(signed char)0] [i_7] [i_8] [i_9]);
                                arr_37 [i_7] [(unsigned char)4] [i_7 + 2] [(unsigned short)10] [(signed char)5] [i_7 + 2] [i_7] = ((/* implicit */unsigned int) var_5);
                                arr_38 [i_2] [i_3] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [4] [4])) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_3))))))), (var_4)));
                                arr_39 [i_9] [i_8] [i_7] [i_3] [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 24576LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [(unsigned char)0] [0LL] [i_3 + 1] [i_2]))) : (var_1)))) ? (((/* implicit */long long int) -712324592)) : (max((((/* implicit */long long int) arr_25 [i_2] [i_3] [1U] [(unsigned short)5])), (var_1)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_10 = 1; i_10 < 8; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) var_0);
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            arr_52 [i_2] [i_2] [i_11] [i_11] = ((/* implicit */unsigned short) (-(arr_41 [3] [i_10 - 1] [i_11] [i_12])));
                            arr_53 [(short)4] [i_12] [i_3 + 1] [5] [i_11] [(_Bool)0] [i_12] = ((/* implicit */long long int) var_4);
                            arr_54 [i_2] [i_3] [10] [3U] [i_12] [i_12] = (-(((/* implicit */int) ((unsigned short) var_3))));
                        }
                        arr_55 [i_2] [i_2] [i_2] [i_2] [i_2] [2ULL] = ((/* implicit */unsigned char) (+(((int) var_8))));
                    }
                    for (unsigned int i_13 = 2; i_13 < 11; i_13 += 4) 
                    {
                        arr_59 [i_2] [5LL] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((_Bool) (signed char)84)) ? (((((/* implicit */_Bool) 1408340030U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_2]))) : (2886627266U))) : (1408340028U)))), (((((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2] [i_3] [i_10 + 3] [i_13]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))) : ((~(var_8)))))));
                        arr_60 [i_10] = ((/* implicit */unsigned long long int) ((_Bool) arr_48 [i_2] [i_2] [i_13] [i_2] [i_2] [i_2] [2U]));
                        /* LoopSeq 3 */
                        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
                        {
                            arr_64 [i_2] [i_2] [i_10] [0] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)52971)) & (((/* implicit */int) var_4))));
                            arr_65 [i_2] [i_2] [i_10] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_2] [(unsigned char)6] [i_2] [(unsigned short)3] [i_2] [i_2] [(short)0])) ? ((~((+(((/* implicit */int) var_4)))))) : ((-(arr_57 [i_2] [i_3] [i_10 + 2])))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
                        {
                            arr_68 [i_15] = ((/* implicit */long long int) max((1408340047U), (((unsigned int) min((2886627265U), (((/* implicit */unsigned int) arr_56 [11LL])))))));
                            arr_69 [i_15] [i_3] [i_10] [i_15] [i_10] = ((/* implicit */_Bool) ((731994895) & (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((!(((/* implicit */_Bool) 2147483639)))))))));
                            arr_70 [0] [i_15] [i_10] [i_13] [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_61 [i_2] [i_2] [i_2] [i_2] [i_2])) & (819677529370337087LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) 731994895)) ? (((/* implicit */unsigned int) var_7)) : (arr_61 [i_15] [i_13 + 1] [i_10] [11] [i_2]))))));
                            arr_71 [i_3] [i_3] [i_15] = ((/* implicit */_Bool) (-(max((arr_29 [i_2] [i_2] [i_2] [i_2]), (((((/* implicit */_Bool) arr_19 [i_2] [(_Bool)1] [i_10] [i_13] [(_Bool)1] [i_15])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_63 [10ULL] [1]))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) /* same iter space */
                        {
                            arr_74 [i_16] = ((/* implicit */unsigned int) arr_10 [2] [(_Bool)1]);
                            arr_75 [i_2] [i_3] [7] [(unsigned short)3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_2] [9LL] [i_10] [i_3 + 1] [i_2])) ? (arr_33 [i_2] [i_3] [i_10 - 1] [i_2] [i_16]) : (arr_33 [(signed char)8] [(signed char)8] [i_10 + 1] [i_10 + 3] [(signed char)8])));
                            arr_76 [i_2] [i_3] [i_10] [i_10] [i_16] = ((/* implicit */unsigned short) (-(731994885)));
                        }
                    }
                    arr_77 [i_2] [i_3 - 2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1279330902U)) ? (((/* implicit */int) (short)-12288)) : (((/* implicit */int) (_Bool)1))));
                }
                for (short i_17 = 1; i_17 < 11; i_17 += 1) 
                {
                    arr_80 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_17 - 1] [i_3 - 1]), (arr_8 [i_17 - 1] [i_3 - 1])))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_17 - 1] [i_3 - 2] [i_3 - 2]))))))));
                    arr_81 [i_2] [i_2] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (unsigned char)79)), (((((/* implicit */_Bool) 430491743)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_9))))), (min((((/* implicit */long long int) arr_11 [i_3 - 2] [i_3 - 2])), (((var_9) / (((/* implicit */long long int) var_6))))))));
                    arr_82 [(_Bool)1] [(_Bool)1] [9LL] [i_3 - 1] = ((/* implicit */short) (-(arr_11 [i_3 - 1] [i_2])));
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    arr_85 [i_2] [i_3 - 1] [4] [i_3 - 1] = ((/* implicit */unsigned long long int) (((-(var_1))) <= (((/* implicit */long long int) 469570824U))));
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        arr_90 [i_19] [i_2] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) 2049474818);
                        arr_91 [i_3] [4U] [4U] = ((/* implicit */unsigned short) (+(var_7)));
                        arr_92 [i_2] [4ULL] [4] &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) <= (var_8)));
                    }
                    arr_93 [i_3] [(_Bool)1] = ((((/* implicit */int) (_Bool)1)) % (arr_67 [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_3 - 1]));
                    /* LoopSeq 1 */
                    for (int i_20 = 2; i_20 < 11; i_20 += 3) 
                    {
                        arr_98 [i_2] [i_20] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (arr_51 [i_2] [i_3] [i_3] [i_3] [i_3] [i_18] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104)))));
                        arr_99 [(unsigned short)11] [i_3] [i_18] [i_20] [i_2] = ((/* implicit */unsigned int) var_9);
                        arr_100 [i_2] [i_20] = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)197)))) / (((((/* implicit */_Bool) arr_97 [(unsigned short)5] [i_3] [i_18] [i_3])) ? (var_5) : (arr_7 [i_2])))));
                        arr_101 [i_2] [i_20] [i_18] [i_20] = ((/* implicit */unsigned int) var_2);
                    }
                }
                arr_102 [i_2] [i_3] [i_3] = ((/* implicit */int) (~((-(arr_14 [i_2] [i_2] [i_3] [i_3])))));
            }
        } 
    } 
}
