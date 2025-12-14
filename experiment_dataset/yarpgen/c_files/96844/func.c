/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96844
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
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1 + 3] [i_1 - 2] &= ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) (unsigned char)237)))));
                var_14 = (-(((/* implicit */int) ((unsigned char) (unsigned char)18))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)147)), (var_1)));
    var_16 = ((/* implicit */long long int) var_9);
    var_17 = ((/* implicit */int) var_0);
    var_18 = var_0;
}
