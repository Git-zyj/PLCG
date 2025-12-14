/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57665
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_0), (((/* implicit */unsigned int) (signed char)-109)))), (((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_1] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_1 [i_0] [i_0 - 2]) : (((/* implicit */long long int) 2413819193U)))))));
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */int) (short)4826)) & (((/* implicit */int) arr_3 [i_0] [i_0] [10ULL])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_3);
}
