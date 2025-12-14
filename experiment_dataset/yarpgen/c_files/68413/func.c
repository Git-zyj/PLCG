/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68413
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
    var_17 = ((/* implicit */unsigned char) var_8);
    var_18 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_19 = arr_0 [i_0] [i_0];
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) min((max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1]))), (((/* implicit */unsigned char) max((arr_1 [i_1]), (arr_1 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
        arr_8 [i_1] = ((/* implicit */_Bool) arr_0 [i_1] [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
        var_21 = arr_0 [i_2] [i_2];
    }
    var_22 = ((/* implicit */_Bool) var_16);
}
