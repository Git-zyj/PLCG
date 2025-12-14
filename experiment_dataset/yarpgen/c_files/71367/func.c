/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71367
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        var_18 = max((((((/* implicit */_Bool) arr_0 [i_0])) ? (2399538717U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_9 [i_0] [8ULL] [i_2 - 1] [i_0]))));
                        var_19 += ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-76)))))), (((unsigned char) arr_9 [i_1 + 2] [i_2 - 1] [i_3 + 1] [10]))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(min((arr_9 [i_1 + 2] [i_3 - 1] [i_2] [4ULL]), (((/* implicit */unsigned int) arr_6 [i_1 + 2] [i_3 - 1] [i_1 + 2] [i_2 - 1])))))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) 1546171446U)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [6LL]))));
                        var_22 = ((((/* implicit */_Bool) arr_7 [i_1 + 3] [2])) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_7 [i_1] [12U])));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4 + 1] [i_4])) ? (arr_10 [i_0] [i_1] [i_0] [10ULL] [i_4]) : (((/* implicit */long long int) arr_5 [i_2 - 1] [(signed char)6]))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((int) arr_13 [8U] [0LL] [i_1 - 1] [i_1 - 1] [i_2] [8U])))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        var_24 = ((((/* implicit */_Bool) max((1459991472499738866ULL), (((/* implicit */unsigned long long int) arr_4 [1U] [i_1]))))) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_1] [i_2 + 1] [i_2] [i_5 - 1]))));
                        var_25 += ((((/* implicit */_Bool) max((-951765964265044588LL), (((/* implicit */long long int) ((int) arr_8 [i_5] [4ULL] [4ULL] [i_0] [4ULL] [i_0])))))) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 1] [0ULL] [6ULL] [i_5])) : (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1 + 2]))));
                        var_26 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_5])) ? (((/* implicit */long long int) 2009682837U)) : (arr_2 [i_0])))) ? (((unsigned long long int) -329907937)) : (((/* implicit */unsigned long long int) arr_3 [i_5 + 1])))), (((/* implicit */unsigned long long int) ((short) arr_5 [i_0] [i_5 + 1]))));
                        arr_18 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2])) ? (((long long int) arr_6 [i_0] [i_1] [i_2] [3U])) : (((/* implicit */long long int) ((unsigned int) -329907953))))));
                    }
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 3; i_7 < 11; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) min((min((min((216261837), (((/* implicit */int) arr_8 [i_0] [i_1] [3U] [i_6] [i_0] [i_6])))), (((/* implicit */int) arr_15 [i_1 + 2] [i_2 - 1] [i_2 + 1] [i_0])))), (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
                            arr_25 [i_0] [i_6] [i_0] = max((((/* implicit */unsigned int) ((unsigned short) arr_5 [i_7 - 1] [i_7 + 1]))), ((~(4294967295U))));
                        }
                        for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            arr_29 [i_0] [i_0] [i_1] [i_2] [i_6] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [6U] [i_8] [i_2 + 1] [i_6] [i_0] [i_6])) ? (arr_27 [i_0] [i_0] [i_2 - 1] [i_6] [i_0] [0U]) : (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_27 [i_0] [i_1 - 1] [i_2] [i_6] [i_0] [i_6])) ? (arr_27 [i_0] [i_0] [i_2 - 1] [i_0] [i_0] [i_8]) : (arr_27 [i_8] [i_0] [i_2] [5U] [i_0] [i_0]))) : (max((arr_27 [i_0] [i_0] [(unsigned char)4] [i_0] [i_0] [i_0]), (arr_27 [i_8] [i_0] [i_2] [i_2] [i_0] [i_0])))));
                            var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_28 [i_0] [i_0] [12U] [i_2 - 1] [i_0] [i_8]), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43330)))))))), (max((((/* implicit */long long int) arr_1 [i_2] [i_6])), (max((((/* implicit */long long int) arr_24 [i_0] [4LL] [i_0] [i_6])), (arr_10 [1ULL] [1ULL] [i_0] [i_6] [1ULL])))))));
                            var_29 = ((long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [5U])) ? (((/* implicit */unsigned int) arr_28 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_2] [i_0] [i_2 - 1])) : (0U)));
                            arr_30 [i_0] = ((unsigned short) min((arr_11 [9] [8LL] [7U] [i_2 - 1]), (((/* implicit */unsigned long long int) arr_21 [2ULL] [i_8] [i_0] [i_2 - 1] [i_2 - 1]))));
                        }
                        for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (max((max((((/* implicit */unsigned long long int) 329907937)), (arr_11 [7ULL] [i_2 + 1] [i_2] [1U]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_1] [i_2] [i_6] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [(signed char)8]))) : (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((unsigned int) arr_3 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_32 [2ULL]), (((/* implicit */unsigned short) arr_8 [i_0] [i_0] [6ULL] [10U] [12ULL] [i_9])))))))))))));
                            var_31 ^= ((/* implicit */long long int) min((min((arr_11 [i_9 - 3] [i_2 + 1] [i_1 + 2] [i_0]), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1 + 3] [i_2 + 1] [i_9 - 2])))), (((/* implicit */unsigned long long int) arr_5 [i_0] [9ULL]))));
                        }
                        var_32 = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [i_1] [i_1] [(signed char)8] [(signed char)8])), (arr_33 [i_0] [i_1] [i_1] [i_2] [i_1] [12U] [i_6]))))), (min((max((((/* implicit */long long int) arr_15 [9ULL] [i_1] [i_2] [i_0])), (arr_26 [i_0] [i_0] [i_2] [8LL] [i_2] [i_2]))), (((/* implicit */long long int) ((unsigned int) (signed char)12)))))));
                        var_33 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1))));
                        var_34 |= ((/* implicit */unsigned int) arr_22 [10LL] [8ULL] [10LL] [i_6] [i_6]);
                    }
                    arr_34 [3LL] [3LL] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_1 + 3] [i_1 + 2] [i_0])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_1 + 3] [i_1 + 2] [i_0])) : (((/* implicit */int) arr_6 [i_2 - 1] [i_1 + 3] [i_1 + 2] [i_0]))))));
                    var_35 += ((/* implicit */unsigned long long int) min((arr_28 [6ULL] [i_0] [i_1] [i_1] [(signed char)12] [i_2]), (216261826)));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 1; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_17 [9LL] [9LL] [i_2 + 1] [i_2 + 1]) : (((/* implicit */long long int) arr_28 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))));
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (~(arr_27 [i_10] [10U] [i_0] [i_0] [10U] [i_0]))))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 12; i_11 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (max((max((arr_11 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_12 [4U] [i_1] [i_1] [i_11]))), (((unsigned long long int) ((int) (signed char)125)))))));
                        arr_42 [(unsigned short)12] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 2] [i_2 + 1] [i_1 + 2])) ? (arr_11 [i_11] [i_2 - 1] [i_1] [i_0]) : (arr_11 [i_11 - 1] [i_2 - 1] [i_1] [i_0])))));
                        var_39 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    }
                    for (unsigned int i_12 = 1; i_12 < 12; i_12 += 4) /* same iter space */
                    {
                        arr_45 [i_0] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_43 [i_0] [i_1 + 1] [8U] [i_0])), (arr_16 [i_0] [i_1 - 1] [i_12 - 1]))))));
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_6 [7U] [i_1] [i_1] [i_1])), (arr_41 [i_0] [i_0] [(unsigned short)12] [10U] [i_0] [10U]))))) : (arr_10 [9ULL] [i_12 - 1] [i_0] [i_1] [i_0])))) ? (1945378257404843682ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0])))));
                        var_41 = ((/* implicit */unsigned long long int) (~(min((arr_26 [i_0] [i_1 + 4] [i_2 - 1] [i_2 + 1] [i_12 + 1] [i_12]), (arr_26 [i_0] [i_1 + 4] [i_2 - 1] [i_2 + 1] [i_12 + 1] [i_12])))));
                        var_42 = ((/* implicit */short) ((unsigned short) (signed char)-125));
                    }
                }
            } 
        } 
    } 
    var_43 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)19550));
}
