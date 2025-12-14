/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63542
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [0ULL] [0ULL] [i_0] &= max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_1)))) || (((/* implicit */_Bool) arr_5 [i_0] [i_1])))), (var_2));
                arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((unsigned long long int) arr_2 [i_0] [i_0])));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_4);
}
