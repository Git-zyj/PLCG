/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70633
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
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned long long int) var_1)), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)127)))))))));
    var_17 |= max((((/* implicit */unsigned long long int) ((var_0) % (((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-1))))))), ((+(3238614710104537332ULL))));
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) - (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))), (((((/* implicit */_Bool) (unsigned char)213)) ? ((+(1070275591418295733ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
    var_19 ^= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)80)) < (((/* implicit */int) (short)15941)))))) != (((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_1))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)1036)), (var_0)))) ? ((~(var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16711343871337009392ULL)) && (((/* implicit */_Bool) 3238614710104537332ULL)))))))) : (((/* implicit */long long int) min((var_11), (((/* implicit */int) var_12)))))));
}
