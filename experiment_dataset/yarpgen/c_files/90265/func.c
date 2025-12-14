/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90265
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
    var_18 ^= ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (~(2929971650U)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56728))) : (268435200LL))))), (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))))))));
    var_19 |= ((/* implicit */unsigned char) (-(var_6)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0 - 2] = ((unsigned short) arr_0 [i_0 - 1]);
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_14) : (((/* implicit */int) arr_0 [i_0 + 1]))));
    }
    var_21 = ((/* implicit */short) var_8);
    var_22 ^= ((/* implicit */signed char) min(((short)32761), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)20)), (var_5)))))))));
}
