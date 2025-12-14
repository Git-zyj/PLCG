/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63088
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
    var_14 = ((/* implicit */unsigned int) ((unsigned long long int) ((((0ULL) << (((var_6) - (1692587845U))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) > (var_8))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(min((197536710U), (67108832U)))))) == (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) 3489079673U))))));
                arr_7 [i_1 - 1] [i_1] = ((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) 1073739776U)))) ? (max((arr_5 [i_1 - 1] [i_0]), (arr_0 [i_1] [i_1 - 2]))) : (min((10488523034938979161ULL), (arr_1 [4ULL] [5U])))))));
            }
        } 
    } 
}
