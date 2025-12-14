/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66480
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((var_11), (arr_3 [i_0])))) * (((((/* implicit */int) var_2)) - (((/* implicit */int) var_4)))))) & (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4)))) || (((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-27613)), (var_15)))) && (((/* implicit */_Bool) max((var_19), ((short)-20294)))))))) < (min((((arr_5 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20286)) / (((/* implicit */int) arr_2 [i_0] [i_1])))))))));
                arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) var_11)))) - (((/* implicit */int) var_0))))) / (-4930610462589439770LL)));
                var_22 = ((/* implicit */unsigned char) ((max((((((/* implicit */int) (short)-14309)) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) ((short) -5880115869893764807LL))))) >= (((/* implicit */int) var_14))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_0);
}
