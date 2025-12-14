/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81237
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
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)14671)), (((((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)50864)))) + ((-(((/* implicit */int) var_1))))))));
                var_17 = ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_0])), ((unsigned short)50864)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_0])))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
                arr_8 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_0])) >= (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))))), ((+(((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_8) < (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1)))))) : (var_9)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (max((((/* implicit */unsigned long long int) var_1)), (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (min((var_4), (((/* implicit */unsigned int) var_1))))))))));
}
