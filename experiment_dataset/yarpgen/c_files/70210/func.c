/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70210
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_1))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min(((unsigned short)0), ((unsigned short)65534))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65527))))))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (max((((/* implicit */unsigned long long int) var_12)), (var_11)))))));
}
