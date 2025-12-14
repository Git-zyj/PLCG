/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72196
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
    var_20 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_21 |= ((/* implicit */short) (unsigned short)6490);
                                arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) arr_10 [(unsigned short)16] [i_1] [11U] [i_3] [i_3] [i_4])), ((-(var_7)))))));
                                arr_12 [i_4] [i_3] [i_1] [i_1] [(signed char)9] = ((/* implicit */unsigned int) max((((((((/* implicit */int) var_19)) + (((/* implicit */int) (short)0)))) >> (((((/* implicit */int) arr_8 [i_1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [(short)19] [i_0])) - (9411))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_19)), ((unsigned short)6482))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)96))));
                }
            } 
        } 
    } 
}
