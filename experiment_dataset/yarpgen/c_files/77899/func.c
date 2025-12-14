/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77899
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned int) var_2))))) ? (((var_10) & (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -12152288)) ? (((/* implicit */int) var_1)) : (var_12))))))) ? (((((var_13) < (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20074))) : (var_15))) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_18 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((int) var_0))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((/* implicit */int) (short)2047)) - (2034))))))))) != (min((((/* implicit */int) (_Bool)1)), (3932160)))));
            arr_6 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (((long long int) 9223372036854775807LL))))), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_15)))) / ((~(9223372036854775807LL)))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (arr_3 [1U] [i_0 - 1] [i_0])))) ? ((-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4044811106U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_16)) << (((/* implicit */int) var_16)))))))));
            var_20 ^= max((max((var_3), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1]))))));
        }
        arr_7 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) : (min((((/* implicit */long long int) var_0)), (var_15)))))) ? (max((min((((/* implicit */unsigned int) var_8)), (var_5))), (((/* implicit */unsigned int) arr_0 [i_0 + 2] [i_0 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
        var_21 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1])) ? (arr_1 [i_0 - 1] [i_0]) : (((/* implicit */long long int) var_11)))) - (((((/* implicit */_Bool) arr_1 [i_0 + 2] [3ULL])) ? (arr_4 [i_0 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_10 [4LL] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) 2097151)) : (2526809364U)))));
        var_22 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((arr_8 [i_2] [i_2]) + (2147483647))) << (((var_11) - (1753237735)))))) ? (((/* implicit */int) max((var_7), (((/* implicit */short) var_9))))) : ((-(-966289177))))) ^ ((~(arr_8 [i_2] [i_2])))));
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 22; i_4 += 2) 
        {
            arr_19 [i_3] [i_3] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((long long int) (_Bool)1)) : (9223372036854775807LL)));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))) ? (var_15) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_15 [i_4 - 2] [i_4 - 1] [i_4 + 1])))));
            var_24 = ((((/* implicit */_Bool) (-(16ULL)))) ? (max((((/* implicit */unsigned long long int) arr_16 [i_4 - 1] [i_4 + 1])), (var_3))) : (((((/* implicit */unsigned long long int) arr_12 [i_4 - 2])) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (4503599627370495ULL))))));
        }
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((int) 3701146911U)))));
    }
}
