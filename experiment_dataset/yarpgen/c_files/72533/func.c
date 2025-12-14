/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72533
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
    var_18 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) var_7))))));
    var_19 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1 + 3] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_20 = min((((/* implicit */long long int) (signed char)-62)), (5803079609076518015LL));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned short) (-(min((((((/* implicit */int) (unsigned char)252)) / (((/* implicit */int) (unsigned short)28594)))), (((/* implicit */int) ((unsigned short) var_7)))))));
}
