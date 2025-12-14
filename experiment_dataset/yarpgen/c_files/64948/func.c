/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64948
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((min((((/* implicit */long long int) 115434632U)), (((var_1) >> (((((/* implicit */int) var_11)) + (19030))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -131072LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15360)))))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 |= var_7;
        var_18 ^= ((/* implicit */unsigned long long int) var_2);
        arr_3 [i_0] = ((/* implicit */short) var_12);
    }
}
