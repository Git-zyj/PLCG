/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92354
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
    var_16 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))))), (((int) var_3))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))))));
    var_18 &= ((/* implicit */unsigned short) (((+(((/* implicit */int) var_5)))) != ((+(((/* implicit */int) var_5))))));
    var_19 = ((((/* implicit */int) ((short) ((short) var_9)))) | (((/* implicit */int) var_10)));
    var_20 = ((/* implicit */unsigned char) (~(max((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_13))), ((~(var_13)))))));
}
