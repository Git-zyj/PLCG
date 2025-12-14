/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67233
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2])) & (((/* implicit */int) max((arr_10 [(signed char)12] [(signed char)4] [i_1 - 2] [i_1 + 1]), ((short)-31715))))));
                                var_15 = ((/* implicit */unsigned int) ((long long int) (signed char)127));
                            }
                        } 
                    } 
                } 
                var_16 = min((((/* implicit */int) var_2)), (((((((/* implicit */int) (signed char)-127)) + (2147483647))) >> (((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [16])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)230)))) - (992))))));
                arr_12 [i_1] = ((/* implicit */short) ((min(((+(var_12))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) arr_9 [14] [i_1] [i_0] [i_1] [i_0]))))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
}
