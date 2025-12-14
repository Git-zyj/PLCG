/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81547
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
    var_13 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_14 *= ((/* implicit */unsigned short) ((((arr_1 [i_0]) >> (((arr_1 [11U]) - (1299552904733608739ULL))))) >= ((~(arr_1 [i_0])))));
        arr_2 [i_0] &= ((/* implicit */signed char) min((arr_1 [i_0]), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26921))) ^ (arr_1 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [16U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10LL])) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [(_Bool)1])) <= (((/* implicit */int) var_8)))))) + (var_10))) : (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))));
        arr_7 [i_1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)2325)) ? (((/* implicit */int) (_Bool)1)) : (731845781))) + (((((((/* implicit */int) var_4)) + (2147483647))) >> (((arr_0 [i_1] [i_1]) - (12323666515364630455ULL)))))));
        var_15 += ((/* implicit */unsigned int) arr_4 [i_1] [19]);
    }
}
