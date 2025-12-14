/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82332
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [(short)12] [(signed char)6] [(signed char)6] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_6))));
                                var_11 += ((/* implicit */int) max(((unsigned short)51570), (((/* implicit */unsigned short) (signed char)112))));
                                var_12 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-93)), (arr_1 [i_2 - 1] [i_1 - 1])))));
                                arr_12 [i_0] [i_1 - 4] [i_2] [i_2] [i_3 - 1] [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_8 [i_2] [i_3 + 1] [i_3 + 1] [i_2] [i_1] [i_2])))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */long long int) arr_1 [(unsigned short)11] [(unsigned short)11]);
                arr_13 [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned char) var_9);
    var_15 = var_10;
}
