/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90029
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
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0 - 1] [(unsigned char)6] = ((/* implicit */unsigned int) (unsigned char)234);
        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_0 - 1]))));
    }
    for (long long int i_1 = 4; i_1 < 21; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (max((arr_6 [(signed char)12] [(signed char)12]), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_13)))))))))));
        arr_7 [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) arr_4 [i_1] [i_1])) : (((((/* implicit */_Bool) 0U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [3U] [i_1 - 3]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */int) arr_6 [i_1] [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_12 [i_2] |= ((/* implicit */int) var_6);
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) ((1804299248) == (1804299248)));
    }
    var_16 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    var_17 -= ((/* implicit */unsigned char) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned long long int) 1804299248)))))))))));
}
