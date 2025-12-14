/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86261
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
    var_18 = ((/* implicit */unsigned short) var_6);
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_16))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)108)))))))) ? (min((((/* implicit */unsigned long long int) var_4)), (min((var_13), (((/* implicit */unsigned long long int) var_5)))))) : (var_6)));
}
