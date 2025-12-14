/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70752
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
    var_10 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) (unsigned char)253)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) / (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (65534) : (1359395002))))));
                var_12 *= ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                var_13 = ((/* implicit */_Bool) var_1);
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? ((+(-1359395003))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_5)) : (((var_2) ? (-1359394988) : (((/* implicit */int) arr_2 [i_1]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((signed char) (signed char)42))), (max((var_5), (((/* implicit */unsigned short) var_0))))))) ? (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) var_2)) : ((-(1359395011))))) : (min((((/* implicit */int) var_0)), (((int) var_8))))));
}
