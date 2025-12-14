/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80383
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
    var_14 = ((/* implicit */short) (unsigned char)64);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - ((+(((var_4) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
    var_16 = ((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)0)));
    var_17 = ((/* implicit */signed char) var_6);
    var_18 &= ((/* implicit */long long int) ((max((var_3), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) max((min((((/* implicit */signed char) var_12)), (var_7))), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)31716)) || (((/* implicit */_Bool) 7425753323013691543LL)))))))) : (((/* implicit */int) var_1))));
}
