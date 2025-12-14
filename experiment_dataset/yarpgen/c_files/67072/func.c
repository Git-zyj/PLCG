/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67072
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
    var_17 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_16)), (((unsigned int) 17071557542736862425ULL))));
    var_18 = ((/* implicit */long long int) var_4);
    var_19 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [15ULL] = ((/* implicit */unsigned short) ((unsigned char) min((max((var_5), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (signed char)13)))));
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2 + 1] [i_2 + 1])) ? (12785431442102631302ULL) : (0ULL)))));
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (signed char)88);
                }
            } 
        } 
    } 
}
