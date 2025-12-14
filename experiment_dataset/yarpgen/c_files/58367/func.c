/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58367
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 7; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [(signed char)7] = ((/* implicit */unsigned short) max((var_13), ((short)-1)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (~(max((arr_7 [i_0] [9]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_3] [i_0] [i_0])))))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((_Bool) (_Bool)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / ((+(((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) var_0)) / (var_4))))) : (1468876283)));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-((~(min((((/* implicit */unsigned long long int) 1468876287)), (0ULL))))))))));
}
