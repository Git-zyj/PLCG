/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9533
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
    var_10 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_1] [i_1 - 1] [i_1 - 1])))));
                    var_11 = ((((arr_5 [i_0] [i_2] [i_2] [i_2]) || (arr_5 [i_0] [i_0] [i_1] [i_2]))) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2])));
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((var_3), (var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_2))))));
}
