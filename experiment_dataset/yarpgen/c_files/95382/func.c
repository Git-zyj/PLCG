/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95382
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [1])) ? (0) : (((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0]))));
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */short) (_Bool)0)), (arr_1 [i_1])))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */int) var_7);
}
