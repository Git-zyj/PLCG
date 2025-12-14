/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61262
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
    var_14 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((18446744073709551615ULL) == (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (min((18446744073709551592ULL), (((/* implicit */unsigned long long int) -7099857)))) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 3] [(short)4]))))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (-(((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) % (arr_1 [i_0] [i_0]))))))));
    }
    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_8)))) ? ((~(18057972050348031330ULL))) : (((((/* implicit */_Bool) -6254408167951023708LL)) ? (var_8) : (((/* implicit */unsigned long long int) var_0))))))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_3)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31))))) : (((/* implicit */unsigned long long int) ((2483372044086525478LL) ^ ((-9223372036854775807LL - 1LL))))))) : (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551612ULL)) && (((/* implicit */_Bool) var_4))))))))));
    var_17 += ((/* implicit */unsigned int) (+(max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (9223372036854775807LL))))))));
}
