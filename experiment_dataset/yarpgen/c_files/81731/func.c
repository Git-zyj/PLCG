/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81731
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) var_2))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (((_Bool)1) && (var_16)))), (var_13))))));
    var_22 &= ((/* implicit */unsigned short) var_14);
    var_23 -= ((/* implicit */short) min((var_4), (((/* implicit */unsigned long long int) ((unsigned char) max((var_13), (((/* implicit */unsigned char) var_2))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min((((/* implicit */int) max((arr_0 [i_0 - 1]), (((/* implicit */unsigned short) max((((/* implicit */short) var_8)), ((short)-9891))))))), ((+(((/* implicit */int) max((arr_0 [i_0 + 1]), (var_18)))))))))));
                var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (var_4)))), ((~(((/* implicit */int) (unsigned char)36))))));
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) arr_0 [i_1]))), (arr_3 [i_0 - 1] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4))))))))));
                arr_4 [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) (short)-26883))));
                var_27 = ((/* implicit */unsigned int) ((((_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_1])) : (((/* implicit */int) arr_0 [i_0 - 3]))));
            }
        } 
    } 
}
