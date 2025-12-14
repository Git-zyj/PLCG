/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80566
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
    var_15 += ((/* implicit */unsigned char) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (short)11097))))))));
    var_16 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-85))))))))));
    var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), ((((_Bool)1) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned char)255))))))) ? ((+(536870911LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)11097)))));
    var_18 = var_14;
}
