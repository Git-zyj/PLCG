/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92611
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
    var_15 = min((((/* implicit */long long int) (short)-32751)), (var_6));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] |= max((var_5), (((/* implicit */long long int) (~(((/* implicit */int) ((10U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                var_16 *= ((/* implicit */_Bool) ((long long int) ((short) ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                arr_5 [(unsigned short)5] [(unsigned short)5] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) 3981680031U)))))), (min((((/* implicit */unsigned long long int) (~(1359141361U)))), (min((((/* implicit */unsigned long long int) var_2)), (var_10)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_2))))))));
    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)35))))))));
}
