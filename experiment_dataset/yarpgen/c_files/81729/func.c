/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81729
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
    var_13 += ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) (short)11764)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) (short)-1)))))), (((/* implicit */int) var_5))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) max((281474976710655ULL), (var_0))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) (short)-11765)) || (((/* implicit */_Bool) (short)-18128))))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -283628793743785915LL)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (short)-24045))) ? (((arr_2 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_15 = ((/* implicit */short) max((((/* implicit */long long int) (signed char)6)), (-7495015351948053455LL)));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_0])) ^ (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (signed char)5))))));
    }
}
