/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60798
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_11 *= ((/* implicit */short) min((var_10), (((/* implicit */unsigned long long int) var_2))));
                    arr_7 [i_2 - 2] [i_1 + 2] [i_0] |= ((/* implicit */unsigned short) ((short) max((((/* implicit */long long int) min((arr_3 [i_0] [i_1 + 2] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0]))))), (arr_6 [i_0] [i_1 + 3] [i_2 - 2] [i_2 - 2]))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_2)), (min((0U), (((/* implicit */unsigned int) var_9)))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_13 = ((/* implicit */short) var_0);
}
