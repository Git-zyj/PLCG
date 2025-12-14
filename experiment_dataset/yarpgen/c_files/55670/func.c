/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55670
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */signed char) (-((-((~(arr_4 [i_2] [i_1] [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_4] [i_4] [i_0] [i_0] [i_4]))));
                                var_20 += ((/* implicit */short) ((((_Bool) arr_5 [i_0] [i_1 + 1] [i_2] [i_3])) ? (min((((/* implicit */int) arr_2 [i_0] [i_1 + 3] [i_2])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_3] [i_2] [i_1 - 1])) ? (arr_1 [i_2]) : (arr_1 [i_2])))))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((9095581651974125584ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23)))))) ? (arr_4 [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0] [i_4] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 4294967295U)) : (arr_1 [i_1])))) ? ((-(((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) max((arr_11 [i_2]), (arr_11 [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (18446744073709551600ULL)))) ? (((/* implicit */unsigned long long int) max((19U), (((/* implicit */unsigned int) (short)4856))))) : (((((/* implicit */_Bool) -6806033492886496847LL)) ? (((/* implicit */unsigned long long int) 3215994467U)) : (9206879964699017919ULL))))))))));
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_4 - 2] = ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((long long int) ((9206879964699017914ULL) >> (((((/* implicit */int) (short)22288)) - (22273)))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [1LL] [i_2] [i_5] [i_6] [i_6])) ? (arr_10 [i_0] [i_0] [i_0] [i_5] [i_6] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_5] [i_5])))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_5] [i_1] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_6] [i_6] [i_0] [i_2] [i_1] [i_0] [i_0])))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1 + 2] [i_5]))))))))));
                                var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_5]))))) ? (arr_15 [i_0] [i_1] [i_2] [i_5] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_1 + 1] [i_1]))))))));
                                arr_18 [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 3] [i_1] [i_1 - 1] [i_1 + 2]))) : (((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1])) ? (arr_15 [i_0] [i_1] [i_2] [i_5] [i_1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_5] [i_6])))))))) && (((/* implicit */_Bool) (~((+(((/* implicit */int) arr_3 [i_0] [i_2])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (int i_10 = 1; i_10 < 20; i_10 += 1) 
                {
                    {
                        arr_29 [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_10] [i_9] [i_9] [i_8] [15ULL] [i_7])) ? (arr_15 [i_7] [i_8] [i_8] [i_8] [i_9] [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9206879964699017950ULL))))) : (((/* implicit */int) arr_11 [i_7]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            arr_32 [i_7] [i_7] [16ULL] [i_9] = ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_8] [i_9] [i_10] [i_11])) ? (((/* implicit */int) arr_5 [i_8] [i_9] [i_10] [i_11])) : (((/* implicit */int) arr_2 [i_11] [i_8] [i_9]))));
                            var_24 *= ((/* implicit */short) (-((+(((/* implicit */int) arr_28 [i_7] [i_7] [(short)13] [i_9] [i_8] [i_8]))))));
                            var_25 *= ((/* implicit */short) (-(arr_16 [i_10 + 4])));
                            var_26 = ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_9] [i_7] [i_7])) ? (((/* implicit */int) arr_14 [i_11] [i_10] [i_7] [i_8] [i_7])) : (((/* implicit */int) arr_14 [i_11] [i_10 + 2] [i_9] [i_7] [i_7])));
                        }
                    }
                } 
            } 
            var_27 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_30 [i_7] [i_7] [i_7] [i_8] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_11 [i_7])))))))) >> (((((((arr_16 [11]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7]))))) - (((/* implicit */unsigned long long int) arr_31 [i_7] [i_7] [i_7] [i_7] [i_7])))) - (16736189228249429421ULL)))));
            var_28 = ((/* implicit */short) ((long long int) arr_8 [i_7] [i_7] [i_7] [i_7]));
        }
        arr_33 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43627)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (short)13945)))))));
    }
}
