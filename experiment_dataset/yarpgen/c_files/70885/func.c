/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70885
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
    var_11 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_5), (var_5)))), (((((/* implicit */int) var_6)) % (((/* implicit */int) var_0))))))) && (((/* implicit */_Bool) var_7))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) (short)-3400)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    var_13 &= ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (9ULL))))) && (((/* implicit */_Bool) (unsigned char)244))));
                arr_4 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))), (min((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), (var_9))))))));
                arr_5 [i_1] = ((int) min((max((arr_3 [i_1]), (arr_2 [i_1] [i_1]))), (((/* implicit */int) var_1))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1]), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_3 [i_1])))))));
            }
        } 
    } 
}
