/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68336
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
    var_18 = ((unsigned char) max((max((var_13), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) max((((/* implicit */short) var_9)), (var_14))))));
    var_19 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)63))), (((/* implicit */unsigned short) (_Bool)1))));
    var_20 -= min((((int) max((var_8), (((/* implicit */unsigned int) var_10))))), (max((2147483643), (-2147483639))));
}
