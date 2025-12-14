/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83382
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)19433)), (9227732198571181692ULL)));
                var_13 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_0] [i_1])), (var_3)))), (max((((/* implicit */long long int) arr_2 [i_0] [i_0])), (-4137281581293990211LL))))), (min((min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_6)))), (min((var_2), (arr_4 [i_0] [i_1] [(signed char)15])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) (short)-7230)), (240633768)))), (min((((/* implicit */unsigned int) var_8)), (var_7)))))), (min((((/* implicit */long long int) max((var_6), (var_7)))), (min((((/* implicit */long long int) var_7)), (var_10))))))))));
}
