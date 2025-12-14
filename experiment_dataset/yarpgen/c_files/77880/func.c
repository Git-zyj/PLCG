/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77880
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
    var_17 = ((/* implicit */long long int) ((int) var_10));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)28040))))), (((/* implicit */long long int) (+(var_11))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) var_0)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] &= ((/* implicit */short) var_8);
                arr_7 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [10]);
                var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) / (3789004978U)))))) ? (((/* implicit */unsigned long long int) ((int) arr_5 [i_0] [i_0]))) : (((var_13) - (((/* implicit */unsigned long long int) max((63U), (((/* implicit */unsigned int) var_7)))))))));
                var_20 = ((/* implicit */int) arr_1 [i_0]);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_15);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((-(((long long int) (_Bool)1)))) : (((/* implicit */long long int) 741366432U))));
}
