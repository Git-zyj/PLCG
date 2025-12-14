/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84612
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((max((-1267159301052391009LL), (((/* implicit */long long int) (unsigned short)65535)))) >= (((long long int) arr_0 [i_0]))));
                var_20 = ((/* implicit */int) (~(3613928189U)));
                var_21 = ((/* implicit */short) (!((_Bool)1)));
                var_22 += ((/* implicit */signed char) (-(((/* implicit */int) max((arr_4 [i_0]), (arr_4 [i_0]))))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (unsigned short)65535))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) max((var_6), (((/* implicit */short) var_2))));
}
