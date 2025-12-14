/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64593
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) var_17)), (var_0))) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) (-(var_4)))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
    var_20 &= ((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))) : (min((var_2), (((/* implicit */long long int) var_13))))))));
    var_21 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) var_14))));
                var_23 = ((/* implicit */unsigned char) arr_4 [i_0]);
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7801))) + (arr_4 [i_1])))))));
            }
        } 
    } 
}
