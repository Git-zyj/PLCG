/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6579
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) max((var_3), (2147483647)))) ? (((arr_0 [i_0]) - (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (unsigned char)21)))) : (arr_0 [2U])));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), ((~(((((/* implicit */unsigned long long int) arr_0 [i_0])) * (var_12)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((max((arr_3 [i_1]), (((/* implicit */unsigned int) (unsigned char)247)))), (arr_3 [i_1]))))));
        arr_5 [i_1] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) max((768055887), (((/* implicit */int) var_0))))), (15845203216683454785ULL))), (((/* implicit */unsigned long long int) var_2))));
        var_18 = max((min((arr_2 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (unsigned char)0)) : (var_3)))))), (((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_7)))));
    }
    var_19 = ((/* implicit */int) max((var_12), (((/* implicit */unsigned long long int) var_15))));
    var_20 = ((/* implicit */unsigned char) var_10);
    var_21 = ((/* implicit */unsigned long long int) (!(var_9)));
}
