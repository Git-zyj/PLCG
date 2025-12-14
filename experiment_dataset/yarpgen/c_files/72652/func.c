/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72652
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0 + 1] [i_0 + 1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */int) (signed char)3)) >> (((max((((/* implicit */unsigned long long int) 3228371998U)), (0ULL))) - (3228371983ULL)))));
                var_14 += ((/* implicit */long long int) (+(((/* implicit */int) min((((((/* implicit */_Bool) var_13)) || (arr_3 [i_0] [4LL]))), (max((arr_0 [i_1] [i_0]), (arr_3 [i_1] [i_1]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (((max((((/* implicit */unsigned long long int) var_2)), (var_8))) >> (((((((/* implicit */_Bool) var_12)) ? (var_13) : (var_6))) - (7355355312358120188ULL)))))));
}
