/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59014
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_12 = min((((-761474868) <= (((/* implicit */int) (signed char)-104)))), (((((/* implicit */_Bool) ((var_5) * (var_5)))) && (((/* implicit */_Bool) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 6; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) max((min(((~(var_5))), (((/* implicit */unsigned long long int) ((var_10) & (var_10)))))), (max((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) var_11))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (var_0)))))));
                        arr_13 [i_0] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((min((var_3), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (+(var_10))))))), (min((((/* implicit */unsigned long long int) (~(var_1)))), (min((var_0), (var_5)))))));
                        arr_14 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_3)), (((var_5) << (((var_0) - (14688944413050030530ULL))))))) * (min((min((((/* implicit */unsigned long long int) var_4)), (var_8))), (min((((/* implicit */unsigned long long int) var_3)), (var_0)))))));
                    }
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_8))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3))))), (min((((/* implicit */long long int) (unsigned char)246)), (9223372036854775807LL))))), (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
}
