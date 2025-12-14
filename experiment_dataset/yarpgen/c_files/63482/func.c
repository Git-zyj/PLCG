/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63482
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
    var_20 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (+(0U)))), (((((/* implicit */_Bool) 16383U)) ? (288230376151711740LL) : (((/* implicit */long long int) 2147483647)))))) != (((/* implicit */long long int) ((/* implicit */int) var_16)))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */long long int) var_18)), (var_4))))));
    var_22 = ((/* implicit */unsigned short) var_17);
    var_23 = ((/* implicit */unsigned long long int) ((unsigned int) -1171691280));
}
