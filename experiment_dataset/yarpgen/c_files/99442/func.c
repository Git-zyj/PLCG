/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99442
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)48112))))))))));
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_1)), (33554432U)));
}
