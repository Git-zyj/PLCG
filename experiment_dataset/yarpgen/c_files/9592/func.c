/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9592
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
    var_20 += ((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) ((((/* implicit */int) var_12)) > (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))) : ((~(((/* implicit */int) ((short) var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((signed char)-26), (((/* implicit */signed char) arr_2 [i_1 + 1]))))) ? (max((((/* implicit */unsigned long long int) ((arr_2 [i_1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) (unsigned char)43)) ? (9993125813883422166ULL) : (var_18))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_7)) : (var_2))) : (((/* implicit */unsigned long long int) ((unsigned int) var_13)))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((short) ((arr_2 [i_1]) ? (min((var_18), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((8417180970879200274ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32)))))))))))));
            }
        } 
    } 
}
