/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65843
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
    var_15 = ((/* implicit */unsigned int) var_14);
    var_16 &= ((((/* implicit */int) (signed char)-69)) * (((/* implicit */int) (short)-1985)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (var_14))))) | (2147221504ULL))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)1966)) ? (((/* implicit */int) (short)1960)) : (((/* implicit */int) (short)-1993)))), (((((/* implicit */int) (short)1993)) * (((/* implicit */int) (short)-1975)))))))));
                arr_8 [i_1] [i_0] [i_1] = ((/* implicit */int) min((max(((-(var_5))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_0] [i_1])) << (((var_0) - (3455845683U)))))))), (((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) var_12))) == (arr_1 [i_0]))))))));
            }
        } 
    } 
}
