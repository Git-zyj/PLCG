/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76630
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_19 = arr_0 [i_2];
                            var_20 = ((/* implicit */short) (unsigned short)49215);
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_18)) + (var_11))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (var_2)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) (+(max((min((arr_4 [i_0]), (((/* implicit */unsigned int) 0)))), (((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned short) arr_1 [5U])))))))));
                var_23 = ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32308)) * (((/* implicit */int) (short)-8228))))) + (arr_9 [i_1] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_17)) ? (var_5) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) (((-(((var_4) / (var_0))))) + (((/* implicit */unsigned int) (-((-(var_5))))))));
    var_25 = ((/* implicit */unsigned long long int) var_2);
}
