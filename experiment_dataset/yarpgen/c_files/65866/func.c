/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65866
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_18 = ((((1582602323) <= (((/* implicit */int) (!(((/* implicit */_Bool) 17573172609928202641ULL))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    }
    var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))));
}
