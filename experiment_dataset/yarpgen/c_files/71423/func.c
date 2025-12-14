/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71423
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
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
    var_12 |= ((/* implicit */_Bool) ((((var_9) + (((/* implicit */long long int) ((unsigned int) var_0))))) - (((/* implicit */long long int) var_10))));
    var_13 = ((/* implicit */signed char) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((((min((var_8), (0LL))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [(signed char)9]))))))), (((/* implicit */long long int) max((29), (((((/* implicit */_Bool) arr_2 [i_0])) ? (58) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        var_14 &= (+(min((((/* implicit */long long int) ((unsigned char) arr_3 [i_0] [(unsigned char)15]))), (min((((/* implicit */long long int) arr_3 [i_0] [0LL])), (9223372036854775803LL))))));
    }
    for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_10))));
            var_16 *= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_2])) && (((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 + 2])))))));
            var_17 = ((((/* implicit */_Bool) ((-1LL) + (((/* implicit */long long int) 0U))))) ? (((/* implicit */int) var_5)) : (33));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) var_9);
        }
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_15 [i_1 - 2] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1LL)) ? (-31) : (((/* implicit */int) (signed char)-99))));
            arr_16 [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) -885480990)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52547))) : (-1889741857011760805LL)))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_4 = 3; i_4 < 13; i_4 += 1) /* same iter space */
            {
                arr_19 [i_1] [i_1] [(short)6] [i_1 - 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 2]))));
                arr_20 [i_4] [i_3] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_4 + 1] [i_1 - 1]))));
                var_18 *= ((/* implicit */unsigned char) arr_8 [i_1 + 1] [i_3] [i_4 + 4]);
                arr_21 [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)110))))));
            }
            /* vectorizable */
            for (long long int i_5 = 3; i_5 < 13; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 3; i_6 < 15; i_6 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((unsigned short) var_0))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? (((/* implicit */int) arr_25 [i_1 + 1] [i_3] [i_3] [i_6 + 2] [(signed char)13] [i_6])) : (((/* implicit */int) arr_25 [i_1] [i_3] [i_3] [i_6] [i_5] [i_5]))));
                }
                arr_26 [i_1 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (var_8) : (var_8))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5 + 3] [i_3])))));
            }
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                arr_30 [i_1 - 1] [i_3] [i_7] [i_1 - 2] = ((unsigned long long int) ((unsigned char) arr_5 [8LL]));
                arr_31 [i_1] [i_3] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (arr_29 [i_7] [i_1] [i_7] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1 + 1] [i_3])))));
            }
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                arr_36 [(unsigned char)11] [i_3] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 + 2] [i_1 + 2]))) == (arr_18 [i_1 - 2] [i_1 + 1] [i_1 + 2]));
                var_21 = ((/* implicit */long long int) ((((262143LL) + (8649231386912282227LL))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_1] [i_3] [i_8])))))));
                arr_37 [i_8] [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_1] [i_3] [0])) >> (((((/* implicit */int) (signed char)121)) - (117))))))));
            }
        }
        var_22 = ((/* implicit */unsigned char) arr_18 [i_1] [i_1] [i_1]);
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) min((var_1), (var_9))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))))));
}
