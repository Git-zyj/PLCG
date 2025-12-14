/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59434
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) min((arr_0 [(unsigned short)18]), (((/* implicit */long long int) var_5)))))));
                var_11 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_0 [i_0]))), (((/* implicit */long long int) var_4))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [(unsigned char)20] &= ((/* implicit */int) min(((~(((((/* implicit */_Bool) 1846815471)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (1575897970176921550LL))))), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (var_6))))));
                            var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)11421)) ? (arr_9 [i_1] [i_2 - 4] [i_2] [i_2] [i_2 - 4] [i_2]) : (arr_9 [i_2] [i_2 - 2] [i_2] [i_2] [i_2 - 2] [i_2]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_2] [i_2 + 1] [i_2] [i_2 + 4] [i_2 + 2] [i_2]))))));
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) var_7)))) ? (597080048U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))));
                            var_14 = ((/* implicit */unsigned int) arr_7 [i_0] [i_2]);
                            var_15 = ((/* implicit */unsigned int) (short)26726);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) var_7))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)28499))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (11603579311394242659ULL)));
}
