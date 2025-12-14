/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83394
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
    var_20 |= ((/* implicit */_Bool) var_0);
    var_21 = ((/* implicit */unsigned int) max((((long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_15)))), (min((((long long int) (unsigned short)65535)), (((/* implicit */long long int) (unsigned short)65512))))));
    var_22 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (11076462579484580951ULL)))) && (((/* implicit */_Bool) var_0)))));
    var_23 = ((/* implicit */_Bool) ((((var_13) != (var_15))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_15))))))));
}
