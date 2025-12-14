/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92564
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
    var_16 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) max(((short)14), (((/* implicit */short) var_11))))), (var_2)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_1])), (((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11461)))))))));
                var_18 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1]))) % (var_12))), (((/* implicit */unsigned long long int) var_11)));
            }
        } 
    } 
    var_19 = var_9;
    var_20 += min((var_4), (var_11));
    var_21 = var_2;
}
