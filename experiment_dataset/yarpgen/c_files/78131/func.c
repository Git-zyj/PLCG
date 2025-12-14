/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78131
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? (((arr_1 [i_0 - 1]) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1])) == (((/* implicit */int) arr_2 [i_0 - 1])))))));
                arr_5 [(signed char)10] [(signed char)10] [i_0 + 2] = arr_3 [6LL] [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */int) (+((((_Bool)1) ? (((/* implicit */unsigned long long int) 6607796934760511776LL)) : (0ULL)))));
    var_22 = ((/* implicit */signed char) var_3);
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_8)))) - (((var_5) - ((-(((/* implicit */int) var_15))))))));
}
