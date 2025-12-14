/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79125
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [12U] [i_0] = ((/* implicit */signed char) min((((short) var_8)), (((/* implicit */short) var_2))));
                                var_20 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) min((arr_6 [i_4] [i_3] [i_2] [i_1]), (((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_3] [i_4]))))), (((var_3) ? (((/* implicit */int) arr_8 [i_0] [(short)13] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_10 [i_0] [i_3] [(_Bool)1] [i_1] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) arr_13 [i_0]);
                                var_22 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */_Bool) ((unsigned int) (signed char)57));
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_18 [6U] [i_1] [i_1] [i_1] [i_0])))));
                    var_25 = ((/* implicit */unsigned int) arr_0 [i_2]);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((long long int) var_10));
}
