/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9003
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            arr_8 [i_0] = ((/* implicit */signed char) 1468688486);
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_2))) ? (arr_5 [i_1 - 2] [i_1 + 2]) : (((/* implicit */long long int) ((unsigned int) 1468688486)))));
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_20 [i_0] [i_2] [i_3] [(_Bool)1] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((2ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25407)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (short)-25399)) : (1468688486)))) : (arr_17 [i_5 + 1] [i_5] [i_5 + 1] [12U] [i_5 + 1] [i_5])));
                            var_13 = ((/* implicit */signed char) (+((-2147483647 - 1))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    arr_25 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (short)-25393);
                    arr_26 [i_2] [i_6] [i_3] [(signed char)3] [i_2] = ((/* implicit */short) -1468688487);
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6]))) != (5369998425991736294LL))) ? (((/* implicit */unsigned long long int) ((1468688490) >> (((1468688472) - (1468688445)))))) : (((((/* implicit */unsigned long long int) 3341209949U)) | (arr_22 [i_2] [i_2] [i_3] [i_2] [i_3]))))))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3])) && (((/* implicit */_Bool) arr_19 [(unsigned char)12] [i_2])))))));
                }
                for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) ((3642870095U) / (16646144U)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_0] [i_0]));
                        arr_32 [i_2] = ((long long int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_2]);
                        var_18 = ((/* implicit */int) min((var_18), (((int) ((long long int) arr_18 [i_0] [i_2] [i_3] [i_7] [i_8] [i_8])))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_19 += ((/* implicit */int) ((arr_29 [i_9] [i_7] [i_3] [i_2] [i_9]) != (arr_29 [i_0] [i_2] [i_3] [i_7] [i_9])));
                        arr_36 [i_9] [i_7] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (-(var_3)));
                    }
                    var_20 ^= ((arr_7 [i_0]) % (((/* implicit */int) arr_19 [i_2] [i_0])));
                }
                arr_37 [9ULL] [(signed char)5] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-25365)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_3])) ? (((/* implicit */int) (short)29898)) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [1ULL] [i_2] [12LL])))))));
            }
            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                var_21 *= ((/* implicit */short) (-(((/* implicit */int) (short)25414))));
                arr_41 [6LL] [i_10] [i_10] |= ((/* implicit */unsigned short) (+((+(arr_3 [i_2])))));
                var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_10] [8] [i_10] [i_10])) ? (var_1) : (((/* implicit */unsigned long long int) arr_17 [i_10] [i_10] [(short)4] [(short)4] [i_2] [(signed char)2]))));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) (-(arr_16 [i_0] [i_0] [i_11] [i_11 - 1])));
                arr_44 [i_2] = ((/* implicit */unsigned int) -1468688487);
            }
            var_24 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [(unsigned short)8] [i_2] [(short)9])))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                {
                    arr_49 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) 10755468988660599533ULL)) ? (((/* implicit */int) arr_48 [i_0] [i_12] [i_12] [i_13])) : (((/* implicit */int) arr_48 [i_13] [i_12] [i_12] [i_12]))));
                    arr_50 [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-56))) <= (5369998425991736294LL))) ? (((var_7) - (((/* implicit */int) (unsigned short)47680)))) : (((/* implicit */int) var_2))));
                }
            } 
        } 
        var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5ULL)) ? (-1586722301) : (-1586722301)));
        arr_51 [(unsigned short)1] = ((/* implicit */unsigned char) ((signed char) 799311570493662922ULL));
    }
    var_26 = ((/* implicit */unsigned short) var_0);
}
