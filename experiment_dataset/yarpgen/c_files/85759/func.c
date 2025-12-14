/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85759
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
    var_15 = ((/* implicit */short) var_8);
    var_16 = var_0;
    var_17 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_14)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (0ULL))) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)257)) == (((/* implicit */int) var_7))))) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-127))))))))));
                var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-257)) ^ (((/* implicit */int) (short)-18041))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30393))) : (-1LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-23369)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)104)))))));
            }
        } 
    } 
}
