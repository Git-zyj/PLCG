/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98462
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_10)))))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (var_14)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) var_14)) ^ (var_1)))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) var_10))))) ? (max((((9187343239835811840ULL) << (((805306368) - (805306338))))), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -805306369)) ? (805306368) : (805306368))) % (var_13))))));
}
