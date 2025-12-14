/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58996
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_8)) ? (16579993761629214023ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))) ? (var_10) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (2400869341U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44920))) : (((((/* implicit */_Bool) 1866750312080337578ULL)) ? (16579993761629214007ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 -= ((/* implicit */unsigned char) var_2);
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1838842315U)) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_1])))))))));
            }
        } 
    } 
}
