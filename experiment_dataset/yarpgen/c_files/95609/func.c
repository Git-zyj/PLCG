/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95609
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_14)))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_3))))));
                arr_8 [i_0] [(signed char)9] = ((/* implicit */long long int) ((((_Bool) var_9)) ? (max((var_1), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((int) (~(14573582031347975751ULL)))))));
                var_15 = arr_0 [i_0];
                var_16 |= ((/* implicit */long long int) arr_2 [i_0] [17LL]);
            }
        } 
    } 
    var_17 = var_4;
}
