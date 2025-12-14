/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55738
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
    var_12 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (~(251660473U)))) | (((4281184915197090783ULL) | (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) (signed char)-37))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_11);
                var_13 *= arr_2 [i_1];
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) min((var_9), (((/* implicit */signed char) arr_0 [i_0] [i_1])))))))) <= (min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_1] [3ULL]))))));
            }
        } 
    } 
}
