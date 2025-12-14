/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66699
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
    var_12 = ((long long int) max((var_2), (((/* implicit */unsigned short) var_11))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) 2788737003U);
                var_13 -= ((/* implicit */int) var_1);
                var_14 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_1 [i_1])), ((~(arr_4 [i_0 - 1]))))), (((((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0 - 1] [12U] [0LL])))) % (((((arr_2 [i_0 - 2] [11U] [i_0]) + (9223372036854775807LL))) << (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
            }
        } 
    } 
}
