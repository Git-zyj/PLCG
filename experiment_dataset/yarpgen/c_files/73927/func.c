/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73927
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [14])) ? ((-(((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) arr_0 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */short) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0]))))))));
        var_21 *= ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_2 + 3] [i_2])) % (((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 1]))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        arr_11 [i_3] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_1] [i_2 + 2] [i_4] [i_4]);
                        arr_12 [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((int) arr_1 [i_2 + 3]));
                        var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_1]))));
                    }
                } 
            } 
            arr_13 [i_1] [i_1] [i_2] = ((/* implicit */short) ((unsigned int) arr_0 [i_2 + 3] [i_2 + 1]));
        }
        var_24 += max((min((arr_2 [i_1]), (((/* implicit */unsigned char) ((signed char) arr_1 [i_1]))))), (min((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
            {
                arr_18 [i_1] [i_1] [i_6] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_10 [i_1] [i_5] [i_5] [i_6] [i_6] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_5] [(signed char)21] [i_5] [(signed char)21]))) : (arr_4 [i_1])))));
                var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_1] [i_5] [i_5]))));
                arr_19 [i_1] [i_1] [i_6] |= ((/* implicit */int) arr_10 [i_1] [i_5] [i_6] [i_5] [i_6] [i_1]);
            }
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
            {
                arr_23 [i_5] [i_7] &= ((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5]);
                arr_24 [i_1] [i_5] = ((/* implicit */signed char) arr_2 [i_1]);
            }
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_5] [i_5])) ? (arr_20 [i_1] [i_5] [i_1] [i_5]) : (arr_20 [i_1] [i_1] [i_5] [i_5])));
        }
    }
    var_27 = ((/* implicit */_Bool) var_15);
    var_28 = min((((int) var_11)), (((/* implicit */int) var_1)));
    /* LoopNest 3 */
    for (long long int i_8 = 4; i_8 < 17; i_8 += 3) 
    {
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 17; i_12 += 1) 
                        {
                            {
                                var_29 = (+(((((/* implicit */_Bool) arr_37 [i_12 + 3] [i_12 + 3] [i_12] [i_12 + 2])) ? (((/* implicit */int) arr_37 [i_12 + 3] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_37 [i_12 + 1] [i_12] [i_12] [i_12 + 1])))));
                                var_30 = ((/* implicit */unsigned int) ((unsigned long long int) ((arr_20 [i_8] [i_8] [i_8 - 2] [i_12 + 3]) % (min((arr_7 [i_8] [i_9] [i_11]), (((/* implicit */int) arr_37 [i_8] [i_8] [i_8] [i_8])))))));
                                var_31 = ((/* implicit */long long int) max((((((/* implicit */int) arr_36 [i_8] [i_8] [i_8])) % (arr_39 [i_8 - 1] [i_9] [i_9] [i_9] [i_9 + 1]))), (max((arr_39 [i_9] [i_9] [i_9] [i_9] [i_9 + 1]), (arr_39 [i_8] [i_8] [i_9] [i_9] [i_9 + 1])))));
                                arr_40 [i_8] [i_9] [i_8] [i_8 - 2] [i_8 - 2] [i_8] [i_8 + 1] = ((/* implicit */int) ((long long int) ((signed char) arr_1 [i_8 - 3])));
                                var_32 = ((/* implicit */_Bool) ((arr_32 [i_12 - 1] [i_9] [i_9] [i_8]) % ((~(((((/* implicit */int) (short)56)) % (2147483647)))))));
                            }
                        } 
                    } 
                    arr_41 [i_9] [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_9 + 1])) / (((/* implicit */int) min((arr_25 [i_10]), (arr_0 [i_8] [i_8]))))))), (((((/* implicit */_Bool) ((unsigned char) arr_25 [13ULL]))) ? (min((arr_16 [i_9] [i_9] [i_10] [i_9]), (arr_38 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_27 [i_9]), (((/* implicit */signed char) arr_36 [i_8] [i_9] [i_10]))))))))));
                }
            } 
        } 
    } 
}
