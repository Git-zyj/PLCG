/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93532
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0]);
                var_20 += ((/* implicit */short) var_14);
                var_21 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((signed char) arr_3 [(_Bool)1] [(short)8]));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)54));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (2939281287323415909ULL)))) ? (((/* implicit */int) ((unsigned char) var_17))) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) -1977555280)) ? (15507462786386135706ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((signed char) var_11)))))));
}
