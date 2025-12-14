/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57974
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5))))), (((min((var_10), (((/* implicit */unsigned long long int) arr_3 [i_1])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_1])), (var_1)))))))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))) : (((min((var_8), (((/* implicit */unsigned long long int) arr_0 [i_1])))) * (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11))))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4770890766745229894ULL)))))) : (min((var_4), (var_4))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned long long int) var_5))))) ? (((var_5) / (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) var_2)) ? (var_10) : ((+(var_2))))))))));
}
