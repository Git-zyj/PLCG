/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56419
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_10))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-18890)), (-6291049057487474777LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0] [(short)2])))) : (-2950041926018737685LL))), (((long long int) ((short) var_1)))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((-6291049057487474761LL) & (arr_2 [i_0] [i_0]))) : (min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_7) : (var_16))), (min((-6291049057487474761LL), (var_0)))))));
        var_22 = arr_0 [i_0];
        arr_3 [i_0] = ((long long int) arr_1 [i_0]);
        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (min((min((((/* implicit */long long int) arr_0 [i_0])), (-1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_18))))))) : (((((/* implicit */_Bool) var_7)) ? (arr_2 [4LL] [4LL]) : (arr_2 [i_0] [10LL])))));
    }
    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) 1092652267525313946LL))));
}
