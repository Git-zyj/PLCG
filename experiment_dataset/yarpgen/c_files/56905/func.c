/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56905
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((arr_2 [i_1] [i_1]), (((/* implicit */unsigned short) arr_1 [i_1])))))));
                var_17 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) & (((arr_0 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522)))))))), (((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0]) : (var_16))) - (arr_4 [i_0] [i_1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)20323)) ? (-1528824607) : (-1764122019))))));
}
