/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65655
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)0)), (0ULL)))) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)224))))))));
    var_13 = ((_Bool) max((((/* implicit */signed char) ((8522793358675889695ULL) == (18446744073709551615ULL)))), (((signed char) (signed char)24))));
    var_14 ^= ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)42838)) - (((/* implicit */int) (unsigned short)0)))), (((((/* implicit */_Bool) max((13406964796422998519ULL), (arr_3 [i_0])))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_0)))))))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */long long int) var_5)), (var_11))))));
            }
        } 
    } 
}
