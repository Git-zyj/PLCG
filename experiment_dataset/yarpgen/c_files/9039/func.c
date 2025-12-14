/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9039
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
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((var_2), (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)13)) - (((/* implicit */int) arr_1 [i_1])))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                arr_5 [i_0 - 1] [(signed char)12] &= ((short) min((var_4), (((/* implicit */short) arr_3 [i_0 + 1]))));
                var_17 = ((/* implicit */signed char) min(((short)-24713), (((/* implicit */short) (signed char)-14))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (18ULL)));
    var_19 = ((/* implicit */unsigned long long int) var_7);
}
