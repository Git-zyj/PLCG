/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90562
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (var_14)))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (9424589301987521233ULL) : (arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)63)), (9815183818344192427ULL)));
        arr_4 [i_1] [i_1] = ((((/* implicit */_Bool) 8631560255365359188ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23956)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (var_7)))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (4333603705121943433LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 12249962817575286288ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1]))))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])) : (5ULL))) : (((/* implicit */unsigned long long int) arr_2 [14LL] [i_1]))));
    }
    var_22 |= ((/* implicit */int) var_14);
}
