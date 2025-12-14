/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76834
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
    var_16 = ((((/* implicit */_Bool) (+(min((0U), (var_4)))))) ? (var_5) : (var_2));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) 3551623471U)) ? (5U) : (((((4294967295U) * (521155547U))) - ((~(364035848U))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((((((/* implicit */_Bool) ((2147483648U) - (2147483647U)))) ? ((+(3773811748U))) : (max((521155555U), (521155539U))))) + (max((arr_0 [0U]), (((((/* implicit */_Bool) 2147483648U)) ? (3015473755U) : (4294967288U)))))))));
        arr_3 [i_0] [6U] |= ((((2147483624U) / (3773811756U))) % (((((/* implicit */_Bool) ((var_1) - (arr_1 [i_0] [i_0])))) ? (arr_0 [0U]) : (max((3773811756U), (3773811757U))))));
    }
    var_18 = ((2147483648U) ^ (1304396609U));
    var_19 = var_8;
}
