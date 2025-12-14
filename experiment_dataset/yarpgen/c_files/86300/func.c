/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86300
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
    var_16 &= ((/* implicit */unsigned long long int) (+(var_1)));
    var_17 += ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_1 - 4] [i_0] [i_1 - 1]);
                var_18 |= ((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)8]);
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((long long int) ((unsigned int) arr_3 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (-(((unsigned long long int) ((long long int) var_1)))));
    var_21 = ((/* implicit */unsigned int) var_15);
}
