/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61136
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
    var_15 = ((/* implicit */signed char) max((max((((/* implicit */int) var_3)), (max((((/* implicit */int) var_5)), (var_11))))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (signed char)-35))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_2)))))))));
    var_16 = ((/* implicit */unsigned long long int) (signed char)-61);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((signed char) (signed char)-57))) ? (((/* implicit */unsigned long long int) ((var_11) ^ (((/* implicit */int) arr_1 [i_1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))) ^ (10182238238004967693ULL))))));
                arr_5 [i_0] [(signed char)11] = ((/* implicit */signed char) var_4);
                var_17 = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
                arr_6 [15] = (+(408959668));
            }
        } 
    } 
}
