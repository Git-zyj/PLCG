/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59963
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
    var_15 = ((/* implicit */unsigned int) (unsigned short)33046);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 &= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (18446744073709551615ULL) : (18446744073709551615ULL)))) ? (((arr_3 [i_0]) ? (((/* implicit */int) (unsigned short)17514)) : (((/* implicit */int) arr_3 [(short)5])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))))) % (((((/* implicit */_Bool) 4266570075U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)32758))))));
        arr_5 [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_6 [4U]) : (arr_6 [i_1])))) ? (18446744073709551615ULL) : (arr_6 [i_1])));
        arr_9 [(_Bool)1] [i_1] |= ((/* implicit */unsigned int) (-(((var_7) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (short)32767))))));
        var_17 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_7 [i_1]))));
    }
}
