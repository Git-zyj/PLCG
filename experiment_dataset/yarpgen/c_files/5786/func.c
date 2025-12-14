/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5786
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
    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_7)), (var_10)))));
    var_16 = var_5;
    var_17 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) arr_2 [i_0]);
        var_19 = ((/* implicit */unsigned char) var_4);
        var_20 = (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_3 [6ULL]) : (((/* implicit */int) arr_2 [i_0]))))) - (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_12)))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((var_9) | (((/* implicit */unsigned long long int) min((min((var_13), (var_13))), (((/* implicit */unsigned int) ((var_6) <= (((/* implicit */unsigned long long int) arr_3 [i_0]))))))))));
    }
}
