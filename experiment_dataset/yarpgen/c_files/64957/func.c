/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64957
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
    var_15 &= ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned short) (short)-29283)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_17 = ((/* implicit */long long int) (~(((((/* implicit */int) var_14)) & (arr_0 [i_1])))));
            /* LoopSeq 4 */
            for (unsigned char i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                arr_7 [i_0] [i_2] = ((/* implicit */unsigned char) arr_3 [i_0 + 2]);
                arr_8 [(_Bool)1] [i_0] [i_1] [i_2 - 3] = ((/* implicit */unsigned char) var_2);
            }
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned char i_5 = 3; i_5 < 23; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_4] [i_4 + 2] [i_4 + 2] [i_4])) & (((/* implicit */int) arr_14 [i_4] [i_4 + 2] [i_4 + 2] [i_4]))));
                            var_19 ^= ((/* implicit */unsigned long long int) (~(-1)));
                            var_20 |= ((((/* implicit */_Bool) ((4294967293U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 + 2] [i_1] [i_0 + 2] [i_4]))) : (((((/* implicit */_Bool) (unsigned char)232)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29283))))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 1]))));
            }
            for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (short i_8 = 2; i_8 < 23; i_8 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_14))))));
                            arr_28 [i_6] [i_0] = ((/* implicit */unsigned short) ((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0 + 1] [i_0])))));
                            arr_29 [i_0] [i_1] [i_1] [i_6] [i_0] [i_1] [i_8 + 1] = ((/* implicit */_Bool) arr_18 [i_0] [i_7] [i_0]);
                            var_21 = ((/* implicit */short) arr_15 [i_0] [i_8 - 2] [i_8] [i_8] [i_8 - 1] [i_8 - 2]);
                            var_22 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_7] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                arr_30 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_6])) | (((/* implicit */int) ((unsigned char) 261632)))));
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    arr_34 [i_9] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3720940824122134433LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1] [i_0]))) : (arr_22 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1])));
                    var_23 = ((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_6] [i_1] [i_0] [i_9]);
                }
            }
            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                arr_38 [i_0] [i_0] [i_0] = ((unsigned char) arr_25 [i_0] [i_0 + 1] [i_10] [(unsigned char)20] [15LL] [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 23; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        {
                            arr_44 [i_12] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((arr_0 [i_12]) + (2147483647))) >> (((arr_0 [(short)1]) + (390240004)))));
                            var_24 = ((/* implicit */signed char) ((_Bool) arr_5 [i_10] [i_11 + 1] [16ULL] [i_11]));
                        }
                    } 
                } 
                arr_45 [10U] [10U] [i_1] |= ((/* implicit */long long int) ((var_0) > (((/* implicit */unsigned long long int) arr_9 [i_1]))));
            }
            var_25 += ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_5)))));
        }
        for (signed char i_13 = 0; i_13 < 25; i_13 += 3) 
        {
            /* LoopNest 3 */
            for (int i_14 = 2; i_14 < 23; i_14 += 3) 
            {
                for (unsigned char i_15 = 1; i_15 < 24; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_56 [i_0] [i_13] [i_15] [i_15] [(short)21] [i_0] = arr_26 [19ULL] [i_0];
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)40)) % (arr_42 [i_0] [(unsigned char)13] [i_0] [i_14 + 2] [(_Bool)1])));
                            arr_57 [i_0] [i_0] = (+(((/* implicit */int) arr_24 [i_14 - 1] [i_14 - 1] [i_15 - 1])));
                            arr_58 [i_0] [i_0 + 2] [i_13] [i_13] [i_14] [i_0] [11U] = ((/* implicit */unsigned char) arr_1 [17LL] [i_0]);
                            arr_59 [i_0] [i_13] [i_0] [i_0] [(unsigned char)21] = ((/* implicit */unsigned short) (-(arr_50 [7LL] [i_15 + 1] [i_0] [i_15 + 1])));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_17 = 2; i_17 < 24; i_17 += 2) 
            {
                for (short i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    for (unsigned char i_19 = 0; i_19 < 25; i_19 += 4) 
                    {
                        {
                            arr_69 [i_0] [3LL] [i_0] [i_13] [i_0] = ((_Bool) var_3);
                            arr_70 [i_0] [i_18] [6] [i_0] [i_0] = ((/* implicit */unsigned long long int) -1);
                            var_27 = ((/* implicit */signed char) arr_43 [(signed char)3] [i_13] [i_17] [i_18] [i_19]);
                        }
                    } 
                } 
            } 
        }
    }
}
