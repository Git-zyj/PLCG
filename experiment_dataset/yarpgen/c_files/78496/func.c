/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78496
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned char) (-(((int) 3583337809999518250LL))));
        arr_5 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        arr_6 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_0]) / (((/* implicit */long long int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_2 [i_0]))) : (arr_2 [i_0])));
        arr_8 [i_0] = ((/* implicit */unsigned long long int) (+(arr_3 [i_0])));
    }
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_8))) ? ((~(((unsigned int) (signed char)-13)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((7586169902654021274ULL), (((/* implicit */unsigned long long int) 1226981260U)))))))));
}
