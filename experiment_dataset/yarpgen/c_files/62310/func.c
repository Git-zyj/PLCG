/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62310
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((long long int) ((((long long int) var_6)) >> (((max((2690652392U), (((/* implicit */unsigned int) (short)8191)))) - (2690652334U))))));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */long long int) var_0);
                                var_13 = ((/* implicit */short) min((var_13), (arr_9 [i_2] [i_3])));
                            }
                        } 
                    } 
                } 
                var_14 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) ^ (((/* implicit */int) arr_2 [i_0]))))) ? (((int) arr_7 [i_0] [i_1] [i_0] [1U])) : (((/* implicit */int) arr_2 [i_1]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) (((((+(var_4))) + (((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (var_7)))))) - ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (2870430618U)))))));
}
