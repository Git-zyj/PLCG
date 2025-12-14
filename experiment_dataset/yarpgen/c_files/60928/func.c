/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60928
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
    var_20 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((short) max((arr_1 [i_0]), (arr_1 [i_0]))));
                arr_4 [i_0] [i_0] [i_0] = min((((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0]))), (max((arr_0 [i_0]), (arr_0 [i_1]))));
            }
        } 
    } 
}
