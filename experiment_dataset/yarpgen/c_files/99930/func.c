/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99930
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_11)))))) ? (((((var_7) + (9223372036854775807LL))) << (((min((var_10), (((/* implicit */unsigned int) var_4)))) - (1437596689U))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (var_14))))) - (min((((/* implicit */unsigned int) var_12)), (var_9))))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_9))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0] [i_0]))) == (((/* implicit */int) ((signed char) arr_3 [i_0]))))))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [10LL] [10LL] [i_1])), (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (((arr_3 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
