/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69144
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (min((((/* implicit */unsigned int) (unsigned short)45081)), (var_10))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((unsigned long long int) (short)32767)))) ? ((((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [17U] [i_0]))) : ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((((/* implicit */int) ((signed char) (unsigned char)232))) & (arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = max((((((((min((((/* implicit */long long int) 4294967295U)), ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((4294967289U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157)))))))), (((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_0)))) / ((-9223372036854775807LL - 1LL)))));
    }
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) max((888978233U), (13U))))), (var_9)));
}
