/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77217
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
    for (int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_8);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40334))) : (2234085266U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2]))))) : (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_12)))))));
    }
    var_18 = ((/* implicit */signed char) ((unsigned int) max((((var_0) * (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (signed char)0)))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_8)), (var_2))))));
    var_20 = ((/* implicit */signed char) var_10);
    var_21 = ((/* implicit */unsigned char) var_16);
}
