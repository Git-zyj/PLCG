/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6224
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
    var_10 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) 1982056488)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0])))))));
        arr_4 [i_0] [10LL] |= ((((/* implicit */_Bool) 15173452201213776380ULL)) || (((/* implicit */_Bool) 0U)));
    }
    for (long long int i_1 = 3; i_1 < 7; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) 955763691U);
        arr_9 [i_1] = ((/* implicit */_Bool) (((-(arr_5 [i_1 + 3]))) + (arr_5 [i_1 + 2])));
        arr_10 [i_1] [1] = ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) 5338687347923399458LL)) ? (((/* implicit */int) (unsigned short)57157)) : (arr_6 [i_1 - 2]))))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)0))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_1])) - (17168)))))))))));
        arr_11 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 2])) / (((/* implicit */int) arr_7 [i_1 + 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1]))))) : (((3339203605U) >> (((((/* implicit */int) arr_0 [i_1 - 2])) - (11067))))));
    }
    var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))));
}
