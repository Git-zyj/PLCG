/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93801
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
    var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_8))) ? (((var_13) ? (((((/* implicit */_Bool) var_7)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (min((23ULL), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) -6258192489644754783LL)) ? (var_14) : (((/* implicit */int) var_3)))) : (var_14))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)79)))), (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((((/* implicit */_Bool) ((short) var_13))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) arr_3 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) 131071U)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    var_17 &= ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */int) var_2)))), (((/* implicit */int) (_Bool)1)))))));
}
