/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83896
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
    var_15 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */signed char) (-(max((8602877894100005796LL), (((/* implicit */long long int) 4294967295U))))));
                var_16 = ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])))), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_1])), (var_10))))))));
            }
        } 
    } 
}
