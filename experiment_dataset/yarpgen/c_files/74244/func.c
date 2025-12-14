/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74244
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
    var_11 = ((/* implicit */long long int) var_0);
    var_12 = ((/* implicit */short) ((var_6) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (((long long int) var_8)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((((((/* implicit */int) var_3)) / ((-(var_4))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_2 [10LL])) ? (((/* implicit */int) (short)-878)) : (((/* implicit */int) arr_0 [i_0] [i_1 + 1])))))))))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)872)))))));
                                var_15 = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
