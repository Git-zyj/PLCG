/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82641
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)38852))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_21 *= ((/* implicit */unsigned char) ((int) (unsigned short)26685));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_22 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1] [i_1])))))));
            var_23 = ((/* implicit */short) min((var_23), (max((((/* implicit */short) arr_2 [i_0] [i_0])), (var_13)))));
            var_24 ^= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
            var_25 -= ((/* implicit */signed char) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))));
        }
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_3 [i_0]))));
            var_27 = ((/* implicit */unsigned int) arr_0 [(signed char)4] [i_2]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned long long int) var_8);
            var_28 += var_3;
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [7])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_0]))) | (3354138671U)))) : (((((/* implicit */_Bool) (unsigned short)38863)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38825))))))))));
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */int) var_6)) + (((int) arr_3 [i_0])))))));
            var_31 += ((/* implicit */signed char) ((unsigned short) arr_5 [i_0] [i_0] [i_0]));
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        arr_13 [i_5] &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)75)) - (((/* implicit */int) (unsigned short)26685))));
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [9U] [6ULL])) <= (((/* implicit */int) arr_12 [i_5] [i_5])))))));
        var_33 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)65535));
    }
    /* LoopSeq 1 */
    for (int i_6 = 4; i_6 < 11; i_6 += 4) 
    {
        var_34 = ((/* implicit */unsigned long long int) arr_11 [i_6 + 3]);
        var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)162)), (var_10)))) ? (((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_16 [i_6 - 1])) : (((/* implicit */int) arr_11 [i_6 - 4])))))));
        var_36 -= max((((((/* implicit */int) (unsigned short)41718)) >> (((17624947824784213779ULL) - (17624947824784213779ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6 - 3] [i_6 - 4]))))));
    }
    var_37 ^= ((/* implicit */signed char) max((2065972683), (((((/* implicit */_Bool) -2065972684)) ? (-2065972680) : (((/* implicit */int) (unsigned short)38852))))));
}
