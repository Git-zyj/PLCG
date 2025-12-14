/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96829
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = arr_0 [i_0];
                var_13 = ((/* implicit */unsigned int) (~(((arr_3 [i_0] [i_1]) ? (((/* implicit */int) arr_3 [(signed char)6] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 906201175U)) ? (((/* implicit */int) (unsigned short)24877)) : (((/* implicit */int) (unsigned short)24880))))) ? (min((-4058187726655780244LL), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((((arr_2 [i_0]) == (((/* implicit */unsigned int) 945688052)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) arr_1 [i_1] [i_0])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) - (arr_2 [i_1])))))));
                var_14 = ((/* implicit */int) min((var_14), ((~(((/* implicit */int) (signed char)-90))))));
                var_15 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (short)25975))))) != ((-9223372036854775807LL - 1LL)))))) + (((9182999797865068333LL) & (((/* implicit */long long int) arr_4 [i_0] [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_5);
}
