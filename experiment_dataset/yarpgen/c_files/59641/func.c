/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59641
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
    var_17 = ((/* implicit */int) max((var_0), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 6860520129279803347ULL))))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)13700)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0 + 1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + ((~(((/* implicit */int) arr_0 [i_0] [5LL]))))))) ? (min((12431426356307639417ULL), (arr_1 [i_0 + 1]))) : ((~(((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
        var_19 &= ((/* implicit */short) ((((/* implicit */long long int) (-(251070852)))) + (((-250649981319835095LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-13700)))))));
        var_20 += ((/* implicit */unsigned long long int) 7730215455249131129LL);
        var_21 = min((6015317717401912190ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((4729404806502994553ULL) >> (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) - (30369))))))))));
    }
    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13700))) : (283668453668146556LL))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (-2427207465116939855LL))))) - (((((/* implicit */_Bool) 6015317717401912199ULL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
}
