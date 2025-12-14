/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95495
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
    var_12 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [5ULL] = ((/* implicit */signed char) arr_3 [i_0]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) arr_3 [i_0]);
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_0]);
                            var_14 = ((/* implicit */unsigned short) max((var_14), (arr_3 [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
}
