/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59991
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (!(var_19)));
                var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)205), ((unsigned char)199)))) ? (-7847553637607122410LL) : (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) || (var_16))), ((_Bool)0)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (+((~(((/* implicit */int) var_19))))));
}
