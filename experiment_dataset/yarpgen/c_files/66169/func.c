/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66169
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
    var_20 = ((/* implicit */short) max((max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) % (var_5))), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_18))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]));
    }
}
