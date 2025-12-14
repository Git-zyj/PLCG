/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75553
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
    var_14 = ((/* implicit */unsigned int) (_Bool)1);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12))) * (var_13))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) : (var_4)))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-22588)) && (((/* implicit */_Bool) var_11))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) % (var_9))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((unsigned char) arr_2 [i_0])), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_10)), (var_9))) == (((/* implicit */long long int) 2823901338U))))))))));
    }
}
