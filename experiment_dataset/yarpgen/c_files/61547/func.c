/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61547
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_7 [2ULL] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_1))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_0] [i_1] [i_4] |= ((/* implicit */short) arr_1 [i_4]);
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) max((min((arr_9 [i_0] [i_0] [i_3] [i_4]), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1 + 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4])))), (((/* implicit */unsigned long long int) -1872213456)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_10);
}
