/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62589
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
    var_14 = ((/* implicit */unsigned long long int) (signed char)-43);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26561)) ? (min((7U), (var_5))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1)))))))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)2764))) + (var_8)))) ? (((int) var_10)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))))));
                var_16 -= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)24648))));
                arr_7 [i_0] = var_2;
            }
        } 
    } 
}
