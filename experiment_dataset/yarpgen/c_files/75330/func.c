/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75330
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
    var_15 |= ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (max((-1209994109), (((/* implicit */int) (unsigned char)177)))) : (((/* implicit */int) var_8))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (min(((-(arr_3 [i_0 - 1] [i_1]))), (((((/* implicit */int) (unsigned char)177)) & (1209994109))))) : (((int) var_14))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_10))));
}
