/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70668
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
    var_17 = ((/* implicit */_Bool) ((long long int) 0ULL));
    var_18 = min((var_15), ((((+(67108863U))) - (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 815351674U)) : (arr_2 [i_0])))));
        arr_3 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (-((-(arr_1 [i_0])))));
    }
    var_20 = ((/* implicit */_Bool) 1865956376U);
}
