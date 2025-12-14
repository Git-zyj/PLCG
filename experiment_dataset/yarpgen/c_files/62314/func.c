/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62314
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
    var_14 = ((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (unsigned char)0))));
    var_15 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_13))) * (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))));
}
