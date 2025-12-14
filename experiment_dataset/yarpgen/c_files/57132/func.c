/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57132
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
    var_17 |= ((/* implicit */long long int) min((((/* implicit */short) var_15)), (var_5)));
    var_18 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (~(var_11)))) || (((/* implicit */_Bool) var_9))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) var_15))))) || (((/* implicit */_Bool) ((var_4) % (((/* implicit */int) (signed char)-64)))))))) == (((((0) ^ (2147483647))) ^ (((((((/* implicit */int) var_0)) + (2147483647))) << (((var_9) - (1047706277)))))))));
    var_20 = ((/* implicit */signed char) ((unsigned char) ((short) ((unsigned long long int) var_4))));
}
