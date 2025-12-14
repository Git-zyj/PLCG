/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9084
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_11))))));
                var_20 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) % (-305167485))) % (var_10)))), ((~(((((/* implicit */_Bool) (unsigned char)56)) ? (9326933750284091165ULL) : (((/* implicit */unsigned long long int) 2971016441U))))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */int) min(((signed char)31), (var_17)))), (var_10))) - (((/* implicit */int) (signed char)31))));
}
