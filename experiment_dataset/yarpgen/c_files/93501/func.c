/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93501
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_10 = ((/* implicit */unsigned char) arr_1 [i_0] [17ULL]);
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        var_11 ^= ((/* implicit */_Bool) arr_2 [i_1]);
        var_12 = ((/* implicit */unsigned char) arr_5 [i_1]);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_9 [i_1] [i_2] [18ULL]))));
            arr_10 [(_Bool)1] |= ((/* implicit */_Bool) arr_1 [i_2] [(signed char)3]);
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_7 [i_1] [i_1]);
            arr_12 [i_1 - 1] [i_1 + 1] [i_2 - 1] = ((/* implicit */unsigned int) arr_0 [(short)0]);
            arr_13 [i_2] = ((/* implicit */_Bool) arr_1 [i_2] [i_2]);
        }
        var_14 += ((/* implicit */_Bool) arr_9 [i_1] [i_1 + 1] [i_1 - 1]);
    }
    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        arr_17 [i_3] = ((/* implicit */_Bool) arr_2 [i_3]);
        arr_18 [i_3] = arr_6 [i_3] [(_Bool)0];
    }
    var_15 = ((/* implicit */int) var_8);
}
