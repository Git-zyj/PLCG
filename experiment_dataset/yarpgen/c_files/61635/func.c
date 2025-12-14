/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61635
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) ((arr_1 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        arr_4 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_11 |= ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) : (arr_7 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))));
        arr_9 [i_1] = ((/* implicit */short) ((-5239786178277558378LL) + (7398801551865969044LL)));
    }
    var_12 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65520))));
}
