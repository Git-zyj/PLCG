/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74546
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
    var_20 |= var_4;
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_9 [i_1] [i_2 - 1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_4 [i_0 + 1])) & (((/* implicit */int) arr_8 [i_1])))));
                            arr_10 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)));
                            arr_11 [i_0 - 2] [i_1] [i_1] [i_1] [i_3] [i_0 - 2] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
