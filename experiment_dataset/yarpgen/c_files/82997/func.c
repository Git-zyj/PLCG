/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82997
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
    var_20 = ((/* implicit */unsigned char) var_2);
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((max((max((((/* implicit */unsigned int) var_0)), (var_1))), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) var_18)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)20)), ((unsigned char)183)));
                arr_7 [i_0] [i_0] [i_0 - 1] = ((/* implicit */_Bool) max((((/* implicit */short) (signed char)54)), ((short)2433)));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_5))));
    var_23 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)54)), (1923465441U)))), (var_8))), (((/* implicit */unsigned long long int) max((min((var_1), (var_7))), (((/* implicit */unsigned int) max(((unsigned char)16), (((/* implicit */unsigned char) (signed char)54))))))))));
}
