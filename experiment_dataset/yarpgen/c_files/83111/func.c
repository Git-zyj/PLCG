/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83111
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
    var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_13)), (16777215U)))))) || (((/* implicit */_Bool) (~(18446744073709551615ULL))))));
    var_15 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) -2))));
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((-3833353709359051407LL) % (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) max((var_5), (((/* implicit */signed char) var_9)))))))) % ((~(var_0)))));
}
