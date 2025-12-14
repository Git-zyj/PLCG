/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89295
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
    var_15 = ((/* implicit */unsigned short) (!(var_2)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 |= ((/* implicit */unsigned short) arr_3 [i_1] [i_0] [i_0]);
                var_17 -= ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) (short)1798)));
                var_18 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)267))))), (arr_4 [i_0]))), (((/* implicit */unsigned int) ((int) arr_1 [i_1] [i_0])))));
                var_19 = ((min((1238420560590394867ULL), (((unsigned long long int) arr_1 [i_0] [i_1])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
            }
        } 
    } 
}
