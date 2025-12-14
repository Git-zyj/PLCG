/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59555
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0]) & (((/* implicit */unsigned long long int) 3018000834U))))) ? (((/* implicit */long long int) ((1553434768) | (((/* implicit */int) (unsigned short)22931))))) : (var_8)));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((arr_3 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))))))) / (max(((-(((/* implicit */int) arr_1 [i_0])))), (var_2)))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) var_11)), ((((+(((/* implicit */int) (unsigned char)137)))) << (((((/* implicit */int) (short)-12807)) + (12826)))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3731285286U)) ? (11051153658773149066ULL) : (((/* implicit */unsigned long long int) -4424738729338245979LL))))) ? (7032532401747400110ULL) : (((/* implicit */unsigned long long int) -62657754))));
    }
    for (unsigned int i_2 = 4; i_2 < 11; i_2 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) (short)(-32767 - 1));
        var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)206))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)93))))) ? (((arr_2 [i_2 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2 - 3])))))));
    }
    var_16 |= ((/* implicit */unsigned short) 30ULL);
    var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) var_2)) : (2327130114U)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)147)), (7914866986179387820ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10))))))))));
    var_18 &= ((/* implicit */unsigned short) (((~(((((/* implicit */int) (short)-6781)) ^ (((/* implicit */int) (short)-7857)))))) | (((/* implicit */int) (unsigned short)34077))));
}
