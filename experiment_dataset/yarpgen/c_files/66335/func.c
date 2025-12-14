/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66335
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
    var_17 |= ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */short) max(((_Bool)1), ((_Bool)1)))), (var_12)))), (((((var_0) - (((/* implicit */long long int) var_1)))) ^ (((/* implicit */long long int) min((((/* implicit */int) (short)-13331)), (var_1))))))));
    var_18 |= ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (var_6)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [0U] [0U] [0U] |= ((/* implicit */int) ((arr_0 [i_0 - 2] [i_0 - 1]) != (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) max((var_14), (var_15)))))))));
                var_19 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0])))) - (((arr_1 [(unsigned char)10] [i_0]) ? (3463531649U) : (((/* implicit */unsigned int) var_1))))))) + (min(((-(arr_4 [i_1 - 1] [i_0]))), (((/* implicit */long long int) ((int) arr_0 [i_1 - 2] [i_1 - 2])))))));
            }
        } 
    } 
    var_20 = max((var_7), (((/* implicit */unsigned char) var_3)));
}
