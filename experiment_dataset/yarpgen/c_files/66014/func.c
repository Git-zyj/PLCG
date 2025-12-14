/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66014
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_10 = var_8;
                    var_11 = ((/* implicit */int) max((1654543665281160762LL), (((/* implicit */long long int) 1151010779U))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 24; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) 2121578804);
                                arr_13 [i_0 - 2] [i_1 - 1] [i_2] [(short)4] [(unsigned short)6] [i_0] [i_4] = ((/* implicit */long long int) arr_8 [i_2] [i_2] [i_2] [i_2]);
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4 + 1] [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_4 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 + 1] [i_0]))) : (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4 - 1] [i_0])) ? (((/* implicit */int) arr_3 [i_4 + 1] [i_0])) : (((/* implicit */int) arr_3 [i_4 - 1] [i_0])))))));
                                arr_15 [i_1] [i_0] [i_1 - 3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) -1144943746);
}
