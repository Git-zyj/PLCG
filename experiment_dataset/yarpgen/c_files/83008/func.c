/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83008
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
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((3220283095U) != (((/* implicit */unsigned int) -507430144)))))));
                var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 + 2])))), (((/* implicit */int) arr_3 [(short)6]))));
                var_15 -= ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))), (((((/* implicit */_Bool) var_11)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) & (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) 0U))) ^ (((/* implicit */int) ((signed char) var_2))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) (short)-18997);
    var_17 = ((/* implicit */short) max(((-(1074684200U))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))) <= (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_10))))))))));
}
