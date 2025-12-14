/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93498
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
    var_18 = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)66))))), (((((/* implicit */_Bool) (signed char)-66)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38)))))))));
    var_19 = var_2;
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) (((+(var_13))) << (((var_5) + (2147313978)))));
        var_21 = ((/* implicit */signed char) min((var_21), (((signed char) (signed char)66))));
    }
}
