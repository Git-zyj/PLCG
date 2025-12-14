/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60933
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
    var_18 = ((/* implicit */long long int) var_7);
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((var_5) ? (min((0), (var_9))) : (((/* implicit */int) ((unsigned short) 4095ULL))))) : (((((/* implicit */_Bool) min(((unsigned char)64), (var_17)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192))))) : (((/* implicit */int) (unsigned char)2))))));
    var_20 = ((/* implicit */unsigned long long int) max(((unsigned short)1920), ((unsigned short)65535)));
}
