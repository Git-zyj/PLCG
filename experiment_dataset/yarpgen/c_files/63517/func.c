/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63517
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1687642635)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_3 [i_0] [i_1])))), (arr_4 [i_0] [i_0] [i_1])))));
                arr_6 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0 + 1])))) ? (min((arr_1 [i_1]), (arr_1 [i_0 + 1]))) : (((((arr_1 [i_0]) + (9223372036854775807LL))) >> (((548729028) - (548728976)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_7);
}
