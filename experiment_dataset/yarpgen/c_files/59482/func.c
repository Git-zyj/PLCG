/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59482
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
    var_10 = ((/* implicit */unsigned short) max((((/* implicit */int) var_2)), ((+(((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_7)))))))));
    var_11 = ((/* implicit */unsigned int) var_7);
    var_12 = ((/* implicit */unsigned int) ((var_2) ? (-1644204988) : (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_2 [i_0] [i_0])))) * (((/* implicit */int) var_8))));
        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_0) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)32014)) : (((/* implicit */int) arr_1 [i_0]))))))))));
    }
}
