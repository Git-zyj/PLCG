/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55793
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_1)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)16383), (((/* implicit */unsigned short) var_12))))))))) ? (max(((-9223372036854775807LL - 1LL)), (1099511627775LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_14 = ((/* implicit */long long int) var_10);
    var_15 = ((/* implicit */short) max((min((((/* implicit */long long int) (unsigned char)0)), (1099511627775LL))), (max((1099511627775LL), (1099511627775LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) << (((1099511627783LL) - (1099511627778LL)))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1099511627775LL)) ? (0LL) : (-1099511627765LL)));
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16368))));
    }
}
