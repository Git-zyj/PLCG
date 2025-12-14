/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84088
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [(_Bool)1] = ((/* implicit */short) arr_6 [i_0] [(short)3] [i_2]);
                    var_12 = ((/* implicit */unsigned short) arr_7 [i_1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 3) 
                    {
                        {
                            arr_20 [(short)11] [i_4] [(short)11] [(short)11] [i_6 + 1] [i_3] = ((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_5]);
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                            {
                                arr_24 [13U] [i_4] [i_3] [i_6] [i_7] = ((/* implicit */long long int) arr_10 [i_6] [i_3]);
                                arr_25 [i_3] [i_6] [(short)14] = ((/* implicit */long long int) arr_9 [i_3] [i_4]);
                            }
                            for (long long int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                            {
                                arr_29 [(short)11] [i_4] [i_5] [i_3] [i_8] = ((/* implicit */unsigned int) arr_22 [i_5] [i_4] [i_6] [i_3]);
                                arr_30 [i_3] [i_4] [i_5] [i_3] [i_8] = ((/* implicit */unsigned char) arr_19 [i_3] [i_3] [(short)10]);
                                arr_31 [i_3] [i_4] [(unsigned short)12] [7ULL] [i_4] [(_Bool)1] = ((/* implicit */signed char) arr_12 [i_3]);
                                arr_32 [i_3] = ((/* implicit */unsigned char) arr_28 [i_3] [i_3] [(_Bool)1]);
                                arr_33 [i_3] [13LL] [i_3] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) arr_11 [(unsigned char)10]);
                            }
                            for (long long int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                            {
                                arr_38 [i_3] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) arr_36 [(short)7] [i_6] [(unsigned short)10] [i_4] [i_3] [i_3]);
                                var_13 -= ((/* implicit */signed char) arr_15 [i_6 + 1] [(unsigned short)1] [14]);
                            }
                        }
                    } 
                } 
                arr_39 [i_3] [i_3] = arr_35 [i_3] [i_3] [i_3] [i_3] [i_4] [i_4];
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        arr_43 [i_10] = ((/* implicit */unsigned int) arr_28 [i_10] [(short)16] [i_10]);
        arr_44 [i_10] = ((/* implicit */unsigned char) arr_22 [16U] [i_10] [i_10] [i_10]);
    }
    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
    {
        var_14 ^= ((/* implicit */unsigned long long int) arr_46 [i_11]);
        var_15 += ((/* implicit */_Bool) arr_45 [i_11]);
        var_16 = ((/* implicit */unsigned long long int) arr_46 [(short)14]);
    }
}
