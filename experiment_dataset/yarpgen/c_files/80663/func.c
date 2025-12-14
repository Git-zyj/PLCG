/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80663
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
    var_12 |= ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) max(((signed char)-50), ((signed char)-37)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 = arr_0 [i_0] [i_2];
                    arr_10 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_14 = min((((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_1))), (((/* implicit */long long int) ((258904328) + (((/* implicit */int) (unsigned short)49600))))));
    var_15 = ((/* implicit */int) ((short) (unsigned short)10473));
}
