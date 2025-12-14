/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92974
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((arr_1 [i_0]), (max((var_0), (arr_1 [i_0])))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) (unsigned short)0)) ? (2147483647ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64221)))))));
                var_17 = ((/* implicit */unsigned int) (unsigned short)47063);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_4);
}
