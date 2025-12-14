/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70970
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
    var_18 = ((/* implicit */unsigned long long int) ((var_10) >> (((/* implicit */int) ((((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) == (((/* implicit */int) var_16)))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)171)) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)108)) || (((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (761904933U))))))))));
    var_20 = ((/* implicit */signed char) ((long long int) 3576883093U));
    var_21 = ((/* implicit */unsigned int) var_17);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((signed char) (+(718084202U))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] [i_2] [i_1] [i_0] = 2495868460U;
                            var_23 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) (unsigned char)8))))) ? (((unsigned int) arr_10 [(unsigned char)19] [i_2] [(unsigned char)19])) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 718084203U))))))), (((((((/* implicit */unsigned long long int) var_10)) / (arr_7 [i_0] [i_2]))) * (((arr_8 [i_3] [i_2]) / (((/* implicit */unsigned long long int) var_7)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
