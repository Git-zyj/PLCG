/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59494
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
    var_19 = ((/* implicit */short) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (var_16))))), (var_16)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_1 [i_0 - 2]))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0 + 1])), (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned char)8))))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) != (arr_2 [i_0 + 1] [i_0 - 2])))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */int) (!(var_1)))) == ((~(((/* implicit */int) arr_3 [i_1])))))) && ((!(((/* implicit */_Bool) max((var_18), (((/* implicit */long long int) (unsigned char)224)))))))));
                arr_8 [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (short)23020))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))));
}
