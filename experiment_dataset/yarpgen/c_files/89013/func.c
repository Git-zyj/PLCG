/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89013
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [(short)22] = ((/* implicit */unsigned char) arr_1 [i_0]);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_13 [i_0 + 1] [i_1] [i_0] [i_3] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_10)))));
                        arr_14 [i_2] = ((((/* implicit */_Bool) (~(((106132888U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(signed char)12] [i_2] [i_3])))))))) ? (max((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), (((long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
                        arr_15 [22] [i_0] [i_0] [22] = ((/* implicit */short) ((((/* implicit */_Bool) min((14554610152073543288ULL), (((/* implicit */unsigned long long int) ((_Bool) var_7)))))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_5))))))) : (max((((/* implicit */unsigned long long int) arr_10 [i_3] [i_0] [i_0] [i_0])), ((~(arr_9 [i_0] [(_Bool)1] [7ULL] [(short)22] [i_3])))))));
                    }
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        arr_19 [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 14554610152073543288ULL)))))));
                        arr_20 [i_0] [i_2] [22U] [i_2] [i_2] [i_4] = ((((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)0] [i_0 - 1] [i_0]))) : (max((arr_3 [i_1] [i_1]), (((/* implicit */long long int) arr_17 [i_0] [i_1] [i_1] [3ULL] [i_2] [i_4])))))) != (((/* implicit */long long int) ((((((/* implicit */_Bool) 3892133921636008328ULL)) ? (arr_6 [i_2] [i_1] [i_2] [i_4]) : (((/* implicit */int) arr_0 [i_0] [i_4])))) / (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2]))))));
                        arr_21 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */int) var_2)) - ((~(((/* implicit */int) var_9)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-64)), (14554610152073543288ULL)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            arr_24 [i_5] [i_2] [4U] [i_2] [i_2] [i_0] &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_4] [i_2] [i_1] [i_0])))) ? (((/* implicit */int) (unsigned short)65472)) : (924978980)));
                            arr_25 [i_0 - 1] [i_1] [i_0] [i_4] [i_5] = ((/* implicit */_Bool) min((((min((((/* implicit */unsigned long long int) (short)508)), (6946072718618845772ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)17839)) - (((/* implicit */int) (short)-2272))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_6 = 2; i_6 < 24; i_6 += 3) 
                        {
                            arr_28 [i_0] [i_1] [i_0] [i_4] [i_0 + 1] = ((((/* implicit */int) var_8)) % (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))));
                            arr_29 [i_6 - 1] [i_0] [(signed char)0] [i_4] [i_6 + 1] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) ((short) 4294967295U)));
                            arr_30 [i_4] [i_1] [i_4] [i_2] [i_1] = ((/* implicit */unsigned short) ((var_0) ? ((+(((/* implicit */int) (unsigned short)62)))) : ((~(((/* implicit */int) arr_23 [(unsigned short)9] [23]))))));
                            arr_31 [i_2] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_32 [i_0] [i_1] [(short)10] [i_4] [i_2] [22ULL] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_2]))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            arr_36 [i_2] [i_2] [i_2] = ((((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (arr_10 [i_0] [(signed char)14] [i_2] [i_2])))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))))))) >= ((((!(((/* implicit */_Bool) arr_22 [i_0 - 1])))) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) (!(arr_23 [i_2] [i_7])))))));
                            arr_37 [i_2] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_7)), (arr_6 [i_0] [i_0 + 1] [i_2] [i_4]))))));
                            arr_38 [i_0 + 1] [i_1] [i_7] [i_4] [i_0] = ((/* implicit */int) arr_34 [i_0] [i_1] [(unsigned short)17]);
                        }
                        for (unsigned char i_8 = 2; i_8 < 24; i_8 += 3) 
                        {
                            arr_41 [21] [(signed char)13] [i_1] [(unsigned short)4] [(unsigned short)0] [i_0] [i_8] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_4] [(unsigned short)9]);
                            arr_42 [(signed char)18] [i_1] [i_2] [i_4] [(short)16] [i_4] [i_1] = ((/* implicit */long long int) var_8);
                            arr_43 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) var_4);
                        }
                        for (short i_9 = 1; i_9 < 24; i_9 += 4) 
                        {
                            arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] = max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_4] [i_9 + 1]))))) ? (((/* implicit */int) arr_27 [18] [i_1] [i_0] [i_4] [i_4] [i_9])) : (((((/* implicit */_Bool) arr_39 [i_0 - 1] [i_1] [i_2] [(unsigned short)10] [i_9 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))), (((((/* implicit */int) ((((/* implicit */_Bool) (short)17839)) || (((/* implicit */_Bool) var_6))))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_9)))) + (155))))));
                            arr_47 [i_0] [i_2] [i_0 - 1] [(signed char)0] [i_0 - 1] &= ((/* implicit */short) arr_12 [i_0 + 1] [i_1] [i_2]);
                            arr_48 [i_9] [i_4] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_9 + 1])) >> (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((short) arr_2 [i_2]))) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_9 + 1]))));
                        }
                    }
                    arr_49 [i_0] = ((/* implicit */_Bool) (unsigned short)64);
                    arr_50 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_2] [i_2]))) * (0U)))));
                }
                for (short i_10 = 2; i_10 < 24; i_10 += 4) 
                {
                    arr_55 [i_0 - 1] [i_0] [i_10 - 2] = ((((((/* implicit */_Bool) (unsigned short)65472)) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0] [i_0])))) : (((/* implicit */int) ((short) arr_51 [i_0] [i_1] [i_10 - 2] [i_0]))))) & ((~(((arr_1 [i_0]) >> (((((/* implicit */int) var_5)) + (8551))))))));
                    arr_56 [i_10] [i_1] = ((/* implicit */short) arr_0 [i_0] [i_0]);
                    arr_57 [i_0] [i_0 - 1] [20U] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                }
                arr_58 [i_0] [i_0] = ((/* implicit */short) var_6);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((var_7), (var_9)))) << (((((/* implicit */int) max((((/* implicit */short) var_7)), ((short)15837)))) - (15833))))) << (((((/* implicit */int) var_10)) - (34973)))));
    var_12 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_3)), ((short)-31541)))) || (((/* implicit */_Bool) var_7))))) << (((/* implicit */int) var_4))));
    var_13 = ((/* implicit */unsigned char) min((((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))), ((_Bool)0)));
}
