/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93788
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
    var_20 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */long long int) ((unsigned char) (_Bool)0))), (var_19))));
    var_21 = ((/* implicit */unsigned char) var_11);
    var_22 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_23 &= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) (_Bool)1)));
                arr_6 [i_0] [i_0] [8ULL] = ((/* implicit */unsigned long long int) ((_Bool) ((signed char) arr_1 [i_1])));
                var_24 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) var_17))))));
            }
        } 
    } 
}
