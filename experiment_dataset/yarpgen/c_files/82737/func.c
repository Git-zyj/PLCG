/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82737
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
    var_19 = ((/* implicit */int) max((((/* implicit */long long int) (short)15823)), (0LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 |= ((/* implicit */short) ((arr_2 [i_0] [i_0]) + (0LL)));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1984553225U)) ? (0LL) : (-1LL))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_23 |= ((/* implicit */_Bool) min((((((arr_0 [i_1] [i_1]) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
        var_24 = ((/* implicit */int) max((var_24), (min(((~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_1] [i_1])))))), ((+(((/* implicit */int) arr_1 [i_1]))))))));
    }
    var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((long long int) -1LL))) : (((2ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
    var_27 -= ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
}
