/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61031
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
    var_16 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) (+(((((_Bool) (short)16256)) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_1])) : ((+(((/* implicit */int) (signed char)-1))))))));
                arr_6 [i_0] [i_0] = var_3;
                arr_7 [i_0] = ((/* implicit */signed char) 2097151U);
            }
        } 
    } 
}
