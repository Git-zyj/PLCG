/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58932
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
    var_15 = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_13)) - (((/* implicit */int) (signed char)69)))) : (((int) 10842161987653026620ULL))))));
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (signed char)63))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((min((min(((short)-26664), (((/* implicit */short) arr_1 [5LL])))), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_3 [i_1]))))))), (((/* implicit */short) arr_2 [9ULL]))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 2]))) : ((+(arr_0 [i_0]))))))))));
                var_19 = ((/* implicit */unsigned short) arr_3 [i_1 + 1]);
            }
        } 
    } 
}
