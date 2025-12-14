/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5765
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
    var_10 = ((/* implicit */_Bool) var_0);
    var_11 = ((/* implicit */_Bool) (-((~((~(((/* implicit */int) (short)26952))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                var_12 = ((/* implicit */long long int) ((unsigned short) var_5));
                var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_0])) ? (((/* implicit */int) (unsigned short)24992)) : (((/* implicit */int) (short)-26953)))) >> (((((/* implicit */int) (short)-26953)) + (26971)))));
            }
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (long long int i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_16 [i_5] [i_5] = ((/* implicit */unsigned long long int) (short)-26960);
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((unsigned long long int) var_6)) >> (((((((((/* implicit */int) (short)-26953)) + (2147483647))) << (((((((/* implicit */int) (short)-26953)) + (26974))) - (21))))) - (2147456637))))))));
                        }
                    } 
                } 
                var_15 |= ((/* implicit */unsigned int) (short)26952);
            }
            arr_17 [i_0] = ((/* implicit */_Bool) (unsigned char)48);
        }
        var_16 = ((/* implicit */unsigned char) max(((short)26952), (var_6)));
        var_17 = ((max((((/* implicit */unsigned long long int) (short)-26964)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_12 [i_0] [i_0] [i_0] [i_0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))));
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_18 = ((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_6] [i_0] [i_0]))))));
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-((+(arr_11 [i_0] [i_6] [i_0] [i_6])))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            var_19 = ((((/* implicit */_Bool) (short)-26952)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_7] [i_7] [i_7])));
            arr_24 [i_0] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (short)26974)) - (((((/* implicit */int) (short)26963)) * (((/* implicit */int) (short)-26927))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            arr_27 [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? ((+(((((/* implicit */_Bool) (short)26963)) ? (((/* implicit */long long int) ((/* implicit */int) (short)26927))) : (894127767773595739LL))))) : (((((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_8] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */long long int) (unsigned char)119)), (894127767773595720LL)))))));
            var_20 = ((/* implicit */long long int) (-((-((+(((/* implicit */int) arr_25 [i_0] [i_0]))))))));
            var_21 = ((/* implicit */unsigned int) min((arr_9 [i_0] [i_0] [i_0] [i_8]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [i_8]))))))))));
        }
        arr_28 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_11 [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))) : (9223372036854775780LL)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26952))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */long long int) 4294967295U)) : ((-9223372036854775807LL - 1LL)))))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8619388605186331144ULL)) ? (((/* implicit */int) arr_29 [i_9] [i_9])) : ((+(((/* implicit */int) arr_29 [i_9] [i_9])))))))));
        var_23 = ((/* implicit */unsigned long long int) arr_30 [i_9]);
    }
    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        arr_33 [i_10] [i_10] = 894127767773595750LL;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) min(((-(-894127767773595720LL))), (((((/* implicit */_Bool) arr_22 [i_10] [i_11] [i_12])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19342)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 3; i_13 < 14; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 17; i_14 += 3) 
                        {
                            {
                                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_10])))) ? (((/* implicit */int) arr_1 [i_11] [i_12])) : (arr_22 [i_13] [i_13] [i_13])))) ? (((/* implicit */unsigned long long int) var_5)) : (((unsigned long long int) 9827355468523220472ULL)));
                                arr_47 [i_10] [i_14] [i_12] [i_13 - 2] [i_13 - 2] = ((/* implicit */unsigned short) (-(8619388605186331144ULL)));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_8 [i_11] [i_11] [i_11]))));
                                var_27 |= ((/* implicit */unsigned char) max((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) << (((((/* implicit */int) (short)19341)) - (19319))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_9 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_42 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_9 [i_10] [i_10] [i_10] [i_10]))))));
    }
    var_29 = ((/* implicit */int) 9827355468523220472ULL);
}
