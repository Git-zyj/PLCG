/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7093
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
    var_16 = ((/* implicit */unsigned char) (unsigned short)65535);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_1 [1LL] [i_0])) >= ((~(14ULL)))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1])));
        var_20 = ((/* implicit */int) max((var_20), ((+(((/* implicit */int) arr_0 [i_1]))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1])));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)96)) ? (arr_2 [i_1] [i_1]) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_2 [13ULL] [13ULL])))));
    }
}
