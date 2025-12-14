/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95336
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
    var_11 |= 2699998932U;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0 - 3] |= ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13125))))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((signed char) var_2)))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1594968366U)) ? (((((/* implicit */_Bool) (short)-31670)) ? (((/* implicit */int) (short)15698)) : (((/* implicit */int) (unsigned short)11268)))) : ((~(((/* implicit */int) (unsigned char)240))))));
        var_13 = ((/* implicit */unsigned int) var_1);
        var_14 ^= ((/* implicit */signed char) var_6);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_7))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_10 [i_2] |= ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (15945235542320138529ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58)))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_3)))))));
        arr_11 [i_2] = ((/* implicit */_Bool) ((unsigned int) arr_1 [(unsigned char)3]));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9070))) > (arr_9 [i_2] [0]))))) - (((((/* implicit */_Bool) arr_1 [(signed char)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (2048133171U)))));
    }
}
