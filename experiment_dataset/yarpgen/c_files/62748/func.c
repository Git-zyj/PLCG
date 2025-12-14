/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62748
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
    var_20 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) var_11);
        arr_2 [9] = ((/* implicit */short) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        arr_6 [i_1 + 1] = ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) : (1257787849675167121LL));
        var_22 = ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) ((((var_7) ? (arr_3 [i_1 - 1] [i_1 + 1]) : (((/* implicit */long long int) var_17)))) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1])))));
            var_24 ^= ((/* implicit */int) ((unsigned int) var_5));
            arr_9 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (-(var_17)));
        }
        var_25 = ((unsigned int) arr_4 [i_1 + 1]);
        arr_10 [i_1] [i_1] = ((signed char) ((arr_5 [i_1 + 1]) >> (((var_17) - (694520895U)))));
    }
}
