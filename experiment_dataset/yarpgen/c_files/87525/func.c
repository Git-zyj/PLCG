/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87525
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
    var_15 = ((/* implicit */signed char) (~(var_2)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)-15135))))));
                arr_7 [i_0] = ((/* implicit */long long int) max((min((var_7), (((/* implicit */unsigned long long int) (signed char)75)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_7))) / (((/* implicit */int) (unsigned short)22511)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
}
