/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93499
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
    var_12 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) min((((/* implicit */short) var_6)), (var_8))))))), (max((17592186044415LL), (((/* implicit */long long int) -91301902))))));
                var_13 -= ((/* implicit */short) max((min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned int) min(((short)-27590), (((/* implicit */short) arr_4 [i_1])))))));
                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_2 [i_1]), (((/* implicit */unsigned int) arr_4 [i_1]))))), (max((((/* implicit */long long int) max((arr_2 [i_1]), (var_11)))), (max((-5674074736210777764LL), (((/* implicit */long long int) var_2))))))));
            }
        } 
    } 
    var_15 = max((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)1023)), (var_11)))), (var_4));
}
