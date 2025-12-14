/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95790
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) == (((((/* implicit */unsigned int) ((int) arr_2 [i_0] [i_0]))) - (max((var_3), (((/* implicit */unsigned int) (unsigned char)239))))))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((int) 9223372036854775807LL)))));
        var_14 = (-(arr_3 [i_0]));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 402653184U))));
        arr_9 [i_1] = ((/* implicit */short) (unsigned char)238);
        var_16 |= ((((((/* implicit */_Bool) (unsigned char)248)) ? (arr_7 [i_1] [i_1]) : (((/* implicit */int) (signed char)127)))) - (((/* implicit */int) var_11)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */short) (-((+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)7409)) : (((/* implicit */int) (short)-13804))))))));
        var_17 += max(((+(-9223372036854775797LL))), (((/* implicit */long long int) ((unsigned int) 4123115595U))));
    }
    var_18 = ((/* implicit */signed char) max((67108864U), (((/* implicit */unsigned int) (signed char)36))));
    var_19 = ((/* implicit */int) ((unsigned char) (((_Bool)0) ? (-182715987) : (((/* implicit */int) (unsigned short)23666)))));
}
