/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58849
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
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((28U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
    var_19 = ((/* implicit */_Bool) min((((/* implicit */short) var_2)), (((short) ((var_17) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((var_6) ? (max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_16)) : (2147483647))), (((/* implicit */int) min(((signed char)-84), (((/* implicit */signed char) (_Bool)0))))))) : ((+(((/* implicit */int) max((((/* implicit */short) (signed char)-126)), ((short)10729)))))))))));
}
