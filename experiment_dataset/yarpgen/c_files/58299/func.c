/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58299
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) var_13);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [(short)7] [i_0] [(unsigned short)5] [i_0] = ((/* implicit */unsigned long long int) var_2);
                            arr_13 [i_0] [i_1] [i_2] [i_3 + 2] [i_3 + 2] = ((/* implicit */long long int) var_0);
                            arr_14 [i_1] [i_2] [8LL] [i_3] [i_1] = ((/* implicit */short) var_13);
                            arr_15 [i_0] [i_0] [(unsigned short)4] [i_3] = ((/* implicit */unsigned long long int) var_14);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (var_8)));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_5);
}
