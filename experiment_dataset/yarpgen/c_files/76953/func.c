/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76953
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                var_10 = ((unsigned long long int) ((((/* implicit */unsigned long long int) 304993899)) < (arr_5 [i_1 - 4])));
                var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) != (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_8) : (arr_2 [i_1])))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_8)))), (((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6ULL)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) (_Bool)1);
    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_4)), (var_1)));
    var_14 = ((/* implicit */int) ((9223372036854775795LL) < (min((5482167896933067941LL), (var_2)))));
}
