/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89094
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_0] [i_1] = ((((long long int) var_10)) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (-325543920) : ((-(-325543919)))))));
                    arr_7 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_8);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_3 - 1]))) != (var_9)))), ((-(((/* implicit */int) var_4))))));
                                arr_13 [i_0 - 1] [i_0 + 2] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1] [i_1] [i_3 - 1] [i_1] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_0);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5))));
}
