/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92480
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((var_4) / (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (var_10)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)47845)))))))));
    var_17 = ((/* implicit */signed char) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((unsigned long long int) var_15))));
    var_19 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_0] [i_1])), ((unsigned short)47845))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) max((((arr_7 [i_0] [i_1] [i_1] [i_2 - 2]) % (arr_7 [i_0] [i_0] [i_2] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_1 [i_2] [i_1])), (arr_7 [i_0] [i_1] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
}
