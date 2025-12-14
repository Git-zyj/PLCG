/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95950
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (unsigned short)62958))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_1]))))) || (((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 14081356142200170522ULL))))));
                var_15 = var_11;
            }
        } 
    } 
}
