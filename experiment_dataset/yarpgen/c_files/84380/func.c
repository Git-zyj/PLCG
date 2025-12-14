/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84380
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
    for (int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(unsigned short)14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) & (min((((/* implicit */unsigned long long int) var_3)), (18446744073709551615ULL)))))) || (((arr_0 [i_0 + 1]) >= (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((int) var_11));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [i_1] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) (((+(arr_0 [i_0 - 1]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [(short)19] [i_4] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0 - 1])) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0 + 1]))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (var_1) : (((/* implicit */int) var_12))));
                                arr_16 [i_1] [i_2] = ((/* implicit */signed char) (!((_Bool)1)));
                                arr_17 [i_0 + 1] [i_0 + 1] [i_3] [(unsigned short)10] [i_2] [i_1] = ((/* implicit */unsigned short) (+(((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] [i_0]), (((/* implicit */unsigned long long int) var_9)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0] [i_0 - 1])))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned short)59034)))) >= (((((/* implicit */_Bool) 858374971U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)3))))))));
                }
                for (unsigned char i_5 = 1; i_5 < 23; i_5 += 3) 
                {
                    arr_22 [i_5] [5ULL] [i_1] [i_5] = ((/* implicit */short) arr_13 [i_0 - 1] [i_1] [i_5 + 2] [i_5] [i_0] [i_1] [i_1]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        arr_25 [i_0] [i_0] [10] [i_6] [i_5] = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_1] [23ULL] [i_6]))) & (arr_13 [i_0] [i_1] [i_1] [i_5 + 1] [i_5] [i_6] [i_5])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            arr_29 [i_0] [i_7] [i_5] [(unsigned short)5] = ((/* implicit */short) min((max((13U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (1048575)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_5 + 2] [i_5])) ? (((/* implicit */int) arr_21 [i_5 + 1] [i_5])) : (((/* implicit */int) arr_21 [i_5 + 2] [i_5])))))));
                            arr_30 [(unsigned char)16] [i_0] [i_5] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? ((~((+(var_4))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_23 [i_5])) : (((/* implicit */int) (signed char)-54)))))))));
                        }
                    }
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_9 = 4; i_9 < 23; i_9 += 3) 
                        {
                            arr_36 [i_0] [24ULL] [i_1] [i_5] [i_5 + 1] = arr_9 [i_0] [i_1] [i_5] [(unsigned char)21] [i_5];
                            arr_37 [i_0] [i_8] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (2147483647)));
                        }
                        arr_38 [i_5] [i_5] = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned char)231))))));
                        arr_39 [i_1] [i_5] [i_5 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_0)) >= ((+(var_4)))));
                        arr_40 [9LL] [i_5] [i_5] = ((/* implicit */long long int) ((signed char) (((~(((/* implicit */int) var_10)))) / ((~(((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_5])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        arr_44 [i_0] [4] [i_5] [i_5] [(unsigned short)17] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)42)) ? (-2) : (((/* implicit */int) var_9))))));
                        arr_45 [i_5] [i_1] [i_5] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_5]))));
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    arr_49 [i_0] [12LL] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)21))))) : (((((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_11))))) : (359123655488362748ULL)))));
                    arr_50 [(unsigned char)18] [(signed char)10] [i_11] [i_11] = ((/* implicit */_Bool) var_8);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 22; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_15 = 2; i_15 < 19; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 3; i_16 < 20; i_16 += 3) 
                        {
                            {
                                arr_64 [i_12] [i_13] [(_Bool)1] [i_14] [i_15] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_9)))))));
                                arr_65 [i_12] [i_13] [i_14] [i_14] [i_13] [i_15] [(unsigned char)7] = ((/* implicit */unsigned char) (+((~(var_4)))));
                            }
                        } 
                    } 
                    arr_66 [i_12] [i_13] [i_14] [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && ((_Bool)0))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_13])))) : (var_5))))));
                    arr_67 [i_12] [16LL] [(_Bool)1] [i_14] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? (arr_13 [(_Bool)1] [i_13] [i_13] [i_14] [i_14] [i_13] [i_14]) : (((/* implicit */unsigned long long int) -1301377171)))), ((-(((18446744073709551615ULL) / (((/* implicit */unsigned long long int) -7663134532488400869LL))))))));
                }
            } 
        } 
    } 
}
