/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76329
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
    var_20 = var_7;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_1] [i_1] [i_1]);
                var_21 ^= ((/* implicit */signed char) arr_4 [i_0 + 1]);
                var_22 = ((/* implicit */signed char) var_8);
                arr_7 [i_0 + 1] [i_1] |= ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_5 [i_0 + 1])), (min((((/* implicit */unsigned short) arr_4 [i_0])), (arr_0 [i_1] [(signed char)3])))))), (max((((/* implicit */long long int) var_18)), (min((((/* implicit */long long int) arr_4 [i_0])), (var_3)))))));
            }
        } 
    } 
    var_23 = var_13;
}
