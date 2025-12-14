/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74308
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
    var_13 = (~((~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    var_14 *= ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) arr_2 [i_0]);
        var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [(_Bool)1]), (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) : (arr_2 [i_0 + 2])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */signed char) var_6);
        var_18 = ((/* implicit */long long int) ((signed char) ((unsigned long long int) var_12)));
    }
    var_19 = ((/* implicit */_Bool) ((((_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) var_9))))))) : (var_10)));
}
