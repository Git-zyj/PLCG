/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58600
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
    var_10 |= ((/* implicit */short) var_0);
    var_11 = ((/* implicit */unsigned int) max((max((((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)1))))), (var_5))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) var_4)))))));
    var_12 += ((/* implicit */long long int) min((max(((short)16), ((short)23))), (var_4)));
    var_13 = ((/* implicit */int) ((((max((4294967295U), (var_6))) >> (((((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23))) : (var_1))) - (723752744U))))) >> (((var_1) - (723752744U)))));
}
