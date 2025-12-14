/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83024
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
    var_11 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0] = (!(((/* implicit */_Bool) (signed char)34)));
                                var_12 |= ((/* implicit */_Bool) arr_3 [i_2]);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_1])) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_1] [10] [10] [10]))))), ((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_1);
    var_14 &= ((/* implicit */unsigned int) min((var_0), (((/* implicit */long long int) ((_Bool) var_4)))));
}
