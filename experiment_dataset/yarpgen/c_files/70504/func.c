/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70504
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
    var_11 = ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)45856)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43031)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (((arr_0 [i_0 + 1]) ? (0) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)31)), (arr_1 [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) arr_1 [i_1]))))))) : (max((((/* implicit */unsigned int) (unsigned char)193)), (arr_5 [i_1]))));
        var_12 = ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1]))))) - (min(((~(var_2))), (((/* implicit */unsigned int) var_1)))));
    }
    var_13 ^= ((/* implicit */_Bool) var_2);
}
