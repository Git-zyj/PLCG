/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83836
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [13LL] [13LL] = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0])), (((((/* implicit */_Bool) -386356796624711539LL)) ? (0U) : (416398733U))))), (3878568563U)));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 133956807U)) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) 416398743U)))))) ? (((((/* implicit */_Bool) 3878568585U)) ? (((/* implicit */unsigned int) (-(arr_0 [i_0 + 1] [i_0 + 1])))) : (416398743U))) : ((-(max((416398743U), (((/* implicit */unsigned int) (unsigned short)1869))))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0 + 1] [i_0 + 1]), (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))) ? (max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */int) ((_Bool) 3878568541U)))));
    }
    var_16 -= ((/* implicit */long long int) ((unsigned short) (_Bool)0));
}
