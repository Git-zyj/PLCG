/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56963
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_1)) - (max((var_8), (((/* implicit */long long int) max((var_7), (var_5))))))));
    var_20 &= ((/* implicit */_Bool) max((((/* implicit */int) var_18)), ((~(((/* implicit */int) min((((/* implicit */short) var_15)), (var_7))))))));
}
