/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60467
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
    var_15 += ((/* implicit */long long int) (signed char)-15);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)32762)), (((unsigned long long int) var_8))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 5ULL))))) % (((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) arr_3 [15ULL]))));
                var_17 ^= ((/* implicit */unsigned int) 4794144335898114197ULL);
                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-29))))) ? (((arr_4 [i_1] [i_0] [i_0]) % (6343241463109640018ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_2)))))))))));
            }
        } 
    } 
}
