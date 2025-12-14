/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69821
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
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (min((((/* implicit */unsigned int) var_3)), (3417992989U)))))), (((((/* implicit */_Bool) min(((short)-11270), (((/* implicit */short) var_11))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)11278))) : (((((/* implicit */_Bool) 1073741820ULL)) ? (6817128050323033696ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_21 = ((/* implicit */signed char) var_18);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) (~(arr_1 [i_0 + 3] [i_0 - 2])));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) (unsigned char)232)))) ? (arr_3 [i_0 + 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 571951468U)))))))), (((/* implicit */long long int) arr_2 [i_0]))));
            var_23 = ((/* implicit */short) ((signed char) arr_1 [i_0 - 3] [i_1 + 1]));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1 + 1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1]))) : ((-(632179445U)))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_0 [14ULL] [i_0]))))) ? ((-(632179445U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0])))))))) ? ((-(((/* implicit */int) arr_5 [i_1 - 1] [i_2] [i_2] [i_0 + 2])))) : (((/* implicit */int) ((unsigned char) arr_5 [i_1 - 1] [i_1] [i_2] [i_1])))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) arr_6 [i_1 - 1]);
                    var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_9 [i_3] [i_1 + 1] [i_2] [10LL] [i_0] [(unsigned char)6])) : (((/* implicit */int) arr_5 [i_2] [i_0] [i_0] [i_3]))))) ? (((unsigned int) (short)-10579)) : (arr_1 [i_1] [i_1 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0] [i_3] [i_0])) % ((~(((/* implicit */int) arr_5 [(unsigned char)12] [(unsigned char)11] [i_0] [i_3])))))))));
                    var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)15441))))))), (max((arr_8 [i_0 - 2] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((long long int) arr_7 [1LL])))))));
                    var_29 &= ((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_1 - 1] [i_2] [i_3]);
                    var_30 = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-30)), ((unsigned char)132)))))));
                }
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) arr_11 [i_1] [i_2] [i_0]);
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        var_32 = (+(arr_2 [i_0]));
                        var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0]))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_34 = ((/* implicit */long long int) arr_18 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]);
                        var_35 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0 + 3]);
                        var_36 = ((/* implicit */short) ((unsigned int) var_13));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 4; i_7 < 16; i_7 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned char) (-(0U)));
                        var_38 &= arr_19 [i_7 - 4] [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 2] [(unsigned short)7];
                        var_39 = arr_7 [i_2];
                        var_40 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7 - 3]))) + (arr_2 [i_4])));
                    }
                    for (unsigned int i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        arr_24 [i_0] [i_1] [(unsigned char)16] [i_8 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */long long int) arr_1 [i_1 - 1] [i_1 + 1])) : (arr_20 [(unsigned char)16] [i_0 - 2] [i_8] [i_8 + 1] [i_8 + 1])))) ? ((-(arr_20 [i_0] [i_0 + 2] [i_8] [i_8 + 1] [(short)13]))) : (max((arr_20 [i_0] [i_0 + 3] [(unsigned short)14] [i_8 + 1] [i_8]), (((/* implicit */long long int) arr_1 [i_1 + 1] [i_1 + 1])))));
                        var_41 = ((/* implicit */unsigned short) var_2);
                    }
                    arr_25 [i_0] = ((/* implicit */unsigned char) arr_7 [(unsigned char)10]);
                }
                var_42 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_16 [i_0] [i_0] [0U] [(unsigned char)12] [(unsigned char)12] [0U] [0U]), (((/* implicit */long long int) (unsigned short)27408))))), (((((/* implicit */_Bool) 15U)) ? (arr_21 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [5LL] [i_2] [(unsigned char)12] [i_1] [i_1 - 1] [(unsigned char)16] [(unsigned short)0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0 + 2] [i_0] [i_0 + 2] [i_0 - 1] [i_0 - 2])))))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 2] [i_0 + 3] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [(unsigned char)12]))))) : ((~(2318345040U))))));
            }
            for (unsigned char i_9 = 2; i_9 < 14; i_9 += 2) 
            {
                var_43 = (-((-(arr_8 [i_0] [i_0] [i_9] [(signed char)11]))));
                var_44 = ((/* implicit */unsigned int) var_4);
                var_45 = ((/* implicit */unsigned short) 9209454553400295207LL);
                arr_28 [i_0] [i_0] [i_0] = (short)-7365;
            }
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (unsigned int i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    for (short i_12 = 3; i_12 < 13; i_12 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-122)) ? ((-(arr_15 [i_0] [i_12 + 2] [i_12] [i_12 - 1] [i_12 - 3] [i_12 - 1] [i_12 + 2]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_12 + 4] [i_11 - 1] [i_10] [i_0 + 3])))))));
                            arr_35 [i_0] [i_1 - 1] [13LL] [i_1 - 1] [i_0] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-84)) ? (((((/* implicit */_Bool) max(((unsigned short)33352), (((/* implicit */unsigned short) arr_19 [(unsigned short)7] [i_1] [(unsigned char)0] [i_1 + 1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_1] [i_10])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60563)))))) : ((-(arr_33 [i_0] [i_1 - 1] [i_1 - 1] [i_11] [i_0]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_22 [i_12 + 3] [i_11] [0LL] [i_10] [i_0 - 1] [i_0 - 1] [i_0 - 2]))))), ((-(((/* implicit */int) arr_27 [i_0] [i_1 - 1] [13U])))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_13 = 1; i_13 < 15; i_13 += 2) 
        {
            var_47 = (((!(((/* implicit */_Bool) arr_23 [i_0 + 1] [(unsigned short)3] [(unsigned char)13] [i_13 + 2] [i_13 - 1])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_20 [i_0 + 1] [i_0] [6U] [6U] [6U])) : (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) arr_3 [i_0 + 3] [i_0])));
            arr_38 [i_0] [i_0] [16LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_13] [i_13 + 1])) ? (arr_21 [(unsigned char)8] [i_0] [i_13]) : (((/* implicit */unsigned long long int) arr_30 [i_0 + 3] [i_0 - 2]))));
        }
    }
    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) 
    {
        var_48 = ((/* implicit */unsigned char) 731808316U);
        var_49 = ((/* implicit */signed char) max((var_49), ((signed char)122)));
    }
    var_50 = ((/* implicit */unsigned char) max((var_50), (var_14)));
}
