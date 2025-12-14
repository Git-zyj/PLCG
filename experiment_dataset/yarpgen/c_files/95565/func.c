/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95565
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */int) arr_1 [5])) < (((/* implicit */int) arr_0 [i_0]))))), (arr_1 [i_0])));
        var_14 += ((((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))) : (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) arr_1 [i_0])) + (126))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        arr_6 [i_1] = ((((/* implicit */int) arr_2 [22U] [i_1 + 4])) ^ (((/* implicit */int) arr_4 [i_1 - 1])));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_5 [(signed char)16])) == (((/* implicit */int) arr_5 [i_1 + 3]))))) * (((/* implicit */int) arr_4 [(signed char)13]))));
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [(unsigned char)14] [i_1] [i_2 + 2] [i_3])) ? (((/* implicit */int) arr_12 [i_2 - 2] [i_2] [i_2 + 1] [i_3])) : (((/* implicit */int) var_3))));
                        var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) + (arr_3 [(short)13] [(short)13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4])))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)89))))) / (arr_3 [i_2] [i_1]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 2; i_5 < 23; i_5 += 2) 
                        {
                            var_19 |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(signed char)14] [(signed char)14] [i_3 - 2] [i_4])) - (((/* implicit */int) arr_4 [i_3]))))) ? (((/* implicit */int) arr_4 [i_2 + 1])) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_16 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1 + 1])))));
                            var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1 + 3] [i_1] [i_3])) ? (((/* implicit */int) arr_2 [i_3] [i_3])) : (((/* implicit */int) arr_15 [i_3] [i_4] [i_4] [i_5 - 1] [i_3])))) >= (((/* implicit */int) arr_4 [(signed char)1]))));
                        }
                        for (unsigned char i_6 = 4; i_6 < 21; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) arr_5 [i_1 + 2]);
                            arr_20 [i_3] [i_3] [i_3 - 2] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_3]))))) || (((/* implicit */_Bool) arr_11 [(short)20] [i_4] [i_3] [i_2] [i_1] [i_1])));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_9] [i_2 + 2] [i_9] [i_8] [i_2])) >= (arr_26 [i_9 - 1] [(unsigned char)5] [i_8] [i_7] [(unsigned char)5] [i_2] [i_1]))))));
                            var_23 = var_4;
                            var_24 = arr_2 [i_1] [i_1];
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_10 = 4; i_10 < 23; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (unsigned int i_12 = 2; i_12 < 22; i_12 += 4) 
                    {
                        {
                            arr_34 [8U] [i_2 + 3] [i_10 - 3] [i_11] [i_12 + 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_26 [i_12] [i_11] [i_11] [i_10 - 3] [(signed char)23] [i_2] [(signed char)23]) : (((/* implicit */int) arr_9 [i_12]))))) >= (((((/* implicit */_Bool) arr_11 [i_12 + 2] [6] [6] [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_10] [i_10]))) : (arr_30 [i_10] [i_10] [i_10] [i_10 - 3])))));
                            arr_35 [i_1] [i_1] [i_1] [i_1 + 4] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_2 + 3] [i_12 + 1] [17ULL])) % (((/* implicit */int) arr_33 [i_2 + 1] [i_12 - 2] [i_10]))));
                        }
                    } 
                } 
            } 
        }
    }
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((((/* implicit */int) var_10)), (min((((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_5)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))))))));
}
