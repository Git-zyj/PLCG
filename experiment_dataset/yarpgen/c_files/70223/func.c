/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70223
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
    var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((2147483647) & (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_15 ^= (signed char)-60;
    }
    for (signed char i_1 = 4; i_1 < 18; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (signed char)17)) : (((((/* implicit */int) (signed char)127)) % (2147483647)))));
        arr_6 [i_1] [i_1 - 4] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)-120)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((9667293467180982875ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21799)))))) && (((/* implicit */_Bool) 7196923521981199315ULL)))))));
    }
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) == (((2147483647) + (((/* implicit */int) (signed char)-120)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) - (((((/* implicit */_Bool) (unsigned short)2134)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))))))) : (((((/* implicit */_Bool) -2066215348)) ? (2242532459U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22032)))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_13))));
}
