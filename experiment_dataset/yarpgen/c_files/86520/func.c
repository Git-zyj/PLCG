/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86520
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(var_16))))));
    var_18 = ((/* implicit */int) ((var_0) - (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) % (((int) var_13)))))));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((max((var_0), (((/* implicit */unsigned int) (signed char)127)))) - (2172681486U)))))) * (min((((/* implicit */unsigned int) 32086600)), ((~(var_3)))))));
    var_20 = ((/* implicit */long long int) (((+(((var_16) >> (((var_3) - (59926558U))))))) >> (min(((+(((/* implicit */int) (unsigned char)255)))), (((((/* implicit */int) (_Bool)1)) / (-32086598)))))));
    var_21 = ((/* implicit */signed char) var_1);
}
