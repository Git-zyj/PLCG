/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72953
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((var_0), (max((((arr_4 [8ULL]) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775775LL))) + (43LL))))), (var_0)))));
                    arr_8 [i_2] [8LL] [16ULL] [12] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_0 + 2]), (max((((/* implicit */unsigned long long int) var_9)), (arr_7 [i_0] [i_2] [(short)0])))))) ? (((/* implicit */unsigned long long int) min((9223372036854775789LL), ((-9223372036854775807LL - 1LL))))) : (arr_4 [i_1])));
                    var_15 = ((/* implicit */int) (-(9223372036854775807LL)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (var_4)));
}
