/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56554
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
    var_11 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((((/* implicit */short) var_10)), (var_9))))))));
    var_12 = ((long long int) (!(((/* implicit */_Bool) max((var_3), (var_5))))));
    var_13 = ((/* implicit */short) ((var_8) % (((((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_0))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3072))) & (var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))));
}
