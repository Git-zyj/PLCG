/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9017
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
    var_10 = min((((/* implicit */unsigned short) ((((/* implicit */int) var_8)) == ((+(((/* implicit */int) var_2))))))), (var_1));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (signed char)76);
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) 9223372036854775807LL))));
            }
        } 
    } 
}
