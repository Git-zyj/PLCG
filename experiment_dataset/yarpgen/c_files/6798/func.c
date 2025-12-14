/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6798
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */signed char) (((_Bool)1) && (((var_6) && (var_11)))));
                var_19 = ((17826811616082926826ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((_Bool) var_2));
}
