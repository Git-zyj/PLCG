/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93216
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) 15713072559882062075ULL))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)6))));
        var_16 -= (_Bool)1;
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_17 ^= ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) && (arr_5 [i_1]))))));
        var_19 = ((/* implicit */unsigned char) ((_Bool) 281474976710655LL));
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) ((_Bool) var_0)))))))));
}
