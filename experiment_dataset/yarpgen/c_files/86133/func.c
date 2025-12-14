/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86133
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */signed char) min((var_3), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) < (((unsigned long long int) arr_3 [i_0] [i_0] [i_1])))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) max((((/* implicit */short) arr_4 [i_0])), (var_6)))), (arr_5 [i_1] [i_0]))))));
                arr_6 [i_0] = ((/* implicit */long long int) arr_4 [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (short)3676))));
}
