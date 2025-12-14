/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68098
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) 13820053643049420279ULL);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((1351554209U), (1351554209U)));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((((/* implicit */int) var_8)) * (((/* implicit */int) var_2)))), (((/* implicit */int) var_7))))), (min((min((((/* implicit */unsigned int) (unsigned short)25703)), (2943413074U))), (((/* implicit */unsigned int) var_5))))));
}
