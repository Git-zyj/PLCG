/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93338
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_11))));
        var_15 = ((/* implicit */unsigned char) (-(((long long int) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) var_9)) ^ (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_4)))))));
        arr_3 [i_0] [i_0] = ((((((/* implicit */_Bool) max((((/* implicit */int) (short)12)), (-498572412)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)12), ((short)-13))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) ^ (-7995051726570542622LL));
        var_16 = ((/* implicit */int) min((var_16), ((+(((/* implicit */int) (short)-12))))));
    }
    var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) var_5)), (var_9)))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (max((((/* implicit */long long int) var_12)), (var_9)))))) ? (((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) >> (((var_11) - (4229765957088846415ULL))))) : ((~(max((((/* implicit */unsigned long long int) var_10)), (var_11)))))));
}
