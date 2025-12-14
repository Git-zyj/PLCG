/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57595
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */long long int) max(((unsigned short)60520), ((unsigned short)60520)))), (min((((/* implicit */long long int) var_12)), (var_6))))))));
    var_18 = ((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_11))));
    var_19 = ((/* implicit */unsigned int) min((max((var_3), (min((var_15), (((/* implicit */unsigned short) var_8)))))), (var_1)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) arr_2 [i_1]);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    arr_8 [(unsigned short)7] [(unsigned short)7] = ((/* implicit */_Bool) min((min((1068220624U), (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) arr_10 [2] [(unsigned char)7] [i_3]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_1 [i_0]))));
                            var_23 &= ((/* implicit */unsigned short) arr_14 [i_4] [i_1] [i_1] [9U] [i_4 - 1]);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) arr_9 [(_Bool)1] [10] [i_2] [10]);
                                arr_21 [i_6] [(unsigned short)1] [i_0] [i_5] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max(((unsigned char)118), ((unsigned char)0)))), (arr_7 [i_6] [i_5] [i_1] [i_0])));
                                arr_22 [i_1] [i_2] [i_6] = ((/* implicit */unsigned short) arr_7 [0] [2LL] [i_2] [i_5 + 2]);
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                {
                    var_25 = max((arr_9 [i_0] [i_0] [(short)11] [i_7]), (arr_9 [i_0] [i_7] [i_7] [i_1]));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 4; i_8 < 11; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            {
                                arr_32 [i_0] [i_0] [(unsigned char)4] [(unsigned short)2] [i_0] = ((/* implicit */signed char) arr_18 [i_9] [(signed char)6] [5ULL] [0] [2LL] [0]);
                                var_26 -= ((/* implicit */long long int) min((max((max((((/* implicit */unsigned long long int) arr_11 [i_0] [(signed char)3] [i_0] [i_0])), (arr_7 [i_7] [i_7] [i_7] [i_7]))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0])), (arr_6 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    arr_33 [i_0] [i_0] = ((/* implicit */short) arr_26 [i_7]);
                    arr_34 [i_0] [(signed char)3] [i_7] = ((/* implicit */short) arr_16 [i_7] [(unsigned char)4] [(_Bool)0] [i_0] [(unsigned char)4]);
                    var_27 *= ((/* implicit */unsigned short) arr_15 [i_0] [i_0]);
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 3; i_11 < 11; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            {
                                arr_42 [i_11 - 2] [i_0] [i_0] [i_0] = arr_14 [i_0] [i_11 - 2] [i_11 - 2] [(unsigned char)2] [i_11 - 2];
                                var_29 = ((/* implicit */_Bool) arr_27 [9LL] [6LL] [i_10] [i_11] [i_11] [i_11]);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned short) arr_13 [i_0] [i_10]);
                }
            }
        } 
    } 
}
