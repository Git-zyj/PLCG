/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91258
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
    var_11 = var_0;
    var_12 ^= ((/* implicit */int) ((_Bool) var_8));
    var_13 ^= ((/* implicit */short) (+((-2147483647 - 1))));
    var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((int) (unsigned short)20549))) ? (var_1) : (((((/* implicit */int) var_0)) % (((/* implicit */int) var_2)))))), (max((var_1), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8)))))))));
}
