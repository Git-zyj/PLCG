/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73384
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)0)))) != (((/* implicit */int) ((((/* implicit */int) (signed char)-25)) > (((/* implicit */int) (unsigned char)255)))))))), ((-(min((((/* implicit */unsigned int) var_16)), (2407073748U)))))));
        arr_2 [i_0] = ((/* implicit */signed char) var_2);
        var_21 = ((/* implicit */unsigned char) max((259703425U), (2407073749U)));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_5 [i_1] [20LL] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1 + 1]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_6))));
            var_23 = 673166241U;
        }
        for (int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (((unsigned int) arr_3 [(short)5]))));
            arr_10 [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((arr_8 [(unsigned short)5]) == (((/* implicit */unsigned int) 1905211283))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3] [(signed char)4]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (arr_4 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)143)))))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_25 -= (~(((/* implicit */int) arr_4 [i_1 + 1])));
            arr_14 [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned int) var_18);
            arr_15 [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((arr_12 [(unsigned char)6] [i_4]) ? (((/* implicit */int) arr_12 [i_4] [i_1])) : (((/* implicit */int) arr_6 [(_Bool)1] [i_4])))) : (((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) arr_9 [i_1]))))));
            var_26 = (~(((/* implicit */int) (_Bool)1)));
        }
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [(unsigned char)2] [(unsigned char)2]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            arr_22 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) % (((/* implicit */int) ((short) arr_18 [i_5])))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_5] [i_6])) <= (((/* implicit */int) ((((/* implicit */int) arr_20 [i_5] [i_5] [i_5])) >= (((/* implicit */int) arr_13 [i_6] [i_6] [i_6]))))))))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_28 *= ((/* implicit */unsigned long long int) arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_29 = (!(arr_28 [i_5] [i_5] [i_6] [i_8] [i_9]));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((short) arr_27 [i_9] [i_8] [i_7] [i_6])))));
                            var_31 = ((/* implicit */_Bool) arr_9 [i_8]);
                            var_32 = ((((/* implicit */int) arr_6 [i_6] [i_9])) >= (((/* implicit */int) arr_6 [i_6] [i_6])));
                            arr_30 [i_5] [i_5] [i_6] [i_8] [i_6] = (((!(((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_7])))) ? (((/* implicit */unsigned int) ((int) var_14))) : (((arr_18 [i_9]) ^ (var_0))));
                        }
                        arr_31 [i_5] [i_6] [i_7] [i_8] [i_7] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_5] [i_6] [i_7])) ? (((/* implicit */int) arr_27 [i_5] [i_6] [i_7] [i_8])) : (((/* implicit */int) arr_6 [i_8] [i_8]))));
                        arr_32 [i_5] [i_6] [(unsigned char)0] [i_7] [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) / (1887893531U)))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_25 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_39 [i_11] = ((/* implicit */_Bool) arr_7 [i_5] [i_10] [i_11]);
                    arr_40 [i_11] [i_11] = ((/* implicit */signed char) arr_7 [i_5] [i_10] [i_11]);
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                        {
                            {
                                var_33 ^= ((/* implicit */unsigned int) arr_12 [i_5] [i_5]);
                                arr_46 [9ULL] [i_10] [i_10] [i_10] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_44 [i_5] [i_5] [i_5] [i_5] [i_5] [i_11] [i_5])) < (((/* implicit */int) arr_28 [i_5] [i_10] [i_11] [i_12] [i_13]))));
                                arr_47 [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_43 [i_5] [i_5] [i_5] [i_5] [i_11] [i_5] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_21 [3LL] [i_5] [3LL])) % (arr_35 [i_5] [i_5]))));
    }
}
