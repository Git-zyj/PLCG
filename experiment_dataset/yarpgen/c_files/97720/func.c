/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97720
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(unsigned short)5] = ((/* implicit */unsigned short) ((_Bool) min((((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))), (((/* implicit */unsigned long long int) ((var_15) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))))))));
                var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (max((0ULL), (((/* implicit */unsigned long long int) (short)-23422)))) : (((((/* implicit */_Bool) var_12)) ? (4507340962353437291ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))));
                var_20 = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) + (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_12)) : (var_11))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 528482304U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)12965)))))));
}
