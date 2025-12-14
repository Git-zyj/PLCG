/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87523
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
    var_11 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]))) & (((arr_2 [i_0]) & (var_2))))) <= (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) > (((/* implicit */int) arr_1 [i_0])))) ? (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_3)))) : (((/* implicit */int) ((arr_0 [i_0]) || (arr_0 [i_0]))))))))))));
        var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0])))))) : (var_2)));
    }
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_8)) % (((/* implicit */int) var_4))))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_0))))) : ((~(var_2)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_1)) << (((var_2) - (18250412497190951765ULL)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1))))) ? (((var_10) | (((/* implicit */unsigned long long int) var_9)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2)))))));
}
