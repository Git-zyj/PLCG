/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7203
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (_Bool)1))));
    var_13 = ((/* implicit */short) (((_Bool)1) ? (min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)20258))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) (unsigned short)64299);
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
}
