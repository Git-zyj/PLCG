/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55061
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
    var_18 = ((/* implicit */long long int) max((((/* implicit */signed char) ((_Bool) ((long long int) var_15)))), (min((((/* implicit */signed char) var_12)), ((signed char)0)))));
    var_19 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (+((-(((/* implicit */int) ((_Bool) (signed char)63)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) % (arr_4 [i_1]))) + (((/* implicit */long long int) ((unsigned int) arr_4 [i_1])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) & (((((/* implicit */_Bool) (signed char)-64)) ? (7832445155807537029ULL) : (((/* implicit */unsigned long long int) 439364811U))))))));
                arr_7 [i_0] = min((max((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) 89486480U)))), (((/* implicit */unsigned long long int) var_2)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_2] [i_0] [i_2] |= ((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_2]);
                            var_20 = ((/* implicit */unsigned short) (((-((-(var_6))))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_11))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
