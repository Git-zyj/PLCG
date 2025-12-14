/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71980
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((arr_3 [i_0 + 2] [i_0 - 1] [i_1 - 3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) >= (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_8))))))))));
                arr_6 [i_1 - 3] [i_1] = ((/* implicit */long long int) var_8);
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned long long int) ((signed char) var_6));
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (signed char)-21))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-42)) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1860593300937496821LL)) : (var_9))), ((-(4ULL))))) : (((/* implicit */unsigned long long int) var_3))));
}
