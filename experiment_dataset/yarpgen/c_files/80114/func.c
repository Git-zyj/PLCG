/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80114
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_10 = var_1;
                var_11 = ((/* implicit */long long int) arr_1 [i_1]);
                arr_5 [i_0] [i_0] [i_1] = (short)32751;
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_0);
    var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7)))) ? ((~(var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)18077)) ? (var_3) : (((/* implicit */int) var_8))))))), (7924474624486531606LL)));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) min(((+(((/* implicit */int) (short)-30960)))), (((/* implicit */int) var_8)))))));
}
