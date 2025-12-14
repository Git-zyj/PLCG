/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61122
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((1127700078117211511ULL) / (9176628460046330390ULL))))));
                var_19 += ((/* implicit */unsigned char) arr_0 [i_0] [12ULL]);
            }
        } 
    } 
    var_20 -= ((/* implicit */int) min((var_16), (((/* implicit */unsigned long long int) (~(var_14))))));
    var_21 -= ((/* implicit */long long int) (+((((~(var_8))) & ((~(var_10)))))));
}
