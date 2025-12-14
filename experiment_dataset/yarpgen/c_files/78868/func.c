/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78868
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) (~(((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_14))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)7936)) | (((/* implicit */int) var_3)))) & (max((0), (-12))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_20 -= (((!(((/* implicit */_Bool) var_18)))) ? (arr_1 [14]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_7))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0 + 1]));
    }
}
