/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73030
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
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [11LL] [11LL] = ((/* implicit */short) (-(((unsigned long long int) var_10))));
                var_16 = ((/* implicit */int) var_3);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (+((-9223372036854775807LL - 1LL))));
    var_18 = ((/* implicit */unsigned long long int) min(((-(var_2))), (((((/* implicit */_Bool) max((-2735204106407502720LL), (var_2)))) ? (((-2735204106407502711LL) + (2735204106407502698LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    var_19 ^= ((/* implicit */_Bool) var_6);
}
