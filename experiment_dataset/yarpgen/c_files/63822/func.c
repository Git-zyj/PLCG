/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63822
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
    var_11 = ((/* implicit */unsigned int) min((var_3), (var_4)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_4);
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */signed char) (+(max((((unsigned int) var_6)), (max((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (var_6)))))));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((4092), (2147483647)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) var_4);
    var_13 = var_0;
}
