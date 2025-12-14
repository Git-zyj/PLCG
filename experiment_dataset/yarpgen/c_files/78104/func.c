/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78104
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
    for (int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_1] = -4333990423214530129LL;
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) min((16702533677017587250ULL), (((/* implicit */unsigned long long int) (signed char)-121)))))) ? (((min((16702533677017587250ULL), (((/* implicit */unsigned long long int) 5384930548606714360LL)))) | ((~(12679443019405235402ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) min((5ULL), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)84)) + (((/* implicit */int) arr_1 [i_0] [10ULL]))))) ^ (((arr_3 [i_0] [i_1] [i_1]) * (arr_3 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    var_10 = ((/* implicit */long long int) var_8);
}
