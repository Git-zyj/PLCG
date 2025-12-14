/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57522
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_2)));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned char) var_10));
        var_12 = ((/* implicit */unsigned short) ((int) max((max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [i_0 - 1] [i_0]))), (min((arr_1 [i_0 + 3] [i_0 + 1]), (((/* implicit */unsigned short) arr_0 [i_0])))))));
        var_13 = ((/* implicit */_Bool) arr_1 [i_0] [(short)1]);
    }
    var_14 = ((/* implicit */unsigned int) (unsigned short)62849);
    var_15 = var_3;
    var_16 = ((/* implicit */int) ((unsigned long long int) var_6));
}
