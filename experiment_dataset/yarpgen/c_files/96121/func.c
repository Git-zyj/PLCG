/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96121
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
    var_15 = min((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)64550))))), (((((/* implicit */_Bool) var_1)) ? (var_11) : (var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */int) ((min((var_4), (arr_3 [i_0 - 1] [i_0 - 2]))) && (((arr_3 [i_0 - 1] [i_0 - 1]) || (((/* implicit */_Bool) arr_1 [i_0]))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_0] [(_Bool)1])), (var_2)))) ? (((/* implicit */int) (!((_Bool)0)))) : ((+(((/* implicit */int) (short)-10789)))))) : ((~(((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_10)) - (7129)))))))));
            }
        } 
    } 
    var_17 = max(((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) -435896734)), (var_2)))))), (((min((((/* implicit */unsigned long long int) (short)-24397)), (var_6))) == (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL))))))));
}
