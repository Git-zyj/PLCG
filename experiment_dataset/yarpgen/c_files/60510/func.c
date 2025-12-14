/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60510
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
    var_19 &= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (unsigned short)0)), (8U))) & (((((4294967292U) * (var_14))) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    var_20 = ((((max((8U), (((/* implicit */unsigned int) var_3)))) < ((~(8U))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) 4294967269U)) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (signed char)124)))))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((((/* implicit */_Bool) 4294967282U)) ? (4294967284U) : (13U))), (((/* implicit */unsigned int) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) var_17)) : (((var_3) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))))))))))));
    var_22 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_15)), (((((/* implicit */_Bool) (((_Bool)0) ? (29U) : (1U)))) ? (((/* implicit */int) ((unsigned char) var_1))) : ((-(((/* implicit */int) (signed char)-124))))))));
}
