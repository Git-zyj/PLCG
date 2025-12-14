/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87172
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
    var_13 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551607ULL)) || (((/* implicit */_Bool) var_11))))) : (((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((751811157) - (751811157))))))))));
                var_15 = max((((((/* implicit */_Bool) var_7)) ? ((+(9154833747291113412ULL))) : (((/* implicit */unsigned long long int) (+(arr_3 [i_0] [i_0])))))), (arr_1 [i_0]));
            }
        } 
    } 
}
