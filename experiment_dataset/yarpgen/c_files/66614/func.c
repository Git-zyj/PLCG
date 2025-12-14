/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66614
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
    var_20 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [13ULL] = ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20175))));
                    var_21 = arr_3 [i_0];
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_3))));
                    arr_8 [4LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 1])) - (((/* implicit */int) ((_Bool) arr_1 [i_0])))));
                }
            } 
        } 
    } 
}
