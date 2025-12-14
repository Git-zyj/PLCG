/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6632
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                    arr_7 [i_1] [i_1] [i_0 + 4] [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-24257))))) ? ((+(arr_6 [i_0] [i_1] [i_2]))) : (arr_2 [i_2 + 2] [i_2 - 1] [i_2]))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (var_4)));
    var_12 -= ((/* implicit */unsigned long long int) (short)-2193);
}
