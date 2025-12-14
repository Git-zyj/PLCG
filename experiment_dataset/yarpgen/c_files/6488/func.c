/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6488
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
    var_10 = ((/* implicit */long long int) max((9544453899177055296ULL), (12972906844421514723ULL)));
    var_11 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_1)) ? (((var_9) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-118))))) : (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((((/* implicit */int) var_3)) != (((/* implicit */int) var_3)))) ? ((-(var_7))) : ((~(var_7))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 += ((/* implicit */unsigned char) var_4);
        var_13 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-25426)), ((unsigned short)37864))))) : (var_1));
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [21U] [21U])) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) ? (((2465518084U) >> (((var_5) - (3766312845100004392ULL))))) : (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1 + 1]))))))))))));
                    arr_9 [i_0] [(short)6] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) arr_2 [16ULL]))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)7)), (arr_2 [i_0])))) : (((/* implicit */int) arr_5 [i_1 - 2] [i_2 - 1]))))) * (var_1)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned char)13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3]))) : (arr_3 [i_3])));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        arr_21 [i_3] [i_4] [i_6] [i_3] = ((/* implicit */long long int) (~(arr_12 [i_3] [i_3])));
                        var_16 = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_3] [i_3])) >> (((/* implicit */int) arr_15 [i_4] [i_5]))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))) * (var_7)));
                        var_18 *= ((/* implicit */_Bool) (~(arr_18 [i_3] [i_4] [i_5] [i_6])));
                    }
                } 
            } 
            arr_22 [i_3] [(unsigned short)21] = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_7 [6U] [(unsigned char)15] [i_3] [(signed char)15]))))));
        }
        for (unsigned short i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(4128768))))));
                var_20 = ((/* implicit */unsigned long long int) (unsigned char)14);
            }
            for (int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                var_21 *= ((((/* implicit */_Bool) arr_1 [i_7 - 2] [i_7 - 1])) && (((/* implicit */_Bool) arr_24 [i_3] [(short)2] [i_7 + 2])));
                arr_29 [i_3] [(signed char)1] [i_9] = ((/* implicit */unsigned long long int) arr_25 [i_7]);
                var_22 = ((/* implicit */_Bool) (~(arr_18 [i_3] [i_7] [i_3] [i_9])));
            }
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_0 [i_7]))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_7 - 2] [i_7] [i_7 + 1])) ? (arr_6 [i_7] [4U] [i_7 + 1]) : (arr_6 [i_3] [i_7] [i_7 - 2])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_35 [i_3] [i_7] [i_10] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7]))) : (arr_13 [i_7]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11619)))));
                            var_26 = ((((/* implicit */_Bool) (unsigned short)47938)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -17LL)));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_3] [i_7] [i_10] [i_13])) ? (((/* implicit */int) arr_5 [i_3] [i_3])) : (((/* implicit */int) (unsigned char)143))))) ? ((+(arr_12 [(unsigned char)5] [(unsigned char)5]))) : (((((/* implicit */_Bool) arr_12 [i_13] [12U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) var_1);
                var_29 *= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_1 [1U] [i_7])))))));
            }
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_7 [i_3] [i_7] [i_3] [i_3]))));
            var_31 *= ((/* implicit */_Bool) 2259182263U);
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_3] [i_7 + 1])) ? (arr_39 [i_3] [i_7 - 2]) : (arr_39 [i_3] [i_7 - 2])));
        }
    }
    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    var_34 = var_0;
}
