/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70131
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (short)-5988)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-5988))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-5977)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_5)) : (var_10))))) : (((/* implicit */unsigned long long int) var_11))));
    var_15 = (~(var_3));
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) min(((short)-5977), ((short)5976)))) ? (-2207592325494465903LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-5985)), ((-2147483647 - 1))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))), ((+(((/* implicit */int) (short)28308))))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_1]))) : (arr_4 [i_0])))));
                    arr_8 [i_0] [i_0] [(unsigned char)8] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) 2207592325494465885LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)10070)) : (((/* implicit */int) arr_6 [i_0] [i_1] [9U] [i_1]))))));
                }
            } 
        } 
    } 
    var_17 = var_13;
}
