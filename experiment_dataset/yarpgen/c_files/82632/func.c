/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82632
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
    var_13 = ((/* implicit */long long int) min((var_13), (var_0)));
    var_14 = ((/* implicit */short) ((var_4) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (860550230534524883LL))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_11)) : (min((((/* implicit */long long int) var_5)), (var_8)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)127))))), (var_2)))) & (((((/* implicit */_Bool) (short)-25049)) ? (min((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_2])), (var_10))) : (((/* implicit */long long int) min((2113929216U), (((/* implicit */unsigned int) (short)9549)))))))));
                    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_2])) && (((/* implicit */_Bool) max(((short)-13188), (((/* implicit */short) arr_1 [i_0]))))))) ? (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) : (((/* implicit */int) (short)-17894))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_0), (((/* implicit */long long int) (signed char)-114))));
    var_18 = ((/* implicit */unsigned short) (signed char)-89);
}
