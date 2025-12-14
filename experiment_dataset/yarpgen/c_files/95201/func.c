/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95201
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
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1] [i_1])) ? (min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 7U)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2])), (var_8))))))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */signed char) 12035441341557137964ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (-(6411302732152413658ULL)));
                                var_21 = ((/* implicit */unsigned char) arr_14 [i_3 - 2] [i_3] [i_1] [i_1] [i_0] [i_3] [i_0]);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) 405096244113947040LL);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                {
                    arr_19 [i_0] [(unsigned short)3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (+(2895915089U)))) ? (((/* implicit */int) arr_17 [i_1 + 3] [i_1] [i_1 + 3])) : (((/* implicit */int) (unsigned short)46370))));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_1] [i_1 + 1] [i_5] [i_5]);
                }
                for (int i_6 = 2; i_6 < 19; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2895915089U)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (6411302732152413658ULL)))) ? (((/* implicit */long long int) arr_21 [i_0] [(signed char)8] [i_6 + 3] [(signed char)8])) : (arr_11 [i_1 + 2] [i_1 + 2] [i_6 + 1])))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_6 + 3] [6LL] [i_6] [i_6] [i_6] [6LL] [i_1 + 3])))))));
                            var_24 = ((/* implicit */signed char) (_Bool)1);
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 12909456610086952658ULL))) ? (6411302732152413653ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_23 [2ULL] [i_7] [i_6] [i_7 + 1] [(short)12] [i_1]), (arr_15 [i_7]))))))))));
                            arr_28 [i_0] [i_7] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_24 [i_6 + 3] [i_6] [i_6 + 3] [i_6 + 2] [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_15 [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_27 [i_7] [(unsigned short)18] [i_7 - 1] [i_7] [i_8]))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [5ULL]))))) > ((+(12035441341557137958ULL))))))));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */short) (-(((unsigned long long int) arr_14 [6LL] [12ULL] [6LL] [i_7] [i_7] [i_7] [i_7]))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(6411302732152413658ULL)))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) arr_8 [i_1 + 3] [i_1 - 1] [15ULL])) : (5537287463622598957ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106)))));
                            arr_32 [i_0] [i_1 + 2] [i_6] [i_0] [i_7] [i_7 + 2] [i_6] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [i_7] [i_7])) ? (arr_12 [i_7] [i_7 + 1]) : (arr_12 [i_7] [i_7])))));
                        }
                        for (signed char i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) (~((~(arr_25 [i_1] [i_1] [i_1 + 1] [i_6] [i_10])))));
                            arr_36 [i_0] [i_1 + 3] [i_7] [i_7] [i_10] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1]);
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_29 [i_7] [i_7 - 1] [i_7] [i_1 + 3] [i_7] [i_1] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-103)))))) ? (((/* implicit */int) ((_Bool) arr_29 [i_7] [i_7 + 1] [i_7] [i_1] [i_7] [2] [19ULL]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_7] [i_7 + 2] [i_7])))))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (-((~((~(((/* implicit */int) arr_33 [i_10] [i_7] [i_6] [(unsigned char)13] [i_0])))))))))));
                            arr_37 [i_0] [i_1] [i_7] [i_7] [i_10] = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) (signed char)49)))));
                        }
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_22 [i_0] [i_1] [i_7 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))), (max((((((/* implicit */_Bool) arr_8 [i_11] [i_6] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_11] [i_11] [(short)1]))) : (arr_11 [i_11] [i_1 + 3] [i_0]))), (arr_0 [i_1 + 1]))))))));
                            arr_40 [i_7] [i_1] [i_6] [i_6 + 2] [i_7 + 1] [i_1] [i_11] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)3221), (var_1))))) >= (((((/* implicit */_Bool) arr_25 [i_6] [i_6 + 2] [i_6] [i_6 - 2] [i_6])) ? (arr_39 [i_6] [i_6] [i_6] [i_7] [i_6]) : (arr_25 [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6])))));
                        }
                        arr_41 [i_7] [i_7] [i_7] [i_7] [i_1 + 2] [i_0] = ((/* implicit */int) max(((-(6411302732152413660ULL))), (((/* implicit */unsigned long long int) ((long long int) arr_14 [i_7] [i_7 + 2] [i_7] [i_7] [i_7 + 1] [i_7] [i_7])))));
                        var_32 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)43509)) / (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [(unsigned short)9] [i_7]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_7 - 1] [i_6] [i_0]))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 4) 
                        {
                            arr_44 [i_7] = ((/* implicit */unsigned char) ((((long long int) min((((/* implicit */unsigned short) (_Bool)0)), (var_2)))) >= (((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) arr_15 [i_7])), ((unsigned short)22027))), (((/* implicit */unsigned short) (signed char)-53))))))));
                            arr_45 [i_7] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min(((signed char)47), ((signed char)20)))), (((arr_27 [i_7] [i_1] [i_6] [i_6] [i_12]) ^ (((/* implicit */long long int) 2048U))))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12035441341557137957ULL))))), ((~(6411302732152413658ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_7 + 2] [i_1] [i_1])), ((unsigned short)62315)))))));
                        }
                        for (int i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                        {
                            arr_48 [i_0] [i_1] [i_6] [i_7] [i_7] [i_13] = ((/* implicit */long long int) ((short) 1399052227U));
                            arr_49 [15U] [15U] [i_6] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_13] [i_7 - 1])) ? (9508080106134351274ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) ^ (6411302732152413659ULL))) : (((/* implicit */unsigned long long int) -5376247054427245975LL))))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])) : (297873569647545177ULL));
                            var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)-53)), (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */unsigned long long int) arr_43 [i_1 + 2] [i_7])) : (((((/* implicit */_Bool) (signed char)-53)) ? (arr_3 [i_13] [i_7] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))))))));
                        }
                        for (int i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                        {
                            arr_53 [i_0] [i_7] [i_0] = ((((((((/* implicit */_Bool) 12909456610086952661ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)64)))) == (((/* implicit */int) arr_33 [i_7] [i_7 + 2] [i_7] [i_7] [i_7 + 2])))) ? ((~(((/* implicit */int) arr_18 [i_1] [i_6] [i_7] [i_14])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7945725173297886236LL)) ? (((/* implicit */unsigned long long int) 2895915089U)) : (6411302732152413674ULL))))))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (5105011031061064270ULL) : (5105011031061064270ULL))))));
                        }
                    }
                    var_35 |= ((/* implicit */unsigned char) arr_51 [i_6 - 1] [(short)0] [(short)0] [i_1]);
                }
                /* vectorizable */
                for (unsigned long long int i_15 = 2; i_15 < 21; i_15 += 1) 
                {
                    arr_56 [i_0] [i_15] [i_15] = ((unsigned int) arr_38 [i_0] [i_0] [i_15] [i_1] [(unsigned char)6]);
                    arr_57 [i_15] [i_15] [i_1] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) arr_33 [i_1 + 2] [i_1] [i_15 - 2] [i_15] [i_15 - 1]))));
                }
                var_36 = ((/* implicit */_Bool) ((((_Bool) arr_35 [(unsigned short)17] [i_0] [i_0] [i_1 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_1])) ? ((~(2943784974U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (min((((/* implicit */unsigned long long int) 4294967295U)), (5537287463622598957ULL)))));
                arr_58 [i_1] [i_0] [i_0] &= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_42 [i_1] [0ULL] [i_1 + 3] [(short)17] [i_1] [i_1 + 3]))))) ? (((/* implicit */unsigned int) 2147483647)) : ((~(arr_8 [i_1 + 2] [i_1 + 3] [i_1 + 1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_16 = 3; i_16 < 21; i_16 += 3) 
    {
        for (unsigned long long int i_17 = 3; i_17 < 24; i_17 += 4) 
        {
            for (signed char i_18 = 2; i_18 < 23; i_18 += 3) 
            {
                {
                    var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) arr_64 [i_16 + 4] [i_17] [i_18]))));
                    /* LoopNest 2 */
                    for (short i_19 = 2; i_19 < 22; i_19 += 4) 
                    {
                        for (int i_20 = 0; i_20 < 25; i_20 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) max((max((6411302732152413658ULL), (((/* implicit */unsigned long long int) 1U)))), (((((/* implicit */_Bool) arr_70 [i_16] [i_16] [i_16 - 2] [i_16 - 3] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_16] [i_18 - 1] [i_19]))) : (((12035441341557137983ULL) >> (((/* implicit */int) var_12))))))));
                                var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) (signed char)-35))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((signed char) var_1))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-5749)), (var_7))))))), (((/* implicit */unsigned long long int) var_9))));
}
