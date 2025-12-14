/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63265
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [8LL] [i_0] [(short)3] [i_2] = ((/* implicit */short) ((int) ((((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_1))))) <= (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_7))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_13 = ((((/* implicit */int) ((signed char) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_11)))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_3))))) > (var_9)))));
                                arr_14 [i_0] [i_1 - 1] [i_3] [i_0] [i_4] = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_0))));
}
