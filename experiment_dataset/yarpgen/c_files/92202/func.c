/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92202
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
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) (((-(1177906737U))) | (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))))));
                arr_5 [i_0] [i_0] [(signed char)2] = ((/* implicit */long long int) (short)11671);
            }
        } 
    } 
    var_13 *= ((/* implicit */unsigned char) var_3);
    var_14 = ((/* implicit */short) ((signed char) ((unsigned short) (unsigned short)18913)));
    var_15 = ((/* implicit */unsigned short) ((-138709040444805553LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38494)))));
}
