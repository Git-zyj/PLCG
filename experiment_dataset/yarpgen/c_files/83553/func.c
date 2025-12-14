/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83553
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
    var_12 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((signed char) arr_15 [i_1 + 2] [i_4 - 3] [i_4] [i_4 + 1] [i_4 - 1]));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)0)) - (((/* implicit */int) var_5)))), (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) arr_2 [i_0]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [6LL] [i_0] [6LL] [i_3])) ? (((/* implicit */int) var_0)) : (var_6))))));
                                var_14 += ((/* implicit */unsigned long long int) 8474166318446555971LL);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max(((_Bool)0), ((_Bool)1))))));
                }
            } 
        } 
    } 
}
