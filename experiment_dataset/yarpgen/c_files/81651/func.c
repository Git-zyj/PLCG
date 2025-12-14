/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81651
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
    var_16 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((var_3) + (((/* implicit */unsigned int) var_1))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 3])))) ? (((/* implicit */int) ((short) arr_0 [(signed char)1] [i_0 + 3]))) : (((/* implicit */int) ((arr_1 [i_0 + 3] [i_0 + 3]) != (arr_1 [(unsigned short)16] [i_0 + 3]))))));
                arr_4 [i_0] [i_0] = ((_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) ((short) var_7)))), ((-((-(var_8)))))));
    var_19 = ((/* implicit */unsigned int) ((_Bool) var_10));
    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
}
