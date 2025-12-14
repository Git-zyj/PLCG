/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99358
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
    var_10 *= ((/* implicit */unsigned char) var_5);
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (max((min((var_2), (((/* implicit */unsigned int) var_3)))), (max((var_2), (((/* implicit */unsigned int) var_5)))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_8))), (((int) (unsigned short)65535)))))));
}
