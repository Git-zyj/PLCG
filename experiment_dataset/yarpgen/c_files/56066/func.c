/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56066
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_7)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!((_Bool)0))) ? (max((arr_7 [i_2]), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164))) * (var_2))))) : (max((((/* implicit */unsigned long long int) (unsigned char)176)), (17825002368883211443ULL)))));
                            arr_11 [i_0] [i_0] [i_0] [12LL] [i_1] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)17] [i_2] [i_3 + 2])) || (((/* implicit */_Bool) 18446744073709551615ULL)))) ? ((-(1831712740))) : (max((1831712746), (-1831712741))))), ((+(((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) & (1057469079)))))));
                            var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
                arr_12 [i_1 - 1] = ((/* implicit */long long int) ((-1831712758) == (-1831712747)));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (-(1831712752))))) ? (max((var_10), (((/* implicit */unsigned long long int) min((1831712752), (-929796612)))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1831712757))))));
}
