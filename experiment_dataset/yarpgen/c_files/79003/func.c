/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79003
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_10), (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) ((short) var_7))) <= (((/* implicit */int) ((((/* implicit */int) var_7)) <= (var_10)))))))));
    var_13 ^= ((/* implicit */short) ((((/* implicit */int) max((max((var_2), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((_Bool) var_11)))))) & (((/* implicit */int) (unsigned short)65535))));
    var_14 = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_0)))), (min((((int) var_0)), (((/* implicit */int) var_6))))));
}
