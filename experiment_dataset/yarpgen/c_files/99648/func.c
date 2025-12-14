/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99648
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) min((min((arr_2 [i_1 + 4] [i_1 - 1]), (arr_2 [i_1 + 3] [i_1 + 1]))), (((((/* implicit */_Bool) (+(3753738508U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1] [i_1 + 1]))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(min((((/* implicit */long long int) arr_0 [i_0])), (var_3))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_2);
    var_22 = ((/* implicit */unsigned char) var_9);
}
