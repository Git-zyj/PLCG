/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55524
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
    var_20 = ((/* implicit */unsigned short) var_9);
    var_21 = var_4;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                    var_23 = ((/* implicit */short) 4079109195685981291ULL);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = arr_3 [i_2] [i_4];
                                var_24 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (arr_10 [i_0] [i_4] [i_4] [i_3] [i_4] [i_2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
