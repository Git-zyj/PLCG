/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61989
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        arr_4 [8U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */int) var_0)) + (2147483647))) << (((9007199254740991LL) - (9007199254740991LL))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_8))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [2] [i_0]) <= (arr_0 [i_0] [i_0 + 1]))))) & ((((_Bool)1) ? (arr_0 [8ULL] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (max((((/* implicit */long long int) max((((/* implicit */short) var_2)), ((short)-32754)))), (((long long int) 12864311463633666452ULL))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0 - 2] [i_0 + 2]);
        arr_6 [(signed char)6] &= ((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0]);
        arr_7 [i_0] = ((/* implicit */unsigned long long int) 58372741);
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) arr_9 [i_1]);
        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) > ((~(arr_8 [i_1])))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_10 [i_2 - 1] [i_2]) + (arr_10 [i_2 + 1] [i_2 + 1])))), (12296471776024849812ULL))))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_2 - 1]), (arr_9 [i_2 - 3]))))) <= (((unsigned long long int) arr_9 [i_2 - 1]))));
        var_16 *= ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */_Bool) (short)32736)) && ((_Bool)1))) || (((/* implicit */_Bool) arr_10 [14LL] [14LL]))))), (((((((/* implicit */_Bool) arr_8 [(unsigned char)14])) || (((/* implicit */_Bool) arr_8 [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-17)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((short) (short)(-32767 - 1))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (arr_8 [i_3]))))));
        var_17 = ((/* implicit */unsigned int) ((((((arr_1 [i_3] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [4U] [i_3]))))) + (9223372036854775807LL))) >> (((arr_13 [(signed char)1] [i_3]) - (1358210373)))));
        var_18 = ((/* implicit */long long int) ((signed char) ((short) arr_13 [i_3] [i_3])));
        arr_16 [9] [i_3] = ((/* implicit */unsigned int) ((arr_8 [i_3]) / (var_9)));
        arr_17 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036821221376ULL)) ? (arr_10 [(_Bool)1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32753)))));
    }
    var_19 = ((/* implicit */signed char) ((var_6) >> (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (536870911ULL))) - (18446744073709522887ULL)))));
}
