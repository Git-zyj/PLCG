/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87264
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
    var_13 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (unsigned short)18768))));
    var_14 = ((/* implicit */short) var_12);
    var_15 = ((/* implicit */unsigned int) ((min((max((((/* implicit */unsigned long long int) 2)), (var_9))), (((/* implicit */unsigned long long int) max((2147483646), (((/* implicit */int) (unsigned short)511))))))) >= (var_9)));
    var_16 = ((/* implicit */int) (short)-32767);
}
