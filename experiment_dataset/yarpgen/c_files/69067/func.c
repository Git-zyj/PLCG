/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69067
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_2] [(unsigned char)7] [i_3] [i_4] = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [6] [i_1] [i_4]);
                                arr_17 [0U] [i_1] [i_1] [0U] [i_2] [(unsigned short)7] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_11 [i_2 - 1])), (var_1)))), (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned long long int) arr_11 [i_2 - 2]))))));
                            }
                        } 
                    } 
                    var_12 = ((int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_14 [i_2] [i_2]) : (var_3)))) : (var_5)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) ((((unsigned long long int) (_Bool)1)) != (((/* implicit */unsigned long long int) var_1))));
}
