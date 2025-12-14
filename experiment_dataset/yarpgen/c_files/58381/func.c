/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58381
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
    var_18 = ((1736642978) % (min((var_2), (((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(short)13] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */int) max((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */unsigned short) (unsigned char)255))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */short) var_1))))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) min((((/* implicit */short) var_1)), (var_5)))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) var_16);
                var_19 -= ((/* implicit */signed char) ((((/* implicit */int) min((arr_3 [i_0] [i_0 + 2] [i_0 - 1]), (arr_3 [i_0] [i_0 + 1] [i_0 - 1])))) % (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned long long int) var_5);
}
