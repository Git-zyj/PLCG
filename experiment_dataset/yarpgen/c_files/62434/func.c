/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62434
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) var_6))))) >= (((15403593334058815816ULL) / (((/* implicit */unsigned long long int) var_4))))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) (_Bool)0);
                var_12 = ((/* implicit */int) arr_1 [i_0]);
                var_13 = ((/* implicit */unsigned char) arr_5 [15ULL] [i_0] [15ULL]);
                arr_7 [i_0] = arr_3 [i_0];
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_0);
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)65535)))))) <= (((/* implicit */int) var_6))));
}
