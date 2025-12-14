/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95250
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
    var_13 |= ((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (var_3)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((var_1) > (var_9)));
        var_15 = var_11;
        var_16 = ((/* implicit */short) var_6);
        arr_2 [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (((((/* implicit */unsigned long long int) var_2)) | (var_9)))));
        arr_3 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */int) var_12)) | (var_2)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((1043413220) >> (((/* implicit */int) (unsigned char)8)))) * (((/* implicit */int) var_6))));
        var_18 = ((/* implicit */_Bool) ((var_9) + (var_10)));
        arr_6 [i_1] = ((/* implicit */unsigned short) var_0);
        var_19 = var_8;
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    arr_14 [i_3] [i_4] = ((/* implicit */unsigned short) var_0);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_20 [i_4] [i_4] = ((/* implicit */unsigned char) var_7);
                                var_20 = ((/* implicit */unsigned char) var_6);
                                var_21 = var_2;
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        arr_25 [i_2] [i_3] [i_7] [i_8] = ((/* implicit */short) ((var_2) - (((/* implicit */int) var_12))));
                        arr_26 [i_2] [i_2] = ((/* implicit */unsigned int) var_9);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) << (((var_7) - (10929258335874588785ULL)))))) + (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_9))) >> (((var_1) - (2201259691286946927ULL)))))));
                                arr_34 [i_2] [i_10] [i_10] [i_10] = var_7;
                                var_23 = ((/* implicit */unsigned int) var_0);
                                var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_7));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */int) (short)5436)) >> (((((/* implicit */int) (unsigned short)18238)) - (18211)))));
                        arr_39 [i_2] [i_3] [i_7] [i_11] [i_11] = ((/* implicit */unsigned char) var_11);
                        var_26 = ((/* implicit */short) var_4);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 1) 
                    {
                        var_27 &= ((/* implicit */unsigned char) ((7159686744423843612ULL) == (((/* implicit */unsigned long long int) 133693440U))));
                        var_28 = ((/* implicit */_Bool) var_8);
                        var_29 -= ((/* implicit */short) var_4);
                        var_30 = ((/* implicit */_Bool) ((((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) >> (((var_9) - (17957101440748524329ULL)))));
                        arr_43 [i_12] [i_7] [i_2] [i_2] = ((/* implicit */_Bool) var_2);
                    }
                }
                for (long long int i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        arr_49 [i_2] [i_3] [i_13] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                        arr_50 [i_2] [i_3] [i_2] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_8))));
                    }
                    arr_51 [i_2] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22923))) & (32512U))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_11)))))))));
                }
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)45)) * (((/* implicit */int) var_4))));
            }
        } 
    } 
}
