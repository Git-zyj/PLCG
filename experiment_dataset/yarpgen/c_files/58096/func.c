/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58096
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
    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((var_3) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))) - (1333)))))) ? (((/* implicit */int) ((short) (-(557600021U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) 4696622889463700367LL))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_1])) >= (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) arr_1 [i_1]))))));
            }
        } 
    } 
}
