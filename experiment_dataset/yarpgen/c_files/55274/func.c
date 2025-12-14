/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55274
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
    var_10 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16492674416640LL)) ? (((/* implicit */unsigned long long int) 987069189)) : (4989166921571878420ULL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            arr_5 [i_1 - 2] [i_0] [i_1] = (!(((/* implicit */_Bool) (unsigned short)52869)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_0))));
                        arr_12 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */long long int) arr_6 [i_0] [i_1 - 3] [(unsigned short)2]);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            arr_16 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((arr_0 [i_2]) < (arr_0 [i_4 + 1])));
                            arr_17 [i_0] [i_2] [i_1] [i_1] [i_0] = ((unsigned int) (unsigned short)37089);
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(arr_4 [i_4 + 1] [i_4 - 3])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_12 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1134087374)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52881))) : (var_7)))));
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)59317)) : (((/* implicit */int) var_2))));
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(var_7)));
                        }
                        var_14 = ((/* implicit */long long int) (unsigned short)59317);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_6 = 2; i_6 < 13; i_6 += 2) 
            {
                var_15 |= ((/* implicit */unsigned short) var_8);
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 1) 
                {
                    /* LoopSeq 4 */
                    for (int i_8 = 1; i_8 < 13; i_8 += 2) /* same iter space */
                    {
                        arr_31 [i_1] [i_6 - 2] [i_6] = (-(arr_20 [i_8 + 1] [i_1] [i_1] [i_0]));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_9 [i_1] [i_1] [i_1] [i_8]))) ? (((var_2) ? (((/* implicit */int) (unsigned short)59288)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_8))));
                        var_17 -= ((/* implicit */long long int) ((var_8) ? (((/* implicit */unsigned int) 10)) : (arr_8 [i_8] [i_6] [i_1 - 3])));
                    }
                    for (int i_9 = 1; i_9 < 13; i_9 += 2) /* same iter space */
                    {
                        arr_34 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((var_0) << (((arr_33 [4LL] [i_9] [i_1] [i_9] [i_1] [i_6 - 1] [i_1 + 1]) - (8860777077083998216LL)))))) : (((/* implicit */long long int) ((var_0) << (((((arr_33 [4LL] [i_9] [i_1] [i_9] [i_1] [i_6 - 1] [i_1 + 1]) + (8860777077083998216LL))) - (1110347233574284994LL))))));
                        arr_35 [i_0] [i_1] [i_1] [i_7] [i_9] = ((/* implicit */int) ((var_7) < (var_7)));
                    }
                    for (unsigned long long int i_10 = 3; i_10 < 11; i_10 += 1) 
                    {
                        var_18 = ((2480433748374860776LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_1 + 1] [i_1 - 3] [i_7] [i_10 + 1] [i_10]))));
                        arr_38 [i_10] [i_7] [i_1] [i_1] [i_1] [i_10 - 3] [i_1] = ((/* implicit */long long int) 977863320U);
                        arr_39 [i_1] [5U] [i_6] [i_1] [i_10] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 47755)))) && ((!(var_8)))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 1) 
                    {
                        arr_43 [i_6] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                        arr_44 [4U] [6] [i_6] [i_6] [i_7 + 1] |= (_Bool)1;
                    }
                    arr_45 [i_1] = ((((/* implicit */_Bool) arr_26 [i_1 + 1] [i_6 - 1] [i_7 - 3])) ? (((((/* implicit */_Bool) var_4)) ? (arr_15 [i_7] [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_21 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_1] [i_6 + 1] [i_1] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                    arr_46 [i_6] [i_7] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4341596239306616637LL)) || (var_8))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((var_2) ? (((/* implicit */long long int) arr_4 [i_6] [i_6])) : (var_3)))));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        arr_49 [i_1] [i_12] [i_12] [i_7 - 3] [i_6] [i_0] [i_1] = ((/* implicit */long long int) 1061998365);
                        arr_50 [i_12] [3U] [i_0] [i_6 + 1] [i_1] [i_1] = (((_Bool)1) ? (var_0) : (arr_47 [i_1] [i_1 - 3] [i_1]));
                        arr_51 [i_1] [i_12] [i_12] [i_1] [13LL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6232))))))) <= ((-(var_6)))));
                    }
                }
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(((/* implicit */int) ((4398046248960LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [(unsigned short)8] [i_0] [i_0])))))))))));
                    var_21 = ((/* implicit */int) var_1);
                    var_22 = ((arr_37 [(_Bool)1] [i_1] [i_1 - 3] [i_1] [i_1 + 1] [i_1 - 3]) << (((10) - (10))));
                    var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)6251)) ? (((/* implicit */unsigned long long int) 1024647293)) : (18118884657437200943ULL)));
                    var_24 -= ((/* implicit */long long int) ((arr_53 [i_1 - 2] [i_6]) / (((/* implicit */int) arr_52 [1LL] [1LL] [i_1 - 2] [i_13] [i_6 - 1] [i_13]))));
                }
                for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    var_25 -= ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 0))))));
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (unsigned short)59304))));
                    var_27 *= ((unsigned int) 8781684747481500537LL);
                }
            }
        }
    }
}
