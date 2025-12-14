/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66281
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
    var_16 |= ((/* implicit */short) var_15);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_17 = arr_9 [(signed char)11] [i_1] [i_0];
                    var_18 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_9 [7ULL] [i_2] [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) arr_3 [i_3 + 3] [i_4 - 1]);
                                var_20 = ((/* implicit */long long int) arr_9 [i_3 - 1] [i_1] [i_0]);
                                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_12 [i_3] [i_3] [i_3] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2))))))))) : (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (var_8)))));
    var_22 = var_8;
    var_23 = ((/* implicit */signed char) var_10);
}
