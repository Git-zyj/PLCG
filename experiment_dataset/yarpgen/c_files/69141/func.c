/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69141
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_14))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [4ULL] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (max((14942876184373824075ULL), (((/* implicit */unsigned long long int) (short)32761)))))) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)896)) ? (((/* implicit */unsigned long long int) var_5)) : (11606970738526310212ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
        var_16 -= ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64639)) ? (((/* implicit */unsigned long long int) var_3)) : (var_10)))) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_5);
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = arr_7 [i_1] [9ULL];
        arr_9 [i_1] = var_8;
    }
    var_17 = ((/* implicit */int) 3690480002U);
}
