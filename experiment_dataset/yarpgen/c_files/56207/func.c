/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56207
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned short)16384)) != (((/* implicit */int) (unsigned short)65532)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */unsigned long long int) (unsigned short)16400)), (281474974613504ULL)))));
    var_17 = ((/* implicit */short) min((var_6), (((/* implicit */unsigned long long int) var_14))));
}
