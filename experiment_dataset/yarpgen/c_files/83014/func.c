/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83014
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
    var_20 |= ((/* implicit */short) ((var_17) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (signed char)76))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))))));
    var_21 = ((/* implicit */int) var_12);
    var_22 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_15))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_23 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 1125899906826240ULL)) ? (1885998254U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            var_24 = ((/* implicit */short) var_3);
            var_25 ^= ((/* implicit */signed char) (_Bool)1);
            var_26 = ((/* implicit */unsigned long long int) (~((~(arr_3 [i_0 + 2] [i_1] [i_0 + 2])))));
        }
        var_27 *= ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_4 [13] [i_0])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_4 [i_0] [i_0 - 1]))))))));
        var_28 = var_1;
    }
}
