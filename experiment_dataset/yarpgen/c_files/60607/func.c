/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60607
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [11U] [i_1] [i_1] = ((/* implicit */short) arr_0 [i_1] [i_1]);
                    arr_9 [i_0] [(_Bool)1] [i_1] [i_0 + 1] = ((/* implicit */int) min((((unsigned int) var_3)), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [i_1]))));
                }
            } 
        } 
    } 
}
