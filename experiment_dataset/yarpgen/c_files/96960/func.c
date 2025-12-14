/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96960
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
    var_11 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 3234647627U)) : (2101537745584292312ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_0)), (var_6))))) : (6U))));
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 15986582810184014757ULL))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-2))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) min((arr_3 [(_Bool)1] [(_Bool)1] [i_1]), (var_6)))), (((((/* implicit */unsigned long long int) var_9)) & (18446744073709551600ULL))))) < (max((min((72048797944905728ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0] [i_1])))))));
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_5))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned short)65535))));
            }
        } 
    } 
}
