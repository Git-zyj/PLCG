/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58356
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
    var_20 += ((((/* implicit */_Bool) 5425394807771133719ULL)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (short)-26769)));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (min((((((/* implicit */_Bool) (short)26769)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)26779)))), (-1737508500))) : (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (short)-26767))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_15) : (((/* implicit */int) (signed char)127))))) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2965530893U)) || ((_Bool)1)))))));
                arr_9 [16U] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [20]))) / (9223372036854775807LL)));
                var_22 = ((/* implicit */long long int) (+(max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_6 [i_1] [i_0] [(_Bool)1])) * (((/* implicit */int) (_Bool)0))))))));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(815872603))))));
            }
        } 
    } 
}
