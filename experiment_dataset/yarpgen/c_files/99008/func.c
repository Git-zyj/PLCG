/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99008
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)30195))))) > (((arr_9 [i_1] [i_1] [i_1 - 1] [i_3] [i_1]) ? (var_12) : (arr_7 [i_1] [i_1] [i_1 - 1] [i_1 + 1])))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_11 [i_2] [i_0]))));
                                var_16 -= ((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_4]) && (((/* implicit */_Bool) ((arr_9 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]) ? (((/* implicit */int) (short)-32749)) : (-1759607232))))));
                                var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_7 [(short)13] [i_1] [i_1 - 1] [i_1 + 1])))));
                            }
                        } 
                    } 
                    var_18 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30203)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) min((((/* implicit */short) arr_6 [i_0] [i_0] [i_0])), ((short)32739)))) : ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    arr_13 [i_1 - 1] [i_0] = ((/* implicit */long long int) ((unsigned char) ((arr_11 [i_0] [i_1 - 1]) < (((/* implicit */int) var_7)))));
                }
            } 
        } 
    } 
    var_19 = var_2;
    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(var_11))))));
}
