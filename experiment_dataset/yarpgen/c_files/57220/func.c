/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57220
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] &= ((/* implicit */signed char) (~((~(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [14ULL] [14ULL])) ? (var_9) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [(signed char)15] [i_1] [(signed char)10])), (var_4)))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1])), (var_14))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0 + 2]) < (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_18))));
}
