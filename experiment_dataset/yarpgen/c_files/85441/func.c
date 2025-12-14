/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85441
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
    var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -5996790292265742306LL)) ? (((((/* implicit */_Bool) 1LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-111)))) : (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) ((2841349917459301239LL) | (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (949449090726077412LL)));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_16 *= ((/* implicit */int) ((max((((((/* implicit */_Bool) var_12)) ? (3404532849U) : (3404532826U))), (((/* implicit */unsigned int) (signed char)-111)))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136)))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (+(((long long int) (signed char)-111))));
    }
    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) var_5)))) << (((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)20442)))))) - (45093)))));
    var_18 ^= ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3897020665U))))) << (((((var_3) + (2147483647))) >> (((((/* implicit */int) var_6)) + (15137)))))));
}
