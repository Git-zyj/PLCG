/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97531
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [17LL] = ((/* implicit */unsigned short) (_Bool)1);
        arr_4 [i_0 + 1] = (!(((/* implicit */_Bool) arr_1 [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 21; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((int) arr_7 [i_1] [i_1]));
        var_17 = ((/* implicit */unsigned int) ((_Bool) var_8));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned int) var_7)))));
        arr_12 [8] [8] = ((((((/* implicit */_Bool) var_12)) ? (67108863LL) : (9223372036854775807LL))) % (((/* implicit */long long int) arr_10 [i_2 + 1])));
        var_19 = ((/* implicit */long long int) ((arr_10 [i_2 + 1]) + (arr_10 [i_2 + 1])));
    }
    var_20 = ((/* implicit */unsigned short) -5342802611985242083LL);
}
