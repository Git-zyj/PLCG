/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61088
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        var_13 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) ((16) != (((/* implicit */int) (short)15753))))) : (((/* implicit */int) arr_0 [i_0 - 2]))))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(-17))))));
    }
    for (short i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)126))))));
        arr_6 [i_1 + 1] = ((/* implicit */unsigned short) arr_3 [i_1 - 1]);
    }
    var_15 = ((/* implicit */unsigned long long int) (short)14396);
}
