/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73114
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
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51972))))))), (var_14)));
    var_19 = ((/* implicit */unsigned short) ((var_13) / ((-(max((var_7), (((/* implicit */long long int) 4294967295U))))))));
    var_20 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((((/* implicit */_Bool) var_13)) && (((((/* implicit */_Bool) 1730739734364078194ULL)) || ((_Bool)1))));
        var_22 |= ((/* implicit */unsigned long long int) arr_0 [(_Bool)1]);
        var_23 = ((/* implicit */long long int) ((int) arr_0 [i_0]));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) arr_5 [i_1] [i_1]);
        var_24 += ((/* implicit */signed char) 7235228711752537739LL);
    }
}
