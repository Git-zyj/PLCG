/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98730
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 |= ((/* implicit */long long int) ((unsigned long long int) max((var_4), (((/* implicit */unsigned int) arr_1 [i_0 + 1])))));
                arr_5 [i_0] [7LL] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((short) arr_4 [i_1] [i_1] [i_0])));
            }
        } 
    } 
    var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) var_5)), ((-(18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) var_19))));
    var_22 |= ((/* implicit */signed char) max((((((/* implicit */int) ((((/* implicit */int) (short)-22729)) >= ((-2147483647 - 1))))) + (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (_Bool)1)))))))));
    var_23 = max((var_18), (((/* implicit */unsigned int) (~((~(var_1)))))));
}
