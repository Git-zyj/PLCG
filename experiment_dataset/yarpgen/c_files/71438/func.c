/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71438
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) var_10)))), (var_18)))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_14)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (-2595354628677331442LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125)))))) ? (((((/* implicit */int) arr_0 [i_2] [i_2])) >> (((((/* implicit */int) var_10)) + (121))))) : (((/* implicit */int) ((_Bool) (signed char)104)))));
                        var_21 = ((/* implicit */_Bool) (~(134217727ULL)));
                    }
                    arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [i_2 + 1] [i_2] [i_0] [i_0] [i_0])) / (max((((/* implicit */long long int) min((235244690U), (((/* implicit */unsigned int) (signed char)117))))), (min((9223372036854775807LL), (((/* implicit */long long int) arr_5 [i_0] [12] [i_0]))))))));
                }
            } 
        } 
    } 
}
