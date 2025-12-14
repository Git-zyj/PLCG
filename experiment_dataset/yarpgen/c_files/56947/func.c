/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56947
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
    var_14 |= (-(-716543027));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) 616705430U)))))));
                var_15 = var_2;
                var_16 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) + (18446744073709551615ULL)))) ? (((/* implicit */int) min((arr_2 [16] [16]), (((/* implicit */signed char) arr_0 [i_0]))))) : (((/* implicit */int) arr_0 [i_0 + 2])))), ((-((+(((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
}
