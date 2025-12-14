/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99261
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 7; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [i_3]))))) > (arr_1 [4U])));
                            var_12 = ((/* implicit */unsigned short) (+(arr_3 [i_2 + 1])));
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) + (2147483647))) << (((((/* implicit */int) arr_8 [i_0] [i_3] [i_0] [i_0])) - (62)))))));
                            var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [6ULL] [(_Bool)1] [i_4 + 1]))) % (var_8)));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((0LL) <= (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1321925088)) || (((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) (unsigned short)29762))));
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_16 = (((+(((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))) & (((((/* implicit */_Bool) -1249177973)) ? (var_2) : (((/* implicit */int) (short)26548)))));
                            arr_18 [i_0] [i_1] [i_3] [(signed char)1] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-22))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_2 + 3] [i_2 + 1])) ? (arr_14 [i_0] [i_1] [i_2 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 2]))))))));
                        }
                        var_18 |= ((/* implicit */int) ((((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1] [i_1] [i_2 - 1])) > (((/* implicit */int) ((short) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 2; i_7 < 8; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */int) ((unsigned int) arr_2 [i_2 - 2]));
                            arr_22 [i_0] [(signed char)3] [i_1] [i_1] [i_3] [i_3] [(signed char)3] = ((/* implicit */short) var_2);
                            arr_23 [i_0] [i_3] [i_0] [i_3] [i_7] = ((/* implicit */short) ((((9223372036854775800LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-17086))))) - (((/* implicit */long long int) ((((-1321925088) + (2147483647))) << (((var_9) - (899643515U))))))));
                        }
                    }
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        arr_26 [i_0] [i_0] [4U] [(unsigned short)5] [(unsigned short)5] = ((/* implicit */unsigned int) (+(arr_12 [i_1] [i_2 + 1] [i_2 + 2] [(_Bool)1] [i_2 + 1])));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_30 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) - (((unsigned long long int) var_5))));
                            var_20 = (+(428508747959029594LL));
                        }
                    }
                    var_21 = ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 9; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [8LL])) ? (var_0) : (9223372036854775807LL))) + (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                                var_23 = var_2;
                            }
                        } 
                    } 
                    var_24 &= ((/* implicit */signed char) arr_17 [i_1] [i_0] [i_1] [(signed char)8] [(signed char)8]);
                }
                /* LoopNest 3 */
                for (long long int i_12 = 1; i_12 < 8; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            {
                                arr_46 [i_1] [i_13] [i_12] [i_0] [i_1] |= ((long long int) max((((((/* implicit */int) arr_37 [i_14] [i_14])) >> (((var_2) + (347435943))))), (((/* implicit */int) max((arr_4 [i_1] [i_13] [i_14]), (var_10))))));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_38 [i_14] [i_14] [i_12 + 1] [i_13])) ? (((/* implicit */int) arr_8 [i_12 + 2] [i_14] [i_12 - 1] [i_12 + 2])) : (((/* implicit */int) arr_8 [2ULL] [i_13] [i_12 + 2] [i_13])))), (((/* implicit */int) ((_Bool) arr_8 [i_1] [i_13] [i_12 - 1] [i_12]))))))));
                            }
                        } 
                    } 
                } 
                var_26 -= ((/* implicit */signed char) (-((-(1249177973)))));
                var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1]))) == (9223372036854775807LL)))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1249177988)) ? (((var_9) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)27054))))) != (max((((/* implicit */unsigned long long int) var_7)), (var_8)))))))));
    /* LoopNest 2 */
    for (long long int i_15 = 0; i_15 < 23; i_15 += 1) 
    {
        for (int i_16 = 0; i_16 < 23; i_16 += 2) 
        {
            {
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_47 [4LL]))));
                var_30 |= (~(((arr_47 [i_15]) & (((/* implicit */unsigned long long int) var_1)))));
            }
        } 
    } 
    var_31 |= ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-1338)) ? (((/* implicit */long long int) var_5)) : (var_0))) - ((-(var_0))))) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
