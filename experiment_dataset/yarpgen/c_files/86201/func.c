/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86201
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(4248095943797480415LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_5 [i_0] [4ULL] = ((/* implicit */unsigned short) var_10);
    }
    var_15 = ((/* implicit */unsigned short) (-(240U)));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)6653)), (var_2))) : (((/* implicit */unsigned long long int) ((int) 2940641863U)))))) ? (((/* implicit */long long int) var_4)) : (var_11)));
}
