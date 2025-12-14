/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89246
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
    var_20 = ((/* implicit */unsigned long long int) ((((var_0) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)57100)) : (((/* implicit */int) var_17)))))) ? (((((/* implicit */_Bool) (~(var_9)))) ? (((var_7) ? (var_19) : (((/* implicit */int) var_4)))) : ((+(var_0))))) : (min((((var_13) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (var_3)))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */int) (unsigned char)84))))) ? (((/* implicit */int) var_2)) : (var_11)))) ? (((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) var_15)) : (var_19))) : (((/* implicit */int) (unsigned char)96)))))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((unsigned int) (~(((/* implicit */int) (unsigned char)90))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) <= (((/* implicit */int) (signed char)57)))))))))));
    var_23 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_1 - 1])))))));
                var_24 = ((/* implicit */_Bool) (+((-((+(var_12)))))));
            }
        } 
    } 
}
