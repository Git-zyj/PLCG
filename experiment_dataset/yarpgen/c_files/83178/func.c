/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83178
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2337378023U)) ? (493304975U) : (2337378005U)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) ((1957589248U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (1486608885) : (((/* implicit */int) arr_0 [i_0]))))) == (min((var_8), (((/* implicit */unsigned int) arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1]));
        arr_9 [i_1] [i_1] = ((/* implicit */int) ((unsigned short) arr_5 [i_1]));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((((int) (signed char)-9)) / (min((var_5), (((/* implicit */int) var_3)))))) : (((/* implicit */int) arr_5 [10U]))));
        var_12 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_2] [i_2]))) ? (((/* implicit */int) arr_6 [8LL])) : (((/* implicit */int) ((signed char) arr_11 [i_2]))))) ^ (((/* implicit */int) arr_10 [i_2] [i_2]))));
    }
    var_13 = ((/* implicit */int) (short)2048);
}
