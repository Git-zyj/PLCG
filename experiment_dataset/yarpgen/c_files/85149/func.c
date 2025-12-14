/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85149
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
    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)2090)), (var_15)))) | (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_15)) : (var_11)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_4] [i_4] [i_3] [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (((var_14) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_8 [(unsigned short)3] [(unsigned short)3] [i_2] [i_3 - 2] [i_3 - 2] [i_2]))))))))));
                                var_20 = ((/* implicit */int) arr_10 [i_4] [i_4] [i_3 - 1] [i_0 + 1]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) (+(((unsigned int) arr_5 [0] [i_1] [i_0 + 2] [i_0]))));
                    arr_12 [i_2] [i_0] [i_0] [(short)4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((_Bool) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) var_7))))));
}
