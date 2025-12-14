/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73647
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [6ULL])))) + ((~(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_1 [i_0])) - (178)))))))));
        var_10 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_1 [i_0])) + ((-(var_9)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)6])) ? (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) var_8))))) : (var_5)))) ? (-1490844421) : (min(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_2))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(var_1)))))) ? (3U) : (((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [(_Bool)0] [(_Bool)0] [i_2])), ((unsigned short)0)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) arr_7 [i_2] [i_1] [8LL])))))))));
                    arr_12 [i_2] [(signed char)7] [i_2] = ((/* implicit */_Bool) 2491663678U);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_11 += arr_5 [i_0] [i_0] [i_0];
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) | ((~(((/* implicit */int) arr_6 [8LL] [i_1 - 1] [i_2]))))));
                                arr_20 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) arr_17 [1] [i_1] [i_1] [i_2] [(signed char)7]))))) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) arr_13 [i_3] [i_1 + 1] [i_1 + 1] [i_3]))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_2] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((+(arr_0 [i_3] [i_1])))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) >> (((((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_1 [i_1 + 3])) - (174))))) - (139234)))));
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) arr_16 [i_5] [10] [(_Bool)1] [i_5]))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            arr_27 [i_6] = arr_17 [i_5] [(signed char)1] [i_5] [i_6] [i_6];
            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_9 [i_5] [i_6]))));
            var_14 = ((/* implicit */signed char) var_9);
            /* LoopSeq 3 */
            for (int i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                arr_32 [i_6] [8LL] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) + (arr_0 [i_6] [i_7 - 1])))));
                var_15 ^= min((((/* implicit */long long int) (unsigned short)65527)), (max((arr_0 [i_7 - 1] [i_7 - 1]), (((/* implicit */long long int) arr_22 [8ULL])))));
                arr_33 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) max((max((arr_0 [i_5] [i_5]), (((/* implicit */long long int) arr_8 [i_5] [i_6] [i_5])))), (((/* implicit */long long int) ((max((var_9), (((/* implicit */int) var_6)))) >> ((((-(var_0))) - (1324746139U))))))));
            }
            for (int i_8 = 3; i_8 < 8; i_8 += 1) 
            {
                arr_36 [i_6] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) var_1)) / ((+(((((/* implicit */long long int) 2491663683U)) - (arr_0 [(signed char)4] [i_6])))))));
                var_16 = ((/* implicit */unsigned long long int) arr_15 [i_5] [i_6] [i_6] [i_8]);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_31 [i_5] [1U] [8U] [i_5]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            arr_43 [i_6] [(unsigned short)6] [5U] [6LL] [i_5] [i_6] = ((/* implicit */unsigned int) arr_26 [i_6]);
                            arr_44 [i_5] [i_5] [i_6] = ((/* implicit */int) arr_22 [i_5]);
                            arr_45 [i_6] [i_6] [i_6] [i_6] [i_10 + 1] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32768)) && (((/* implicit */_Bool) (unsigned char)19))));
                            arr_46 [i_6] = ((/* implicit */int) arr_42 [(signed char)2] [(signed char)2] [i_9] [i_9]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) min((var_18), (arr_15 [2] [i_5] [i_5] [8])));
                arr_47 [i_9] [i_9] [i_6] [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_5] [5ULL] [i_9] [i_9])) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_6] [i_5]))))) | (((arr_10 [i_5] [i_6] [i_6] [6]) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
            }
        }
        for (unsigned short i_12 = 2; i_12 < 7; i_12 += 1) 
        {
            var_19 = (-(((((/* implicit */_Bool) 2535793959U)) ? (((/* implicit */int) arr_17 [i_12] [i_12] [i_5] [i_12] [i_5])) : (arr_8 [7] [7] [(_Bool)1]))));
            arr_50 [i_12] [i_5] [i_12 + 4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_12] [i_12 + 3] [5] [i_5]))))) < ((+(((/* implicit */int) arr_14 [i_12 - 1] [i_12] [i_12] [(short)8])))))))) <= (4392194868961173633LL)));
            var_20 -= ((/* implicit */signed char) ((((/* implicit */int) arr_48 [i_12 + 2] [i_12 + 2] [i_12 + 3])) * (((/* implicit */int) max((arr_48 [i_12 + 2] [i_12 - 1] [i_12 + 3]), (arr_48 [i_12 + 2] [i_12 + 4] [i_12 + 4]))))));
        }
    }
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
    {
        for (int i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            for (unsigned char i_15 = 1; i_15 < 10; i_15 += 1) 
            {
                {
                    arr_59 [i_15] [i_14] [8U] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_55 [i_15 + 2])) ? (arr_52 [i_15 + 1] [i_15 + 1]) : (arr_53 [i_14]))) & (arr_54 [i_13] [8LL] [i_15])));
                    arr_60 [i_15] [i_14] [i_15] = ((/* implicit */unsigned int) ((int) ((((long long int) var_5)) < (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_15 - 1]))))));
                    arr_61 [i_15] [(signed char)3] [i_15] = arr_53 [i_13];
                    arr_62 [i_15] [i_14] [i_13] [i_15] = ((/* implicit */unsigned int) arr_55 [(unsigned short)4]);
                }
            } 
        } 
    } 
}
