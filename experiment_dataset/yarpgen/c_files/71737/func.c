/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71737
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */_Bool) var_10);
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)40910))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)5)))) - (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38363)) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_1)))))));
    var_18 -= ((/* implicit */unsigned int) var_8);
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 2752447011U)) : (var_2)))) ? (var_3) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)(-32767 - 1))), (839898658U)))));
}
