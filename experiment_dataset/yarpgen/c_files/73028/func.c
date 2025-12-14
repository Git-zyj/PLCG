/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73028
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
    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((var_8) > (((/* implicit */unsigned int) var_2))))), (var_5))))));
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
    var_15 = var_6;
    var_16 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (var_2)))) || (((/* implicit */_Bool) ((unsigned int) (unsigned char)68)))))) & (max((var_12), (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_10)))))))));
}
