/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76637
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) (-(((long long int) var_6))));
        var_15 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 550065285U)))))));
        arr_3 [i_0] = ((/* implicit */int) max(((+(min((262143ULL), (18446744073709289493ULL))))), (((/* implicit */unsigned long long int) ((short) ((unsigned int) (signed char)31))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
    }
    var_16 -= ((/* implicit */long long int) min((((/* implicit */int) ((signed char) var_2))), ((-(((/* implicit */int) var_13))))));
}
