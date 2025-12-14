/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86217
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
    var_19 = ((((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (unsigned short)8)) : (((((/* implicit */int) (unsigned char)61)) ^ (((/* implicit */int) (signed char)-1)))))) | (((/* implicit */int) var_5)));
    var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 1440179856919200297LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)76)))))), (4816357034909077110LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_15))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((long long int) arr_1 [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_1]))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) (short)18300)) : (((/* implicit */int) arr_4 [i_1]))));
    }
}
