/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96765
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) var_0))))) * (max((1342104276457725995ULL), (((/* implicit */unsigned long long int) 4340683933424758621LL))))))) ? (((/* implicit */int) var_1)) : ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))))))));
    var_12 ^= ((unsigned long long int) var_4);
    var_13 = ((/* implicit */short) ((int) var_10));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)1))))) - (min((arr_1 [i_0 + 2] [i_0 + 1]), (arr_1 [i_0 + 2] [i_0 + 2])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0 - 1]), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (max((arr_0 [i_0 + 2]), (((/* implicit */int) (unsigned short)33352)))) : (((((/* implicit */int) var_5)) >> (((14382703324664401142ULL) - (14382703324664401120ULL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (arr_1 [i_0 + 1] [i_0 + 2])))))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 - 1])), (arr_2 [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned short) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))));
        var_14 = ((/* implicit */signed char) ((short) ((int) (short)-7031)));
    }
    var_15 += ((/* implicit */long long int) (((+(((unsigned long long int) var_0)))) >> (((((/* implicit */int) (signed char)-102)) + (145)))));
}
