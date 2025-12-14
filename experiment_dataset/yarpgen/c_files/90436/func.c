/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90436
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 *= var_14;
                arr_6 [i_0] = ((/* implicit */unsigned char) ((unsigned short) (+(((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (short)16320)))) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */int) var_2)) != (((/* implicit */int) var_16)))) && (((/* implicit */_Bool) var_18)))))));
    var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (((((/* implicit */_Bool) min((var_5), (var_14)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (max((var_11), (((/* implicit */unsigned long long int) var_17))))))));
}
