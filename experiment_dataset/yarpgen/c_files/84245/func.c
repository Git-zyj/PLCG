/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84245
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)44067)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (4052556348U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))))))))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(16383)))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2030))))), (-16391))) : (((/* implicit */int) min((((/* implicit */unsigned short) max(((short)30825), ((short)-30825)))), (max(((unsigned short)63506), (arr_2 [i_0]))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_20 -= ((/* implicit */short) (((!(((/* implicit */_Bool) 16390)))) ? (((((/* implicit */_Bool) (unsigned short)20356)) ? (((/* implicit */int) min(((unsigned short)63522), (((/* implicit */unsigned short) (signed char)-1))))) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1])))) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [(short)5])), (16395)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)8191)))) : (((/* implicit */int) ((short) arr_5 [(signed char)0])))))));
        var_21 = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-18)), (arr_4 [i_1])))) ? ((+(((/* implicit */int) (signed char)53)))) : (arr_5 [i_1]));
        var_22 ^= ((/* implicit */_Bool) max(((+((+(3736590677527050145ULL))))), (((/* implicit */unsigned long long int) max((arr_5 [10ULL]), (((/* implicit */int) (short)30825)))))));
        var_23 &= ((/* implicit */unsigned long long int) arr_4 [i_1]);
        var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [1U] [i_1])) | (((/* implicit */int) (short)1840))))) ? (((((/* implicit */_Bool) (short)-30823)) ? (-16378) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) arr_4 [i_1 + 1])))), ((+(((/* implicit */int) arr_4 [i_1]))))));
    }
    var_25 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-30823)), (var_8)))) : (max((((/* implicit */unsigned long long int) var_1)), (14710153396182501471ULL))))), (((/* implicit */unsigned long long int) max(((unsigned short)7137), (((/* implicit */unsigned short) (short)-21982)))))));
}
