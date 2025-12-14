/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61582
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
    var_12 ^= ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_0))));
    var_13 |= ((/* implicit */unsigned short) var_2);
    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (unsigned short)65535)) : ((+(((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((_Bool) (unsigned short)65535)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), ((unsigned short)60710)))) ? (((/* implicit */int) min((var_2), (var_7)))) : (((/* implicit */int) max((var_11), ((unsigned char)193))))))));
}
