/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97364
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */_Bool) max((max((0ULL), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_1 - 1])))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 2964887545637976738ULL)) ? (arr_3 [i_1 - 1]) : (1792339729))))))));
                var_12 = ((/* implicit */long long int) arr_2 [i_1] [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_9);
}
