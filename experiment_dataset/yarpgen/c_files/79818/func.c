/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79818
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
    var_16 = ((/* implicit */signed char) var_7);
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_12))));
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_4) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5)))) * (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_13))))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) min((var_6), (var_5)))) ? (((var_2) | (var_15))) : (min((var_2), (var_10)))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15872)) ? (4816581597022270673ULL) : (14858529904427668899ULL)))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_15))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 13630162476687280941ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (var_9))) : (var_10)))));
}
