/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94642
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) > (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)3)), (var_12)))) >> (((((/* implicit */int) (unsigned short)14194)) - (14194)))))));
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (short)-20381)) * (((/* implicit */int) var_4))))) % (((min((var_13), ((_Bool)1))) ? (((((/* implicit */_Bool) (short)-11756)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
}
