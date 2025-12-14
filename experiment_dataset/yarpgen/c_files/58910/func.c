/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58910
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
    var_19 = ((/* implicit */unsigned short) var_6);
    var_20 *= ((/* implicit */signed char) ((_Bool) min((((/* implicit */int) var_7)), (((var_15) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)8192)))))));
    var_21 += ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) var_6)))));
}
