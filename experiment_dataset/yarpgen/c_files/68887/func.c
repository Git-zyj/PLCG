/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68887
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
    var_16 = ((/* implicit */short) var_11);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0] [i_0])), (arr_0 [i_1]))))))))));
                                arr_13 [i_0] [i_1] [(signed char)3] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_1 - 1] [i_1 - 2])), (var_8))))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((13857536245350391897ULL), (((/* implicit */unsigned long long int) (unsigned char)12)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4190387435U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : (arr_8 [i_0] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_2 - 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) var_6);
                        arr_21 [i_6] [i_6] [i_6] = ((/* implicit */int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_0] [i_5] [(signed char)4] [(signed char)4])), (var_15))))))));
                        arr_22 [i_6] [i_0] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))), ((~(((unsigned long long int) arr_3 [i_7] [i_5]))))));
                    }
                } 
            } 
        } 
        arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)10)))) > (((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) (unsigned char)9)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [(unsigned short)8]))))))));
        /* LoopSeq 3 */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            arr_26 [i_0] [i_8] [(unsigned char)12] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_8] [i_0] [i_0] [i_0])) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)240)) && (((/* implicit */_Bool) arr_4 [i_8])))))))) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [(unsigned short)13] [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))) : (1315439548656231845ULL)))) ? (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) arr_25 [i_8])))) : (((/* implicit */int) var_7)))));
            arr_27 [i_0] [i_0] = ((/* implicit */unsigned int) 1258885663);
        }
        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_10 = 2; i_10 < 13; i_10 += 3) 
            {
                for (int i_11 = 3; i_11 < 13; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) max((arr_34 [i_0] [(unsigned char)12] [(unsigned char)12] [i_12]), ((~(((arr_41 [i_0] [i_0] [(unsigned short)13] [i_0] [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0])))))))));
                            arr_42 [3ULL] [i_12] [(short)11] [i_12] [3ULL] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0] [i_9]))))) ? (((unsigned long long int) arr_16 [i_12] [(unsigned char)3] [i_10])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) arr_24 [i_10] [i_11 + 2] [i_12 + 2]))))))), (((/* implicit */unsigned long long int) max(((signed char)107), ((signed char)-107))))));
                            var_21 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_14 [i_0])), (((((/* implicit */_Bool) arr_35 [(unsigned char)12] [i_10 - 1] [i_12 - 1] [(unsigned char)13] [i_12 - 1] [i_10])) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                        }
                    } 
                } 
            } 
            arr_43 [i_0] [i_9] [i_9] = ((/* implicit */int) var_2);
            arr_44 [i_0] [i_9] [(short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_30 [i_0] [i_9])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0]))))) : ((+(arr_28 [i_9] [i_9])))));
        }
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            arr_48 [i_13] = ((/* implicit */unsigned int) arr_11 [i_0] [i_13] [i_0] [i_0] [i_0]);
            arr_49 [i_0] [i_0] [i_13] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)9027)) && (((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_13])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(unsigned char)0] [(short)4] [i_0]))) : (arr_28 [i_0] [i_0])));
        }
    }
    for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
    {
        arr_53 [10U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_14] [i_14])) + (((/* implicit */int) arr_50 [i_14]))))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) min((arr_51 [i_14] [i_14]), (((/* implicit */unsigned short) arr_50 [i_14])))))));
        arr_54 [i_14] &= ((/* implicit */int) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned char)10)))), (((/* implicit */int) max(((unsigned char)0), ((unsigned char)7))))))) ^ ((~(min((var_3), (((/* implicit */unsigned int) var_9))))))));
        arr_55 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_14] [i_14])) ? (((((/* implicit */int) (unsigned char)17)) + (((/* implicit */int) (unsigned short)3885)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_50 [i_14])), (var_3)))) ? (((/* implicit */int) min(((unsigned short)61999), (((/* implicit */unsigned short) var_2))))) : (((var_1) - (((/* implicit */int) arr_52 [i_14]))))))));
        arr_56 [i_14] = (~((-(var_12))));
    }
    var_22 = ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) var_2)) ? (17293822569102704640ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((unsigned long long int) ((((/* implicit */unsigned int) var_6)) < (var_11))))));
}
