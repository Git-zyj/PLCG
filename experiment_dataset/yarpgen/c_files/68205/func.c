/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68205
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
    var_15 = ((/* implicit */long long int) var_7);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) arr_2 [0ULL] [i_0]);
        var_17 = max((((/* implicit */int) var_5)), ((~(((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [17U]))))));
        var_19 = ((var_0) ? (max((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_1])) == (((/* implicit */int) var_9))))), (((arr_0 [i_1]) % (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16196))));
        arr_5 [12] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) arr_2 [i_1] [i_1]))))), (arr_0 [i_1])));
    }
    var_20 = var_2;
    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) (-((-(var_3))))));
}
