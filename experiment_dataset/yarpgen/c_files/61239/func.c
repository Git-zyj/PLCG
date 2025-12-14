/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61239
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
    var_18 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (0LL)));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (unsigned short)25116)))) : (var_2)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (4611686018426339328ULL)));
}
