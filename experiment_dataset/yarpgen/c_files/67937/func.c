/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67937
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) var_11);
        arr_4 [i_0] = ((/* implicit */int) ((unsigned char) arr_2 [i_0]));
        arr_5 [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0]) : (arr_3 [i_0 - 1])));
    }
    for (short i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned short) max(((!(arr_7 [i_1]))), (min((arr_7 [i_1]), (arr_7 [i_1])))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 + 2] [12ULL])) ? (arr_9 [i_1 - 2] [16]) : (arr_9 [i_1 - 1] [(unsigned char)10])))) && (((/* implicit */_Bool) max((arr_9 [i_1 + 1] [(signed char)20]), (arr_9 [i_1 - 1] [10])))))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((short) ((int) arr_12 [i_2 + 1])));
        var_17 = (((-(((/* implicit */int) arr_12 [i_2 + 1])))) + (((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2])) ? (var_9) : (((/* implicit */int) arr_13 [i_2 + 1] [16])))));
        var_18 = ((/* implicit */int) ((unsigned char) max((max((arr_11 [(short)16] [i_2]), (arr_11 [i_2] [i_2]))), ((+(((/* implicit */int) arr_13 [21] [i_2])))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) max((18245305950977929652ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) 201438122731621986ULL)) ? (201438122731621964ULL) : (var_0))) : (((/* implicit */unsigned long long int) var_5)))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((~(((((/* implicit */_Bool) 18245305950977929629ULL)) ? (((/* implicit */int) var_10)) : (1428580341))))) : (var_5)));
}
