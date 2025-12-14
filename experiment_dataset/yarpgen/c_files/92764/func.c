/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92764
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((var_11) == (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_6)))))))), (4294967295U)));
    var_17 ^= ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) var_6)))));
    var_18 = ((/* implicit */unsigned short) ((((unsigned long long int) var_15)) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((short) (signed char)0));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0])), (0U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))))) : ((~(-526240738311590657LL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(0U)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1]))));
        arr_7 [i_1] = ((/* implicit */signed char) (short)2047);
    }
}
