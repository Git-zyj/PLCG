/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89107
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
    var_16 = var_13;
    var_17 = ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1] [i_0]);
                var_18 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((var_11), (var_1))))));
                                var_20 = ((/* implicit */unsigned int) arr_1 [i_2] [i_2]);
                                var_21 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) max((var_6), (arr_5 [i_3] [i_3]))))), (max((((/* implicit */long long int) var_1)), (arr_3 [i_3] [i_3])))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
}
