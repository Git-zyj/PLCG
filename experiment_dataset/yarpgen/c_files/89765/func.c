/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89765
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
    var_17 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((signed char) (short)32767)))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((unsigned int) arr_0 [i_0])), (((/* implicit */unsigned int) (-(((int) arr_1 [i_0] [i_0]))))))))));
                arr_7 [i_0] [8ULL] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0]))), ((+(895844732U)))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (((unsigned long long int) max((var_8), ((_Bool)1))))));
    var_21 = ((/* implicit */unsigned char) ((var_6) + (-1045094988)));
}
