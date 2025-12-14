/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85451
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_8)))))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) - (var_2)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_16 -= ((/* implicit */long long int) arr_1 [i_0 + 1]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */unsigned char) (-((~(var_14)))));
                    arr_10 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (+(arr_0 [8ULL])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1)) << (((((/* implicit */int) ((unsigned char) arr_17 [i_3] [i_3 - 2]))) - (85)))));
                    var_18 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1]))))) + (6207150957969745939LL)));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_6 [i_4]))));
                    var_20 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) 6207150957969745943LL)) ? (((/* implicit */int) (short)22919)) : (((/* implicit */int) (short)-30133)))) & ((~(((/* implicit */int) (unsigned char)255))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 2; i_6 < 10; i_6 += 4) 
        {
            arr_23 [i_5] = ((/* implicit */signed char) ((arr_19 [i_6 + 2]) ^ (arr_19 [i_6 - 1])));
            var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_6 + 3] [i_6 - 1] [i_6])) + (((/* implicit */int) (_Bool)0))));
            arr_24 [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)30117)) - (-1))) + (arr_21 [i_5] [i_5])));
            arr_25 [i_5] = ((/* implicit */unsigned short) arr_19 [0ULL]);
        }
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            arr_30 [i_7] [i_7] &= ((/* implicit */unsigned int) var_2);
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_29 [i_5] [i_5] [i_5]))))) / (((/* implicit */int) arr_27 [(short)5]))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((-6207150957969745939LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
            var_24 += ((/* implicit */unsigned int) ((int) -1LL));
        }
        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            arr_34 [i_5] [i_8] = ((/* implicit */long long int) arr_29 [i_5] [i_5] [i_5]);
            var_25 = (~(arr_28 [(short)8] [i_5] [i_5]));
        }
        var_26 *= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-22920))) / (-402223905087913378LL))) / (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (short)-12992)))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_38 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_9] [(_Bool)1])) ? (((/* implicit */int) arr_33 [i_9] [(unsigned short)1])) : (((((/* implicit */_Bool) ((-1) | (((/* implicit */int) arr_20 [(signed char)6]))))) ? (((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9])) ? (((/* implicit */int) (short)-12979)) : (((/* implicit */int) arr_33 [(unsigned char)7] [(short)0])))) : ((~(((/* implicit */int) var_7))))))));
        arr_39 [i_9] [5ULL] = ((/* implicit */int) arr_37 [i_9]);
        var_27 = ((/* implicit */unsigned long long int) ((arr_18 [6ULL]) == (((/* implicit */int) arr_26 [i_9]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 2; i_10 < 12; i_10 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_32 [i_9] [10LL])) - (((/* implicit */int) arr_33 [i_9] [i_10]))))))));
            arr_43 [i_10] [13ULL] [i_10] = ((((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned char)64))) || (((/* implicit */_Bool) -6207150957969745939LL))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (((5442527749401456537ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9])))))))));
        }
        for (long long int i_11 = 3; i_11 < 13; i_11 += 4) 
        {
            var_29 ^= ((/* implicit */unsigned char) (~((~(12420288981017023145ULL)))));
            var_30 *= ((/* implicit */unsigned short) var_4);
            var_31 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_37 [i_11 - 3])) * (((/* implicit */int) arr_37 [i_9])))) + (((/* implicit */int) arr_37 [i_9]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                arr_51 [i_9] [4LL] [i_12] [4LL] &= ((/* implicit */int) -1LL);
                arr_52 [i_9] [3LL] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [3U] [i_11] [i_12])) ? (arr_28 [i_11] [i_9] [(unsigned char)12]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) (+(arr_46 [i_9])))) : (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9]))) ^ (var_8)))));
                arr_53 [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_50 [i_9] [i_9] [i_11] [i_11 - 3]))))), (arr_42 [i_9] [(short)13] [i_11])));
            }
        }
    }
}
