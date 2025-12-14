/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96184
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
    var_18 = ((/* implicit */long long int) var_13);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */long long int) max(((short)-4159), ((short)19964)))), (max((((/* implicit */long long int) (short)4094)), (-6245310124790658756LL))))))));
                    arr_7 [i_1] [i_1] [i_1] [i_1] = max((((/* implicit */long long int) min(((_Bool)0), ((_Bool)1)))), (max((min((var_9), (((/* implicit */long long int) arr_3 [i_2])))), (((/* implicit */long long int) arr_6 [i_2 + 3] [i_2] [i_2 + 2] [i_0 + 2])))));
                    arr_8 [i_1] [i_1] [i_0] [i_1] &= ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_13)), (var_14))), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((/* implicit */unsigned long long int) max((arr_3 [i_0 - 1]), (((/* implicit */signed char) (_Bool)1))))), (min((5411647869327259192ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (36028797010575360LL)))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_7), (var_17)));
}
