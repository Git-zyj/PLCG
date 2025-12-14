/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57913
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (arr_0 [i_0]))))));
                var_18 &= 3453792344U;
                var_19 = ((/* implicit */unsigned long long int) max(((~(arr_2 [i_0] [i_0] [i_1]))), (((/* implicit */unsigned int) (~(6))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (~(-1)));
}
