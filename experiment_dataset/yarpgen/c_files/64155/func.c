/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64155
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
    var_20 = ((/* implicit */unsigned short) var_6);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((14441203690591726697ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6691)))))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 8U)) : (var_16))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_19))))))));
    var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_18))))) % (var_17))))));
    var_24 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */int) ((var_14) <= (((/* implicit */int) var_4))))))))));
}
