/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7356
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */unsigned long long int) ((short) max((((/* implicit */short) ((signed char) arr_4 [i_0] [i_0]))), (max(((short)756), (((/* implicit */short) var_2)))))));
                    arr_8 [i_1] [6U] [i_2] [3U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((var_13) % (((/* implicit */long long int) ((/* implicit */int) (short)759))))), (((/* implicit */long long int) max((var_10), (arr_3 [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_3);
    var_16 = ((/* implicit */unsigned long long int) var_2);
    var_17 = ((/* implicit */unsigned long long int) (signed char)-5);
}
