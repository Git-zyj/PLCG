/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92755
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 = (((_Bool)1) ? (((/* implicit */long long int) arr_2 [i_1])) : (var_11));
                    arr_9 [i_1] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) << ((((((_Bool)1) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) - (7088337680674961604LL)))))) ? (min(((-(arr_2 [i_0]))), (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0]))))) : (min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (var_3)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (1141188959)));
                var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_4);
}
