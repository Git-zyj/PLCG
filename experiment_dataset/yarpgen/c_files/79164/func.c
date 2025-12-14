/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79164
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
    var_12 = ((unsigned int) var_5);
    var_13 = max((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535)))), (min((max((((/* implicit */int) (unsigned short)2)), (var_9))), (((/* implicit */int) var_0)))));
}
