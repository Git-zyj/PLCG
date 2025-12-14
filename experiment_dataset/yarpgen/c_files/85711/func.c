/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85711
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
    var_14 = ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [4ULL] = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [(signed char)7]);
        var_15 = ((/* implicit */short) (((-(((/* implicit */int) (!(var_1)))))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((arr_1 [i_0] [i_0]) || (((/* implicit */_Bool) 5750324649590373015ULL))))) : (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (3033095801U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117)))));
    var_17 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */long long int) var_7)) > (var_8)))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)155))))), (5475474960857007872LL)))));
}
