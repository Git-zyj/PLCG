/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77811
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) arr_10 [i_3 - 1] [i_3] [i_2] [i_1] [i_0] [i_0]);
                            var_19 *= ((/* implicit */unsigned char) arr_2 [i_2]);
                        }
                    } 
                } 
                var_20 -= ((/* implicit */int) arr_8 [i_0] [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_9);
    var_22 = ((/* implicit */short) var_5);
}
