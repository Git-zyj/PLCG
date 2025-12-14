/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61047
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)205)) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (9223372036854775807LL))), (((/* implicit */long long int) ((arr_2 [i_1]) == (arr_2 [i_0]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_0);
}
