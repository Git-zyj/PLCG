/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7963
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
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) min((((short) arr_7 [i_4] [i_2] [i_1] [i_0])), (((/* implicit */short) (_Bool)1))));
                                var_15 = ((/* implicit */short) min((((unsigned long long int) ((unsigned short) 2147483647U))), (((/* implicit */unsigned long long int) 330103808))));
                                arr_10 [i_2] = arr_5 [i_0] [i_1];
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) -330103809);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) (_Bool)1);
}
