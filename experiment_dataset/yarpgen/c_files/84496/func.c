/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84496
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0 - 1] [(unsigned short)7])) : (-943594116)))) ? (((((/* implicit */_Bool) -259042301987901592LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0]))) : (var_14))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) -854589862379268338LL);
            arr_6 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) 854589862379268338LL);
            var_15 = ((/* implicit */_Bool) -854589862379268317LL);
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_0 [i_0 + 2]))));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                var_17 = ((arr_3 [i_0 + 3] [i_0] [i_0 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_10 [(signed char)11] [i_0 - 1] [(signed char)11] [(signed char)11])))) : (((9223372036854775807LL) << (((854589862379268317LL) - (854589862379268317LL))))));
                var_18 = ((/* implicit */unsigned char) ((arr_10 [i_0] [i_2] [i_3] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3]))) : (-9223372036854775807LL)));
            }
            for (unsigned char i_4 = 2; i_4 < 12; i_4 += 1) 
            {
                var_19 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [8LL]))) & (((489968817669942609LL) >> (((9223372036854775807LL) - (9223372036854775798LL)))))));
                var_20 = ((/* implicit */_Bool) (-(arr_9 [i_0])));
            }
            var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
            var_22 = ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_2])) != (((/* implicit */int) arr_10 [i_0 - 1] [i_2] [i_2] [i_2])));
            var_23 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_0 + 1]))));
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned int) ((-854589862379268317LL) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 1] [i_0 + 1])))));
            arr_15 [i_0] = ((/* implicit */_Bool) ((int) arr_12 [i_0 + 2] [i_0 - 1] [i_5]));
        }
    }
    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 4) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_6] [i_6 + 3] [i_6 + 2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6 + 1] [i_6 + 2]))) != (arr_17 [i_6 + 1] [i_6 + 2])))) : (((/* implicit */int) arr_1 [i_6 - 1] [i_6 + 1]))));
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 489968817669942609LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192)))))) > (-854589862379268326LL))))) : (arr_12 [i_6] [i_6 + 3] [i_6])));
        var_27 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_11 [i_6] [i_6])), (((max((((/* implicit */long long int) (unsigned char)91)), (-5880914335614136666LL))) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
        var_28 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)52)), (arr_17 [i_6 + 1] [i_6])))) ? (((/* implicit */int) arr_1 [i_6] [i_6 + 2])) : (((/* implicit */int) arr_8 [i_6])))), (((/* implicit */int) ((arr_1 [i_6 + 1] [i_6 + 3]) || (((/* implicit */_Bool) (unsigned char)113)))))));
    }
    for (unsigned char i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_3 [(unsigned char)8] [1LL] [(unsigned short)11]))));
        var_30 *= ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) 854589862379268338LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_13 [i_7 + 1] [i_7 + 1])))))), (min((((((/* implicit */_Bool) arr_9 [(unsigned char)8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)192)))), ((+(((/* implicit */int) (_Bool)1))))))));
    }
    var_31 += ((/* implicit */unsigned char) (_Bool)1);
    var_32 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 9223372036854775807LL)))), (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) -6688655514046462724LL)))))), (var_9)));
}
