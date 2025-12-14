/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87846
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
    var_20 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned int) (short)2919)), (937037914U))));
                var_21 = ((/* implicit */unsigned short) (short)32767);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) (short)-2920)))));
}
