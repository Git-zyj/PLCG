/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91110
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                var_17 ^= ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (_Bool)1)), (0U)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) > (((2327270239U) % (2327270232U)))))) ^ (((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max(((unsigned short)22445), (((/* implicit */unsigned short) (unsigned char)20)))))))));
    var_20 += ((/* implicit */_Bool) 3962496073U);
}
