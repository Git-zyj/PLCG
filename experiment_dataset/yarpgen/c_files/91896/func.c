/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91896
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) max((((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_2))))), (max((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))), (arr_0 [i_0])))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (-3701058955535525599LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    }
    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_0)) - (max((var_15), (((/* implicit */int) var_16))))))));
}
