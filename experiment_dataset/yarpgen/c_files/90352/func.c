/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90352
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)63)) ? (max((((/* implicit */unsigned int) var_2)), (4294967283U))) : (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) var_1)))))));
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) 505726273))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (var_8)))) < (var_9))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) == (max((var_9), (2948276995U)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) (_Bool)1);
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((arr_1 [i_0 - 3]), (((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
    }
}
