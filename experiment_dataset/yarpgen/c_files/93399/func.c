/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93399
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
    var_18 *= ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */unsigned char) (-(max(((-(((/* implicit */int) arr_4 [i_0] [i_1 + 2])))), (((/* implicit */int) arr_2 [i_0] [(unsigned short)6]))))));
                arr_5 [14U] [i_1] [i_0] = ((/* implicit */unsigned short) ((max((min((((/* implicit */unsigned long long int) 2LL)), (17928639181400866733ULL))), (((/* implicit */unsigned long long int) ((1597904268U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))) / (((/* implicit */unsigned long long int) -1))));
            }
        } 
    } 
}
