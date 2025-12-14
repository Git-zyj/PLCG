/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85918
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
    var_18 = ((/* implicit */_Bool) var_1);
    var_19 = ((/* implicit */_Bool) ((min((((var_8) / (((/* implicit */int) var_0)))), (var_8))) | (((/* implicit */int) max((var_7), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 3] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2])) + (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))), (((/* implicit */int) min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 - 3] [i_0 + 1])))))))));
                var_21 ^= ((arr_4 [i_1] [(short)12] [i_1]) * (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) * (((/* implicit */int) max((var_5), (arr_0 [i_0 - 3] [i_0 - 3])))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7)) + (((/* implicit */int) (_Bool)1))))) ? ((+(arr_4 [i_0] [i_0] [i_0 + 1]))) : (((/* implicit */int) arr_1 [i_1]))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))) + (((/* implicit */long long int) ((/* implicit */int) var_1)))))), ((+(var_3)))));
    var_24 = ((/* implicit */_Bool) min((((((/* implicit */int) var_1)) & ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1))));
}
