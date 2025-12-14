/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71361
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
    var_11 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((var_7), (((/* implicit */signed char) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (4294967295U) : (4294967274U)))) : (min((var_6), (((/* implicit */long long int) var_8))))))));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_3))));
    var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_5)), (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) 2147483647)) : (var_5))))))) != (min((var_0), (((((/* implicit */_Bool) 1256280337824253755ULL)) ? (var_9) : (((/* implicit */unsigned long long int) var_10))))))));
}
