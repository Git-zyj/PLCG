/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92628
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
    var_11 = ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_8)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned short)32736))));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_7))))) - (((/* implicit */int) ((((/* implicit */int) (signed char)19)) < (((/* implicit */int) (signed char)-1)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)55023))))) >= (min((((/* implicit */unsigned int) var_10)), (var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42233)) * (((/* implicit */int) var_3)))))));
    var_15 = ((/* implicit */unsigned char) (unsigned short)55031);
}
