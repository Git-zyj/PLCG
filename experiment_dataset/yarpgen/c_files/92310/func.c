/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92310
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
    var_17 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = (+(var_5));
                var_18 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) arr_0 [i_1])), (arr_2 [i_0] [i_1])))));
            }
        } 
    } 
}
