/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63416
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8388608U))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (((-((+(((/* implicit */int) var_8)))))) >> ((((+((~(((/* implicit */int) var_8)))))) - (7346)))));
                var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)38792)) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)26743)) || (((/* implicit */_Bool) (short)10735)))))));
                var_18 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)26743)) ? (((/* implicit */int) (unsigned short)38792)) : (((/* implicit */int) (unsigned short)38792))))));
            }
        } 
    } 
}
