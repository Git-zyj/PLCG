/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79465
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_10 -= ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (2519539068U))))) ? (((/* implicit */int) ((var_3) == (2519539068U)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-28792))))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : ((-(-5950624277658723258LL)))))));
                    var_11 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (signed char)-76)), (((4426801012303945154ULL) * (((/* implicit */unsigned long long int) 1780358217U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9))))));
                }
            } 
        } 
    } 
    var_12 |= 1775428228U;
    var_13 = ((/* implicit */short) var_3);
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_5)))) / ((~(((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) min(((-(((/* implicit */int) (short)-5085)))), (((/* implicit */int) var_7))))) : (min((((/* implicit */long long int) var_7)), (1630886299689696699LL))))))));
    var_15 |= ((/* implicit */unsigned long long int) min((max((max((((/* implicit */long long int) var_0)), (2012638543414639695LL))), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) var_2))));
}
