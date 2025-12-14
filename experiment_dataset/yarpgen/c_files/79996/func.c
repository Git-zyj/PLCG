/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79996
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((unsigned int) 3078768482U)))) ? (max((158536858759146499LL), (6502526238643405975LL))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_1])), (((((/* implicit */int) arr_2 [(signed char)9] [i_1] [i_0])) / (((/* implicit */int) (short)-20044))))))) ? ((-(((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_1 + 1])))) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))));
                arr_5 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0])), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (arr_3 [i_1] [i_1])))));
            }
        } 
    } 
}
