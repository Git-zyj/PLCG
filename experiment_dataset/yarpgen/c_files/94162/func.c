/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94162
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
    var_10 -= ((/* implicit */_Bool) (~(var_8)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17736)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3247929045336325378LL)));
                var_11 = ((/* implicit */signed char) ((((3247929045336325378LL) >> (((3232239420U) - (3232239411U))))) > (((/* implicit */long long int) ((/* implicit */int) ((short) max((var_0), (((/* implicit */signed char) (_Bool)1)))))))));
                var_12 = ((/* implicit */unsigned short) (signed char)8);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (3247929045336325362LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) < (((/* implicit */int) var_0))));
}
