/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95279
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
    var_13 = ((/* implicit */unsigned short) min((((_Bool) (+(((/* implicit */int) var_12))))), (((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (var_5))))));
    var_14 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) max((var_7), (var_6)))))), (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? ((~(((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)4094)) : (((/* implicit */int) (unsigned short)39638)))))))));
}
