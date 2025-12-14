/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64610
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) arr_0 [i_0])))));
        var_15 ^= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_11)))));
        arr_4 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) var_12))) | (((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_10))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)0)))) + (arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) arr_7 [i_1 - 1])) : (((/* implicit */int) ((short) 4106675725U)))));
        var_18 = ((/* implicit */int) min((var_18), ((+(arr_5 [i_1 - 1] [i_1 - 1])))));
    }
    for (short i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) arr_11 [(signed char)9] [i_2])) : (((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) arr_0 [i_2 - 3])))) : ((~(((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 2]))))));
        var_20 &= ((/* implicit */unsigned short) var_9);
    }
    var_21 = ((/* implicit */short) var_7);
}
