/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82762
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
    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) & (var_7))) | (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) 3473967439U);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-64))));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) ((_Bool) min((arr_13 [i_0 + 2] [i_1] [i_4] [i_1] [i_4] [i_1]), (((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_12);
}
