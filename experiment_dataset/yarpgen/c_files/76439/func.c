/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76439
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
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_2 [i_0] [i_1]))));
                    var_21 &= max((((/* implicit */long long int) var_17)), (((((((-20LL) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))) & (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)15))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_22 ^= ((/* implicit */unsigned char) ((var_18) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_1 - 1])))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27447)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_10 [i_1] [i_2] [(signed char)16] [i_1] [(signed char)16] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_4]))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (8LL))))))));
                            var_25 += arr_5 [i_1] [i_2] [i_4 + 3];
                            var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_2] [i_3])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_12 [i_0] [i_1] [(signed char)16] [i_3])))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)147)) && (arr_12 [i_4] [i_3] [(unsigned char)9] [i_0]))))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_4] [i_4])) : (((/* implicit */int) var_15))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_2] = ((/* implicit */short) (((~(-21LL))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)63)) && (arr_11 [i_5 - 1] [i_2])))))));
                            arr_18 [i_2 - 1] [i_1] [i_2] [i_2 - 1] [i_5] [i_5] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)54652)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((arr_10 [i_0] [i_1] [10ULL] [i_5] [i_5] [i_2]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_8 [i_3]))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) : (var_13)))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0 - 2])) ? (((/* implicit */int) arr_7 [i_0 - 2])) : (((/* implicit */int) var_17)))))));
                        }
                        var_29 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14234091914438965332ULL)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [13ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) : (var_11));
                        var_30 = ((/* implicit */long long int) (!(var_2)));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            var_31 = var_11;
                            arr_23 [i_2] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (_Bool)0))))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_7 + 2]))) : (var_12)))));
                        }
                        var_32 -= ((/* implicit */signed char) arr_7 [i_2 + 1]);
                        arr_24 [(_Bool)1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) arr_7 [i_0]);
                        arr_25 [i_0] [i_1 - 1] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5261508638589956708ULL)) && (((/* implicit */_Bool) (unsigned char)161))));
                        arr_26 [18LL] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_0);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]);
                                var_34 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_13 [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]) - (7133378520049349151ULL)))))) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_8] [i_9 + 2])) : (((/* implicit */int) arr_31 [i_0] [i_1] [i_0] [i_1] [i_2] [i_0] [(short)23])))) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
                                arr_33 [i_2] [i_8] [i_2 - 1] [i_2] = ((/* implicit */long long int) arr_8 [i_0]);
                                arr_34 [i_0] [i_1 + 1] [i_0] [i_2] [i_9] = arr_8 [i_8];
                                arr_35 [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
