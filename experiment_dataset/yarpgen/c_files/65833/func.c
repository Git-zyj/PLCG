/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65833
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
    var_20 = ((/* implicit */signed char) ((5ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3849095403U))))));
    var_21 = ((signed char) ((unsigned long long int) (~(4125775900U))));
    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)65)), (var_19)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((445871893U) + (3849095403U)))))) ? (min((((/* implicit */long long int) 445871904U)), (9223372036854775807LL))) : (((/* implicit */long long int) 3849095387U))));
        var_23 = ((/* implicit */long long int) (~(max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
    }
}
