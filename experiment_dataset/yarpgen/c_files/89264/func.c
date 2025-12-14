/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89264
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
    var_11 = var_4;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((int) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_8))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))));
            var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1]))));
            arr_5 [i_1] [i_1] = ((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
            var_15 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_1] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_1] [i_1])) + (31973)))))) : (((/* implicit */unsigned char) ((((((((/* implicit */int) arr_4 [i_1] [i_1])) - (2147483647))) + (2147483647))) >> (((((((/* implicit */int) arr_4 [i_1] [i_1])) + (31973))) - (58396))))));
        }
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1451890038)) ? (-1456066140) : (((/* implicit */int) ((((/* implicit */_Bool) -1456066156)) && (((/* implicit */_Bool) -1456066156)))))));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_2])))), (((/* implicit */int) min((arr_0 [i_2]), (arr_0 [i_2]))))));
        arr_10 [5ULL] [(signed char)11] = ((/* implicit */unsigned long long int) arr_8 [i_2]);
        arr_11 [i_2] [i_2] &= ((/* implicit */signed char) var_8);
        var_17 = (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (561133884336250790LL));
        arr_12 [i_2] = max((((/* implicit */short) var_2)), (max((arr_4 [i_2] [i_2]), (((/* implicit */short) var_1)))));
    }
}
