/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91458
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
    var_11 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_9)))));
    var_12 = min((9223372036854775789LL), (((/* implicit */long long int) (unsigned char)126)));
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (signed char)16))))), (arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) 4230706707167215872LL);
    }
}
