/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98793
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
    var_13 &= ((/* implicit */unsigned char) var_3);
    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) && (((/* implicit */_Bool) ((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) || (((/* implicit */_Bool) max((min((((/* implicit */long long int) var_6)), (var_12))), (((/* implicit */long long int) (unsigned char)6)))))));
}
