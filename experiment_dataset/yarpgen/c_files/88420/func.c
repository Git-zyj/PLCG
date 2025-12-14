/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88420
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) - ((+(((/* implicit */int) (unsigned short)59223))))));
                var_12 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6614)) ? (((/* implicit */int) (short)6613)) : (((/* implicit */int) (unsigned short)59223)))))));
            }
        } 
    } 
    var_13 = ((((/* implicit */_Bool) max((-180677450), ((+(((/* implicit */int) (unsigned short)59223))))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
}
