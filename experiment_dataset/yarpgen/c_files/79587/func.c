/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79587
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
    var_14 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) (short)-29426)))));
    var_15 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))) + (var_8))) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_16 = ((/* implicit */signed char) var_12);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0 - 1]))))) ? (((/* implicit */int) arr_3 [i_0])) : ((+(((/* implicit */int) arr_3 [i_0 + 2]))))));
        var_17 = ((/* implicit */unsigned short) (~(arr_0 [i_0])));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1])), (((arr_0 [i_1 - 1]) & (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1 - 1]))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1717822020)) | (var_8)))) + (arr_7 [i_2])));
        arr_9 [i_2] = ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18345))) + (13397955690323591381ULL)));
    }
}
