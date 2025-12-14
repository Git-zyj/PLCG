/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90520
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [8ULL])) ? (max((((((/* implicit */_Bool) var_9)) ? (11231941436685774306ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_1 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_16), (var_4)))))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_16)) & (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) * (min((((/* implicit */int) var_7)), ((-(var_0)))))));
}
