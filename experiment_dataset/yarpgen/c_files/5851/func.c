/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5851
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
    var_20 = var_17;
    var_21 = ((/* implicit */signed char) max(((+(((((/* implicit */int) (unsigned short)511)) ^ (((/* implicit */int) (unsigned char)0)))))), (((/* implicit */int) var_17))));
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_3)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))), (((/* implicit */int) ((short) 3875742952U))))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(var_8))), (((/* implicit */unsigned int) ((var_16) != (((/* implicit */unsigned long long int) 2147483647)))))))) ? (((min((((/* implicit */long long int) 4294967281U)), (var_11))) << (((/* implicit */int) ((4294967281U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_8)))) ? (((31U) ^ (23U))) : (((unsigned int) var_1)))))));
    var_24 ^= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (4294967274U)))))))));
}
