/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74989
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [(signed char)12] [(unsigned char)10]))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 9223372036854775807LL))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_20 ^= arr_3 [i_3];
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [(unsigned short)7])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 1350823099)) : (arr_5 [i_1] [i_3]))) : (((/* implicit */unsigned long long int) var_5))));
                        var_22 = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                    }
                } 
            } 
        }
        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_4])) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)115)) : (1350823099)))));
            arr_14 [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_4] [4U])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_7 [i_0] [i_4] [i_4]))));
            var_24 = ((/* implicit */unsigned short) var_3);
        }
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            arr_19 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (9223372036854775807LL) : (var_3)))) ? (arr_6 [i_0] [i_5] [i_5]) : (((arr_10 [i_5] [i_5] [i_0] [i_0]) >> (((((/* implicit */int) (unsigned char)227)) - (217)))))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) arr_15 [(signed char)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0]))) : (arr_6 [i_0] [i_0] [i_0])));
            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [(unsigned char)1] [i_5]) + (arr_6 [i_0] [i_5] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [2ULL] [i_0] [i_0] [i_5]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_5 [i_0] [i_5])))));
        }
        var_27 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
}
