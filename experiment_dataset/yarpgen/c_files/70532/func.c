/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70532
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
    var_18 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))) * (((((/* implicit */int) arr_1 [i_1 - 2])) & (((/* implicit */int) arr_1 [i_0 + 1])))))))));
                arr_4 [(_Bool)1] [i_0 + 1] [i_1] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((arr_2 [i_0] [i_0] [i_1]) & (arr_2 [i_0 - 1] [3ULL] [i_0 - 1])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4280))) : (-5921544422180684951LL))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1])) : (770776283828785793LL))))), (((/* implicit */long long int) (short)-32763))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (((+(((unsigned long long int) var_14)))) != (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((var_6) ? (var_8) : (var_3))))))));
}
