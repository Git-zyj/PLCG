/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82033
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
    var_20 -= ((var_1) % (var_2));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 -= ((((/* implicit */int) arr_3 [i_1])) ^ (arr_0 [i_1]));
                arr_5 [i_0] = ((((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0])))) + (((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0])))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) min((arr_6 [i_0 + 2] [i_0 + 2] [i_2]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])) > (arr_8 [i_1] [i_4] [i_2] [1U])))))))));
                                arr_16 [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) arr_3 [i_0]))))), (arr_3 [i_0])));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0 + 1])), (arr_1 [i_0 - 1] [i_0 + 2]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))));
                arr_17 [i_0] = ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_0] [i_0]);
            }
        } 
    } 
}
