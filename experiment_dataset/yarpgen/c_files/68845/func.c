/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68845
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_13)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max(((((~(881900173337362067ULL))) ^ (((/* implicit */unsigned long long int) 1649902061)))), (((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_1 - 1])))));
                arr_6 [(signed char)14] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (arr_2 [i_1])))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0])) == (11649288232581006005ULL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) var_0))) & (var_12)));
}
