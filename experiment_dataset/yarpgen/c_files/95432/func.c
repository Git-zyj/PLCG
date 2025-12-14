/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95432
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
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    var_19 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] = ((unsigned char) ((short) (-(arr_0 [i_0]))));
                arr_6 [i_0] |= ((/* implicit */short) max((max(((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))), (max((((/* implicit */int) var_10)), (var_16))))), (((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)55595), (var_13))))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) ((int) arr_3 [i_1 + 1])));
            }
        } 
    } 
}
