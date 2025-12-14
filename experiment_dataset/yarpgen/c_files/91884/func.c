/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91884
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_2 [i_0 + 2]) == (((/* implicit */int) (short)-25))))) | (((/* implicit */int) ((arr_0 [i_0 + 2] [i_0 + 1]) < (arr_1 [i_0 + 2]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            arr_7 [i_1] [i_1] = 0U;
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_0 [i_0 + 1] [(_Bool)1]);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                var_15 = ((/* implicit */unsigned int) (+(arr_6 [i_0])));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((((/* implicit */int) (short)-4)) + (2147483647))) >> (((1675092109U) - (1675092089U))))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2 - 1])) || (((/* implicit */_Bool) arr_2 [i_1 + 1])))))))) ? (((/* implicit */int) ((arr_5 [i_0] [i_2]) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9)))))))) : (arr_11 [i_2 - 3] [i_2] [i_2 - 3])));
                var_18 ^= ((/* implicit */short) min((((/* implicit */unsigned int) arr_2 [(short)1])), (min((arr_5 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) min((arr_11 [i_2] [i_0] [i_1]), (((/* implicit */int) var_4)))))))));
            }
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                var_19 &= ((/* implicit */unsigned int) ((max(((~(((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */int) var_9)) << (((((/* implicit */int) (short)25181)) - (25158))))))) << (((((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) (unsigned short)33924)) : (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0]) : (((/* implicit */int) (unsigned short)2291)))))) - (33919)))));
                var_20 |= ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0 + 2])) || (((/* implicit */_Bool) (signed char)116))))), (max((((/* implicit */int) (unsigned short)33924)), (((((/* implicit */int) arr_13 [i_3] [i_1 + 1] [i_0])) - (arr_2 [i_0])))))));
                var_21 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)116))))))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    arr_18 [i_1] [i_3] [i_1] [i_1] [i_1] = 1724862437;
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        arr_22 [i_1] [i_1] [i_3] [i_1] [i_0] [i_1] [i_0 + 2] = ((/* implicit */unsigned char) var_12);
                        arr_23 [i_1] [(short)11] [i_3] [i_1] = ((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0 + 3]);
                        var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) (unsigned char)2))))), (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) arr_2 [i_5]))))))), (min((max((arr_17 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_4 [i_4] [i_1])))), (((/* implicit */long long int) max((var_8), (((/* implicit */short) var_9)))))))));
                    }
                    var_23 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (short)-25)) : (((/* implicit */int) (short)7672)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        arr_28 [i_0] [i_1] [i_3] [i_4] [i_6] = ((/* implicit */signed char) 4294967295U);
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned short) 61572651155456LL))) - (((/* implicit */int) (unsigned short)46450)))) | (((/* implicit */int) arr_15 [i_0])))))));
                        var_25 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)30706)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_10 [i_6 + 1])))) | (((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4 - 1] [i_6] [i_3] [i_6] [i_6 - 1])) ? (((((/* implicit */_Bool) var_6)) ? (-1440727085) : (((/* implicit */int) arr_9 [i_6])))) : (((((/* implicit */int) (short)1518)) ^ (((/* implicit */int) arr_21 [10] [12LL] [i_1] [i_3] [i_3] [(_Bool)1] [i_6 + 1]))))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    arr_31 [i_1 + 1] [i_1 + 1] [i_3] [i_1] = ((((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_26 [i_1])))) / (((/* implicit */int) ((short) var_12))));
                    var_26 = ((/* implicit */unsigned long long int) (+(((unsigned int) var_9))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_1 - 1] [i_0] [i_7])) : (54373159)))) : (((((/* implicit */_Bool) arr_15 [i_3])) ? (arr_5 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_1] [i_1])))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) (signed char)-124)) + (151)))))) ? (((((/* implicit */int) arr_29 [i_0] [i_1] [i_3] [i_3] [i_1] [i_3])) >> (((arr_30 [i_0] [i_1] [i_3] [i_7]) - (3550797513U))))) : (((/* implicit */int) arr_26 [i_1]))));
                    var_29 = ((/* implicit */short) arr_29 [i_0] [i_1] [i_1] [i_3] [i_3] [i_7]);
                }
            }
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((~(var_12))) : (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0 + 1] [i_0 + 1])))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_8 = 4; i_8 < 11; i_8 += 2) 
        {
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 1237300543))) ? (max((arr_33 [i_0] [i_0 + 3] [i_8 + 1]), (arr_33 [(short)9] [i_0 + 3] [i_8 + 3]))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_33 [i_0] [i_0 + 2] [i_8 - 3]) : (((/* implicit */unsigned int) -1442287774))))));
            var_32 = ((/* implicit */int) (((!(((/* implicit */_Bool) -1025144091)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2672923298U)) ? (((/* implicit */int) (short)-22)) : (((/* implicit */int) (unsigned short)32768))))) : (arr_12 [i_8] [i_0] [i_0] [i_0])));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? ((~(var_10))) : (((/* implicit */int) ((unsigned char) 54373158)))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_43 [7U] [i_0 - 1] [i_9] [(signed char)8] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (611423838)));
                        arr_44 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(-1440727085)))) / ((-(arr_12 [i_10] [i_9] [i_9] [i_10])))));
                    }
                } 
            } 
            arr_45 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14382))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_9] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_9])))))));
            var_34 ^= (+(((/* implicit */int) (signed char)-17)));
        }
    }
    for (long long int i_12 = 3; i_12 < 17; i_12 += 4) 
    {
        var_35 = ((/* implicit */int) (((+(((((/* implicit */unsigned long long int) var_11)) ^ (arr_46 [i_12 + 1]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((-6988425538734621939LL) + (9223372036854775807LL))) >> (((var_11) - (3792323331943059984LL))))) : ((-(arr_48 [i_12 - 1] [i_12 - 1]))))))));
        arr_50 [i_12] = ((/* implicit */short) ((unsigned short) max((arr_47 [i_12 - 1] [9ULL]), (arr_47 [i_12 - 2] [i_12]))));
        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((short) min((((((/* implicit */_Bool) arr_48 [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_12 - 3] [i_12]))) : (arr_48 [i_12 - 3] [17LL]))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_49 [14ULL])))))))))));
        var_37 = (!(((/* implicit */_Bool) (+(arr_46 [i_12])))));
    }
    var_38 = ((/* implicit */short) var_5);
}
