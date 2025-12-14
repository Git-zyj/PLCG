/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86435
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
    var_13 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
    var_14 = var_10;
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0 + 3] [i_0] = ((/* implicit */_Bool) (signed char)-66);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 1]))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) -3195589640858508004LL))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (short)(-32767 - 1)))))) : (((/* implicit */int) var_0))))) ? ((-(16193266028291166543ULL))) : (((/* implicit */unsigned long long int) ((int) (short)4092)))));
}
