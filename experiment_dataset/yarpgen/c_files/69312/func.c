/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69312
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
    var_15 = ((/* implicit */signed char) var_11);
    var_16 = ((/* implicit */unsigned long long int) (((+(max((1207903244U), (((/* implicit */unsigned int) var_4)))))) / (max((((/* implicit */unsigned int) min((var_6), (((/* implicit */int) var_8))))), (var_0)))));
    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_11)) ? ((~(11525455551619143745ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)80), ((signed char)80))))))), (((/* implicit */unsigned long long int) var_14))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_2]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)60665)) : (((/* implicit */int) (unsigned char)91)))) : (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))));
                            arr_12 [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [24LL] [i_0])) ^ (((/* implicit */int) arr_7 [i_0] [i_1] [i_3])))))));
                        }
                    } 
                } 
                arr_13 [8U] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)22))))) : (var_2)))));
                /* LoopSeq 2 */
                for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 23; i_5 += 3) 
                    {
                        arr_21 [13ULL] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_17 [i_5] [i_4 + 2] [i_0] [i_0])) >> (((((/* implicit */int) var_9)) - (20586)))))));
                        var_19 &= ((/* implicit */unsigned int) var_13);
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) (~(arr_9 [i_1] [i_6])));
                        /* LoopSeq 3 */
                        for (int i_7 = 2; i_7 < 23; i_7 += 3) /* same iter space */
                        {
                            arr_27 [i_7] = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_4 + 4]))));
                            arr_28 [i_0] [i_1] [i_4] [i_4] [i_7] [i_7] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)979))));
                            arr_29 [(unsigned char)15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_4 + 4] [i_1] [i_7 + 2])) : ((-(((/* implicit */int) (unsigned short)61203))))));
                            arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (+(1207903244U)));
                        }
                        for (int i_8 = 2; i_8 < 23; i_8 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_4 - 1] [i_4] [i_4 - 1] [i_8 + 2] [i_8 - 1])) ? (((/* implicit */int) ((unsigned short) var_10))) : (((((/* implicit */int) var_9)) % (((/* implicit */int) arr_17 [i_0] [i_4 + 4] [i_6] [1LL]))))));
                            arr_33 [i_0] [i_1] [i_4] [i_6] [i_4] = ((/* implicit */signed char) ((int) arr_3 [i_4]));
                            arr_34 [i_0] [i_1] [i_0] [i_6] = ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [1LL])) ? (arr_15 [20U] [i_1] [i_1]) : (((/* implicit */int) (unsigned short)45479)));
                        }
                        for (unsigned char i_9 = 1; i_9 < 24; i_9 += 3) 
                        {
                            arr_38 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
                            arr_39 [i_0] [i_0] [i_6] [(unsigned short)1] [i_0] [i_9] [i_9] = ((/* implicit */signed char) ((unsigned char) ((int) arr_2 [i_9])));
                            arr_40 [i_0] [(unsigned short)4] [(unsigned char)15] [i_0] [i_9] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)4870))));
                        }
                        arr_41 [i_6] [(unsigned short)15] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) arr_3 [i_1]))));
                    }
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        arr_45 [i_0] [i_0] [i_4] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */int) (signed char)-22)) % (((/* implicit */int) var_3)))), (max((-466648715), (((/* implicit */int) arr_14 [i_0] [(unsigned short)5] [10LL])))))))));
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (max((var_2), (((/* implicit */unsigned long long int) (unsigned short)60666)))) : (((/* implicit */unsigned long long int) (~(1661500563)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)193))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (298361031U)))) : (-4734738679275688282LL))))));
                        var_23 = ((/* implicit */signed char) max((((/* implicit */int) var_10)), ((((!(((/* implicit */_Bool) 17659990321896105926ULL)))) ? (((/* implicit */int) max((var_4), (arr_3 [i_10])))) : (((/* implicit */int) min(((short)-26319), (((/* implicit */short) (unsigned char)95)))))))));
                        arr_46 [i_0] [i_4] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_18 [(short)0] [i_4 + 4] [(short)22] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_0] [i_4 + 4] [i_0] [i_10])))) != (((((/* implicit */_Bool) (signed char)62)) ? (1174060453) : (((/* implicit */int) (signed char)-65))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        arr_49 [i_0] [i_1] [i_4] [i_1] [(unsigned short)1] [i_0] &= ((/* implicit */int) var_1);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)25719))))) : (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10218))) : (var_13)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_31 [i_1] [9U])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 241959314)) ? (var_6) : (arr_22 [3U] [i_0] [i_1] [i_4] [i_4] [(signed char)18]))) : (((/* implicit */int) arr_17 [(signed char)14] [13LL] [i_4] [(signed char)14]))))) : (2479968149U)));
                        arr_50 [(unsigned char)4] = ((/* implicit */unsigned short) arr_5 [2]);
                    }
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) var_7);
                        arr_53 [i_0] [i_0] [i_1] [i_4] [i_4] [2] = ((/* implicit */unsigned long long int) max((((int) var_2)), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)107)), ((unsigned char)72))))));
                    }
                }
                for (unsigned int i_13 = 3; i_13 < 23; i_13 += 3) 
                {
                    arr_57 [i_0] [i_1] [(short)7] [i_13] = ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_2 [i_13]))))))) ? ((((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)251)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_15 [i_0] [i_1] [i_0]))) || (((/* implicit */_Bool) (unsigned char)162))))));
                    var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)83), (((/* implicit */unsigned char) var_8))))))));
                }
                arr_58 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
            }
        } 
    } 
}
