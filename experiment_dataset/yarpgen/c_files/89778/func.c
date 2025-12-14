/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89778
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
    var_15 = var_13;
    var_16 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8))))))), (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) arr_0 [(unsigned short)8]);
        arr_3 [6ULL] [i_0] = ((/* implicit */unsigned long long int) var_11);
        arr_4 [i_0] = ((/* implicit */_Bool) min((((arr_0 [i_0]) | (arr_0 [i_0]))), (((arr_0 [i_0]) * (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        var_18 = ((/* implicit */int) ((((int) ((((/* implicit */int) var_5)) | (-1030107546)))) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -544195818)) || (((/* implicit */_Bool) arr_5 [i_1]))))) >= (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_8) : (544195833))))))));
        var_19 *= max((((/* implicit */unsigned long long int) ((int) arr_6 [i_1]))), ((+(min((var_14), (((/* implicit */unsigned long long int) var_2)))))));
        arr_7 [i_1] = ((/* implicit */short) ((unsigned short) arr_6 [i_1 - 1]));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((max((arr_10 [i_2]), (arr_9 [i_2]))) & (arr_8 [i_2])));
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) var_8);
        var_20 = (-(max((((/* implicit */unsigned long long int) var_4)), (min((var_14), (((/* implicit */unsigned long long int) -544195818)))))));
    }
}
