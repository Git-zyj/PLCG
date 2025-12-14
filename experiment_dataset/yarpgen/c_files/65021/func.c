/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65021
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
    var_16 &= ((/* implicit */signed char) max((((/* implicit */int) var_3)), (var_2)));
    var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (short)32759)), (9223372036854775807LL))) | (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) var_12))))))))) ? ((-(((/* implicit */int) ((_Bool) -1527901502))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)22)) + (((/* implicit */int) (short)31))))) ? (-1527901489) : (var_2)))));
}
