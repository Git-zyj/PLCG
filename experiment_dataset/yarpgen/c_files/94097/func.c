/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94097
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((16393135441283739346ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_18))))))) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) var_18))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-4708), (((/* implicit */short) arr_4 [i_0] [i_0])))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (2053608632425812265ULL))))))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_1 [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned short)58288)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_13)))) == (((/* implicit */int) ((short) var_13))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-31366))));
}
