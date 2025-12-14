/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89535
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
    var_15 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_16 -= ((/* implicit */unsigned int) arr_0 [i_0] [i_0 + 1]);
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1] [i_0 - 3]), (((/* implicit */long long int) (unsigned char)238))))) ? (((((arr_0 [i_0 - 3] [i_0 + 3]) + (9223372036854775807LL))) << (((9223372036854775807LL) - (9223372036854775807LL))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)17136))) : (arr_0 [i_0 + 1] [i_0 + 1]))))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((/* implicit */long long int) (-(-1425906543)))), ((~(max((((/* implicit */long long int) (signed char)-59)), (-7254039492606805762LL))))))))));
    }
}
