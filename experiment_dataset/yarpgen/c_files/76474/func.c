/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76474
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9746846392206695793ULL)) ? (9746846392206695769ULL) : (7103551028923931314ULL)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((var_4), (var_13)))))) : (((/* implicit */int) var_3))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_4 [i_1] [i_0] [i_1] = ((/* implicit */int) min((arr_2 [i_1] [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))));
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_1])))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [13])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_0 [(unsigned char)15]))))) ? (((((/* implicit */_Bool) 9746846392206695793ULL)) ? (((/* implicit */int) (unsigned short)9951)) : (((/* implicit */int) (unsigned short)25037)))) : (((/* implicit */int) arr_2 [i_1] [i_1] [(signed char)6]))))));
        }
        for (unsigned short i_2 = 4; i_2 < 14; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                arr_10 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_0])), (arr_9 [i_0] [i_0] [i_3] [i_3])))) ? (min((arr_9 [i_0] [i_2] [i_3] [i_3]), (arr_6 [i_0]))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 1] [i_2 + 1])) ? (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_8 [i_0] [i_2] [(signed char)9])))))), (((((/* implicit */_Bool) min((arr_6 [i_0]), (arr_9 [i_0] [(unsigned short)12] [i_0] [i_0 + 2])))) ? (((((/* implicit */_Bool) arr_2 [i_3] [i_2] [i_0])) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0])) : (arr_3 [(signed char)2] [i_2] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2 - 3] [i_3])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (arr_8 [14] [i_2] [i_3]))))))));
                arr_11 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */int) (_Bool)1)), (4194304))), (max((((/* implicit */int) arr_0 [(_Bool)1])), (((((/* implicit */_Bool) arr_2 [(unsigned char)15] [i_2] [(unsigned char)15])) ? (arr_6 [i_0]) : (((/* implicit */int) arr_0 [i_0]))))))));
                var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [10] [i_2] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_3])) : (arr_6 [i_0]))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 5119332832762084696LL)), (10889034028382771715ULL)))) ? (((/* implicit */int) min((arr_7 [i_0]), (arr_7 [i_0])))) : (((((/* implicit */_Bool) arr_8 [9] [9] [i_0])) ? (arr_6 [i_0 + 3]) : (((/* implicit */int) arr_0 [i_0]))))))));
            }
            for (int i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                var_17 = ((/* implicit */long long int) arr_2 [i_0] [i_2] [i_0]);
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_15 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_17 [i_0] [i_0] [i_0] [1ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_4]))))))))) ? (arr_15 [i_0] [i_0]) : (((/* implicit */long long int) arr_17 [i_5] [i_0] [i_2] [i_0])));
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_15 [i_5] [i_0])) ? (((/* implicit */int) arr_14 [(short)14] [i_2] [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0] [i_5] [i_6])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_0 [(_Bool)1])))))), (((/* implicit */int) arr_16 [0] [0]))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [4ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6]))) : (max((min((arr_3 [i_0 + 2] [i_4 + 1] [i_5]), (((/* implicit */long long int) arr_21 [i_0] [i_2 - 2] [i_4 - 1] [i_5] [i_6])))), (arr_15 [i_0] [i_0])))));
                    }
                    for (short i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        arr_26 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32284)) ? (5119332832762084674LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_4] [i_5] [i_4] [i_2] [i_0])) : (((/* implicit */int) arr_21 [1U] [i_2] [(unsigned short)0] [i_5] [7LL]))))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_13 [14U] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_4] [i_0]))));
                        var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 5119332832762084673LL)), (14667106087158661958ULL)))) ? (((/* implicit */long long int) arr_24 [i_0] [(signed char)5] [i_0] [(signed char)5] [i_0] [i_7] [i_7])) : (min((5119332832762084659LL), (((/* implicit */long long int) -12)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-11011)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (signed char)-27)))))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 12; i_8 += 2) 
                    {
                        arr_30 [i_0] [i_2 - 4] [i_4] [i_2 - 4] [4] = arr_25 [i_0] [i_0] [i_4];
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) 6546886503070987474ULL)) ? (max((((((/* implicit */_Bool) arr_2 [i_0] [i_4] [i_0])) ? (arr_13 [i_0 + 2] [i_0 + 2] [i_0 + 2]) : (((/* implicit */unsigned long long int) 4294967287U)))), (((/* implicit */unsigned long long int) (unsigned short)32284)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32284)))))));
                        arr_31 [i_0] [i_0] [i_2] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_21 [i_0] [i_0] [i_5] [i_5] [i_8])), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_4])) ? (min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_29 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_4] [i_0])))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-52)) ? (30U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48)))))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_20 [i_0] [(unsigned char)6] [i_4] [i_5] [i_8])))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0 + 3] [i_0 + 3] [i_0] [i_0] [i_5] [i_5] [i_8 + 1])) ? (arr_24 [i_0] [i_2] [i_0] [i_5] [i_0] [i_2] [i_8]) : (((/* implicit */unsigned int) arr_8 [(short)6] [i_0] [i_0]))))) ? (min((((/* implicit */unsigned long long int) arr_14 [i_2] [i_4] [i_0])), (arr_13 [i_0] [i_5] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_5] [i_0])) ? (arr_27 [i_0] [(unsigned char)10] [i_8] [i_5]) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49744)) ? (5119332832762084669LL) : (((/* implicit */long long int) -1912389878)))))));
                        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((arr_13 [i_0] [(signed char)7] [(signed char)7]), (arr_13 [i_0] [9U] [i_4 + 1])))) ? (arr_22 [i_0] [i_0] [(unsigned char)2] [(short)12]) : (((((/* implicit */_Bool) arr_7 [i_5])) ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_2 - 3] [i_4 - 1] [i_5] [(signed char)3] [i_8])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8] [i_5] [i_4] [i_2])) ? (arr_3 [i_4] [i_5] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_2] [i_4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_0] [i_5])), (arr_2 [i_0] [i_2 - 4] [i_2 - 4]))))) : (arr_24 [i_0] [i_2] [i_0] [i_2] [i_4] [i_5] [i_0]))))));
                    }
                }
                for (short i_9 = 1; i_9 < 14; i_9 += 1) 
                {
                    var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [(signed char)9] [i_2] [i_4] [(signed char)9] [i_9])) ? (arr_8 [i_0] [i_0] [i_9]) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_0]))))), (((((/* implicit */_Bool) arr_9 [4U] [4U] [4U] [(unsigned short)12])) ? (((/* implicit */long long int) arr_28 [i_0] [i_2] [i_4] [i_9])) : (arr_3 [i_0 + 2] [i_4] [i_0 + 2])))))), (min((((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_4] [i_4]), (((/* implicit */long long int) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1] [i_2] [i_4] [i_4] [(_Bool)1])) ? (arr_23 [i_0] [i_9] [i_9] [6ULL] [i_4] [i_0]) : (((/* implicit */unsigned long long int) arr_28 [i_4] [i_4] [i_4] [i_4]))))))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        arr_39 [(unsigned short)10] [(unsigned short)10] [i_4] [i_9] [(unsigned short)10] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_19 [i_10] [i_9] [i_4] [i_4] [i_0] [i_0]), (((/* implicit */unsigned int) arr_8 [(signed char)8] [i_10] [i_4]))))) ? (max((arr_28 [i_0] [i_2] [7ULL] [i_2]), (((/* implicit */unsigned int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10])))) : (((/* implicit */unsigned int) min((arr_6 [i_0]), (((/* implicit */int) arr_7 [i_9])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1]))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [13])), (arr_25 [i_0] [i_2] [i_10])))) ? (((((/* implicit */_Bool) arr_34 [i_10] [i_9 - 1] [i_4 + 1] [i_2] [i_0])) ? (arr_35 [i_0] [i_2] [i_4] [i_9] [i_10]) : (((/* implicit */unsigned long long int) arr_27 [i_0] [6] [5U] [i_10])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_9 - 1] [i_9 - 1] [i_0])) ? (arr_8 [i_4] [i_4] [i_4]) : (((/* implicit */int) arr_21 [i_0] [(short)10] [i_4 - 1] [i_0] [i_4])))))))));
                        arr_40 [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_36 [2] [(signed char)0] [i_9] [i_9] [i_9] [i_9])), (((((/* implicit */_Bool) arr_15 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))) : (arr_24 [i_10] [i_10] [i_0] [i_4] [i_0] [i_2] [i_0])))))) ? (((/* implicit */int) arr_36 [i_0 + 1] [i_0 + 1] [i_4 + 1] [i_9] [i_0] [i_9])) : (((/* implicit */int) max((arr_7 [i_2]), (((/* implicit */unsigned char) max((arr_21 [i_0] [i_2] [i_0] [i_9] [i_9]), (arr_16 [i_4] [i_0])))))))));
                        arr_41 [i_0] [6] [i_0] [6] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_0] [i_0])) ? (min((arr_28 [i_0] [3ULL] [3ULL] [i_9]), (((/* implicit */unsigned int) min((arr_29 [1ULL]), (((/* implicit */int) arr_36 [i_0 + 2] [i_2 - 2] [6] [i_9] [i_10] [i_4]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_2] [i_2] [i_4 + 1] [i_10])))));
                    }
                    var_25 = ((/* implicit */signed char) min((arr_13 [i_2] [i_4] [i_9]), (((/* implicit */unsigned long long int) arr_6 [i_0]))));
                }
                var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_37 [i_0] [(signed char)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_4] [i_2] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_4] [i_4] [i_0] [i_4])) ? (arr_6 [i_4]) : (arr_9 [i_2] [i_2] [i_2 + 2] [i_2]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_2] [i_4] [4])) ? (arr_17 [i_0] [i_2] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(signed char)4] [i_2] [i_2] [(signed char)4])))))) : (max((arr_3 [i_0] [i_2] [i_0]), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_19 [i_4] [i_4 - 1] [i_4] [i_2] [i_0] [i_0]))))))));
                arr_42 [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_2] [i_4]);
            }
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                var_27 += ((/* implicit */unsigned short) max((min((max((arr_3 [3U] [i_11] [i_11]), (((/* implicit */long long int) arr_21 [i_0] [i_0 + 1] [i_2] [i_11] [i_11])))), (((/* implicit */long long int) arr_32 [i_0] [i_2] [i_11])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_2] [i_11])) ? (((/* implicit */unsigned long long int) arr_24 [i_11] [i_2] [(_Bool)1] [i_2] [i_11] [i_11] [i_11])) : (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_19 [i_0] [i_0 - 1] [i_2] [i_2] [i_11] [i_11]) : (((/* implicit */unsigned int) arr_8 [(short)10] [(short)10] [i_11])))))))));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        {
                            arr_49 [(unsigned char)12] [i_2 + 1] [(unsigned char)12] [(unsigned char)12] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 65024U)) ? (min((((((/* implicit */_Bool) 17739077508749653859ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_43 [i_0 + 3] [i_0] [i_0 + 3]))), (((/* implicit */unsigned long long int) 2205285501U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                            var_28 = ((/* implicit */short) arr_21 [i_13] [i_12] [i_11] [i_2] [i_0 + 2]);
                            var_29 = ((/* implicit */int) arr_19 [i_0] [i_2] [i_0] [i_12] [i_13] [i_13]);
                        }
                    } 
                } 
                var_30 ^= ((/* implicit */short) arr_24 [i_0] [i_2 + 2] [(signed char)8] [i_0] [i_2] [(unsigned char)8] [i_0]);
            }
            arr_50 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)64)), ((unsigned char)128)));
            arr_51 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((arr_35 [i_0] [i_0] [(short)3] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_37 [i_0] [i_0])))), (((/* implicit */unsigned long long int) arr_20 [i_2] [i_2] [i_2] [i_0] [i_0]))))) ? (min((((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_36 [i_2] [i_0] [i_2] [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((arr_2 [i_0 + 2] [i_0 + 2] [i_2]), (arr_12 [i_0] [i_2] [i_2] [i_2])))))) : (((/* implicit */int) arr_0 [i_0]))));
            arr_52 [i_2] [i_0] [i_0] = ((/* implicit */signed char) arr_35 [i_0] [i_0] [i_0] [i_0] [(unsigned char)12]);
        }
        /* LoopSeq 2 */
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
        {
            var_31 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0 + 3] [i_14] [i_14])) ? (arr_27 [i_0] [i_14] [i_14] [i_0]) : (((/* implicit */int) arr_48 [i_0] [i_14] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) arr_17 [i_14] [i_14] [i_0] [i_0 + 1])) : (min((arr_45 [i_14] [i_14] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_16 [14ULL] [14ULL])))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 2878145591622102009LL)) ? (((/* implicit */int) (unsigned short)9205)) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) min((arr_2 [i_0] [i_0] [i_14]), (((/* implicit */unsigned short) arr_21 [10ULL] [10ULL] [10ULL] [i_14] [i_14]))))))))));
            var_32 = ((/* implicit */short) max((18ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
            var_33 = arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 + 1];
            var_34 = ((/* implicit */unsigned int) arr_14 [i_0 + 3] [i_0 + 3] [i_0]);
        }
        for (int i_15 = 1; i_15 < 15; i_15 += 1) 
        {
            var_35 = ((/* implicit */unsigned int) min((var_35), (arr_24 [i_0] [i_0] [6ULL] [i_15] [i_15] [i_15 + 1] [i_15])));
            var_36 = ((/* implicit */unsigned long long int) arr_7 [i_0 + 1]);
            var_37 += ((/* implicit */long long int) arr_20 [i_15] [i_15] [(unsigned short)1] [i_15] [i_15]);
        }
        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_54 [i_0])), (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [(signed char)7] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_36 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 2])) : (((/* implicit */int) arr_36 [i_0] [i_0 + 3] [i_0] [i_0] [i_0 - 1] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0 + 1] [i_0] [13U] [i_0] [i_0] [i_0]))))) ? (min((arr_25 [i_0] [i_0] [i_0]), (arr_43 [i_0] [i_0] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [(unsigned char)1]))));
    }
}
