/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95916
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */unsigned int) (unsigned short)1023);
                var_20 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_13)) - (((/* implicit */int) var_2))))));
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_17))));
    var_24 = ((/* implicit */unsigned char) ((signed char) (short)22072));
}
