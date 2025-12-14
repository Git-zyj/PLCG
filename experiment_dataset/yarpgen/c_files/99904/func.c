/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99904
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
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_0)) - (((/* implicit */int) var_11)))) * (((/* implicit */int) ((unsigned char) var_13))))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)98)) | (((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))))));
    var_18 = ((/* implicit */unsigned char) ((unsigned int) min((var_5), ((-(var_5))))));
    var_19 += ((/* implicit */unsigned int) ((max((((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)15)), (var_14)))), ((-(var_10))))) | (((/* implicit */long long int) var_5))));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_12)) + (32))))))))), (var_15))))));
}
