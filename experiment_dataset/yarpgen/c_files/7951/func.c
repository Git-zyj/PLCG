/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7951
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
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))), (max((1065353216ULL), (((/* implicit */unsigned long long int) var_8))))))));
    var_16 = var_2;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (-(arr_0 [i_0] [i_0])));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 1065353221ULL)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_12)))) * (((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) var_0))));
    }
    var_17 = ((/* implicit */unsigned char) var_13);
}
