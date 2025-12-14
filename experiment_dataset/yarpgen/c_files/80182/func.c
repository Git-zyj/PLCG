/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80182
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
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) (-(7496786389648910250ULL)));
        arr_2 [i_0] [i_0] = (short)8689;
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned short)61602))))));
            arr_7 [i_1] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3]))) >= (-2233499148001937442LL)));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        arr_19 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */int) arr_10 [i_2] [i_5]);
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)61602))) ? (((((((/* implicit */_Bool) 2326386885U)) ? (var_17) : (((/* implicit */int) (unsigned short)61602)))) + (((/* implicit */int) (unsigned char)79)))) : (((/* implicit */int) (signed char)126))));
                            arr_22 [i_2] [i_3] [i_3] [i_4] [i_3] [i_5] = (-((-(((((/* implicit */_Bool) arr_17 [(signed char)12] [i_4] [i_5] [(signed char)6])) ? (var_4) : (((/* implicit */int) arr_17 [(signed char)12] [(unsigned char)8] [16LL] [(unsigned char)13])))))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 16; i_7 += 1) 
                        {
                            var_21 = ((((/* implicit */_Bool) 1745791395U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_12 [i_4] [7ULL] [i_7]));
                            arr_25 [i_2] [i_5] [13] = ((/* implicit */unsigned int) arr_0 [i_5]);
                        }
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) (((-(((((/* implicit */int) arr_4 [i_2] [i_5] [i_5])) & (((/* implicit */int) arr_17 [i_3] [10] [i_5] [12])))))) - (((/* implicit */int) arr_11 [i_4] [i_4] [i_4]))));
                            var_23 += ((/* implicit */int) (unsigned char)99);
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_14 [i_2] [i_2] [i_2])) == (((/* implicit */int) arr_1 [i_2]))))))));
                            var_25 = ((/* implicit */long long int) (~(arr_27 [i_2] [i_3] [i_3] [i_2 - 1] [i_9])));
                            arr_31 [i_5] [i_5] [i_5] [i_4] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_2] [2U] [i_4] [i_5] [i_9] [2U] [i_5])) & (((/* implicit */int) (unsigned short)3933))))) ? (((/* implicit */int) arr_30 [i_9] [i_5] [i_2] [i_5] [i_2] [i_2] [i_2 - 2])) : (((/* implicit */int) arr_15 [(_Bool)1] [i_3] [i_4] [i_2 + 1]))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((arr_27 [i_2] [i_2 - 1] [i_3] [i_5] [i_2]) / (arr_27 [4] [i_2 - 2] [i_4] [i_9] [i_4]))))));
                            arr_32 [i_9] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_2 - 2]))));
                        }
                        /* LoopSeq 4 */
                        for (signed char i_10 = 1; i_10 < 16; i_10 += 4) /* same iter space */
                        {
                            arr_35 [i_10] [12U] [i_4] [i_5] [i_2] = ((/* implicit */unsigned int) max((arr_13 [(unsigned short)13]), (((/* implicit */unsigned short) ((2797362299U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))))))));
                            arr_36 [i_2 - 2] [i_2 - 2] [i_4] [i_5] [i_4] [12LL] [i_5] = ((/* implicit */long long int) ((signed char) ((unsigned int) (unsigned short)5430)));
                        }
                        for (signed char i_11 = 1; i_11 < 16; i_11 += 4) /* same iter space */
                        {
                            arr_39 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_2]);
                            var_27 = (-((-(((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) (unsigned short)60094)) : (((/* implicit */int) (_Bool)0)))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            arr_44 [i_2] [i_3] [i_5] [i_5] [i_12] = ((/* implicit */long long int) (-(((3366093355U) >> (((((/* implicit */int) arr_10 [i_2 + 1] [i_4])) - (41529)))))));
                            var_28 = ((/* implicit */_Bool) arr_43 [i_2 + 1] [i_3] [i_3] [(signed char)16] [i_5] [i_12] [i_12]);
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_29 = (-(((/* implicit */int) (signed char)2)));
                            arr_47 [i_13] [i_3] [i_5] [i_5] [i_3] [4U] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) arr_37 [i_2 + 1] [i_13 - 1] [i_13 - 1])), (arr_46 [i_2 - 2] [i_3] [i_4] [i_13 - 1] [i_13 - 1]))), (min((arr_46 [i_2 - 2] [i_13] [i_13] [i_13 - 1] [i_13 - 1]), (((/* implicit */unsigned int) arr_37 [i_2 - 1] [i_3] [i_3]))))));
                        }
                    }
                } 
            } 
        } 
        arr_48 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2] [i_2] [i_2 - 2])) > ((-(((/* implicit */int) (unsigned short)60087))))));
    }
    for (long long int i_14 = 0; i_14 < 13; i_14 += 4) 
    {
        arr_51 [i_14] = ((/* implicit */long long int) 571827099U);
        arr_52 [i_14] = (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)7))) != (2797362299U)))));
    }
    var_30 = ((/* implicit */unsigned short) ((signed char) min((((((/* implicit */int) (unsigned short)29433)) * (((/* implicit */int) var_14)))), (((/* implicit */int) var_7)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 4) 
    {
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4135379492319620759ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_15])))) : (((arr_3 [i_15]) / (arr_3 [i_15])))));
        arr_55 [(signed char)12] [(signed char)12] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_15] [i_15])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1222765900U)) ? (((/* implicit */int) arr_5 [(unsigned short)5] [(unsigned short)5])) : (1040811410)))) : (((unsigned int) arr_54 [i_15] [i_15]))))) & (((((/* implicit */_Bool) arr_1 [i_15])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5449))) % (arr_3 [i_15]))) : (((/* implicit */long long int) ((int) arr_3 [i_15])))))));
        var_32 = ((/* implicit */signed char) min((((((/* implicit */int) arr_1 [i_15])) | (((/* implicit */int) (unsigned short)5449)))), (-646481659)));
        arr_56 [(signed char)6] = ((/* implicit */signed char) ((unsigned int) (unsigned short)60096));
    }
}
