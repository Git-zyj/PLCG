/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67461
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
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned int) 1932618098))))))))));
    var_17 = max((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) var_8)), (((18446744073709551615ULL) - (var_1))))));
    var_18 = ((/* implicit */_Bool) 3604664584U);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                arr_8 [1LL] [(signed char)5] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5474994939354114233ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17799))) : (5474994939354114241ULL)));
            }
        } 
    } 
}
