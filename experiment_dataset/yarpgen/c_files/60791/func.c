/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60791
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) 1814110161);
                var_16 = ((/* implicit */_Bool) arr_0 [i_0]);
                arr_5 [i_1] [i_1 - 3] = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) 1814110161)), (arr_3 [i_0] [i_0] [i_0])))) ? (min((((/* implicit */long long int) 17)), (arr_2 [i_0] [0ULL]))) : (((/* implicit */long long int) max((((/* implicit */int) var_14)), (arr_1 [i_1] [11U])))))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) 794040525U))), (var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-2149059023735004357LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (var_2) : (((((/* implicit */long long int) -786473224)) / (var_12))))) : (((/* implicit */long long int) var_13))));
}
