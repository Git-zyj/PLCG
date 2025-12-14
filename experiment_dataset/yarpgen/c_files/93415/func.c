/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93415
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
    var_10 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
    var_12 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_6)))))) ? (((((/* implicit */_Bool) max((var_1), (var_2)))) ? (((((/* implicit */_Bool) var_0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)5486), ((short)-32749))))))) : (max((((/* implicit */unsigned int) (short)(-32767 - 1))), (((unsigned int) var_4))))));
}
