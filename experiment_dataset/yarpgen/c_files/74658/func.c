/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74658
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
    var_20 = ((/* implicit */_Bool) (unsigned char)22);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [15U] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [(short)6] [i_2]))));
                    var_21 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_17)) + (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (arr_10 [i_3 - 1] [i_3 - 1] [i_2 - 1] [i_1 - 2]) : (arr_10 [i_3 - 1] [i_3 - 1] [i_2 - 3] [i_1 - 2])));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_2 - 2] [i_1 - 2] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_2 - 4] [i_1 - 1] [i_1 - 1] [i_0])) : (((/* implicit */int) (unsigned char)116))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3532199728U)) ? (arr_13 [i_0] [i_1] [i_2] [i_1 - 1] [i_0]) : (arr_13 [i_0] [(short)15] [i_0] [i_1 + 1] [i_2 - 1])));
                        arr_16 [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) var_9))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */int) var_9);
                        arr_21 [i_6] = ((/* implicit */unsigned char) ((var_3) ? (arr_12 [i_0] [i_0]) : (((/* implicit */int) ((signed char) arr_19 [i_0] [i_0] [i_1] [i_2 - 2] [i_0] [i_6])))));
                    }
                    var_26 = ((/* implicit */unsigned int) ((((var_9) ? (((/* implicit */int) arr_3 [i_0] [i_0] [18])) : (((/* implicit */int) (short)-31563)))) + (((/* implicit */int) (unsigned short)30181))));
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(5)))) | (((((/* implicit */_Bool) var_2)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (short i_7 = 3; i_7 < 18; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                {
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_7] [i_7 - 1] [(_Bool)1])) && (((/* implicit */_Bool) var_15)))))));
                    var_29 = ((/* implicit */long long int) ((1716293253296774820ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((2038361094) >= (((/* implicit */int) (unsigned short)44374))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 19; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            {
                                var_30 &= ((/* implicit */unsigned short) var_2);
                                arr_37 [i_12] [i_10] [i_10] [i_9] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) -6501326813716548218LL))) | (((((arr_12 [i_9 + 1] [i_9 - 1]) + (2147483647))) >> (((((/* implicit */int) arr_31 [i_0] [i_9])) - (45)))))));
                                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_9 - 1] [i_9 + 1])) ? (3330890302U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_9 - 1] [i_9])))));
                                arr_38 [2ULL] [i_9] [i_10] [i_10] [i_12] = ((arr_12 [i_9 + 3] [i_0]) | (arr_12 [i_9 + 3] [i_0]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            {
                                arr_45 [i_13] = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) arr_15 [i_10] [i_14] [i_0] [i_14] [i_14] [i_14])))));
                                arr_46 [i_14] [i_13] [i_0] [i_9] [i_9] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_9] [i_9] [(signed char)4]))))) ? (((/* implicit */int) arr_5 [i_9 + 1] [i_9 + 1])) : (var_5)));
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_9] [i_9 - 1] [i_9])) / (var_5)));
                                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_13] [i_13] [i_0] [i_0])) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_9] [i_9] [i_9])) ? (2587656410U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0] [i_9 + 1] [i_10] [i_13] [i_14]))))) : (((unsigned int) arr_31 [i_13] [i_13]))));
                            }
                        } 
                    } 
                    arr_47 [i_0] = ((/* implicit */short) ((int) arr_26 [i_0] [i_9 - 1]));
                }
            } 
        } 
        arr_48 [i_0] [i_0] = ((/* implicit */long long int) arr_27 [i_0]);
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 15; i_15 += 3) 
    {
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_15] [5U] [i_15])) ? (((/* implicit */unsigned long long int) arr_43 [i_15])) : (4ULL)));
        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) 908236362))));
        var_36 = ((/* implicit */short) ((arr_13 [13U] [i_15] [i_15] [i_15] [i_15]) + (((var_11) - (((/* implicit */int) arr_3 [i_15] [i_15] [10]))))));
        var_37 = ((((/* implicit */int) arr_36 [i_15] [i_15] [i_15])) * (((/* implicit */int) arr_49 [i_15])));
    }
}
