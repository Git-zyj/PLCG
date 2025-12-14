/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80996
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
    var_12 = ((/* implicit */long long int) ((unsigned char) var_8));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (max((((/* implicit */unsigned long long int) arr_0 [i_2 - 1] [i_4])), (var_0))) : (((/* implicit */unsigned long long int) arr_12 [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4 + 1]))))));
                                var_14 = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_11 [i_0] [i_1 - 1] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (+(((/* implicit */int) max((var_3), (var_5))))));
}
