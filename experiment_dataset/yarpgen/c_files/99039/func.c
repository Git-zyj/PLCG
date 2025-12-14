/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99039
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)60)))))));
        arr_3 [i_0] = ((/* implicit */short) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) | (var_10))) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) arr_0 [i_0]))))))) >= (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-9280)))), (((/* implicit */int) arr_0 [i_0])))))));
        var_15 = ((((/* implicit */int) arr_0 [i_0])) - (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_5)))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) arr_1 [i_0] [(short)17]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((arr_5 [i_1]) ^ (((/* implicit */int) var_12))));
        arr_7 [6] [i_1] = ((/* implicit */short) 12930729031291776534ULL);
    }
    var_17 = ((/* implicit */short) var_10);
}
