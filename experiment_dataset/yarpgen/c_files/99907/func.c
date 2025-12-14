/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99907
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
    var_10 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) -3894651808493138331LL))));
                                var_12 = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [(unsigned char)16] [i_0]);
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */unsigned char) arr_1 [(signed char)6]);
            }
        } 
    } 
}
