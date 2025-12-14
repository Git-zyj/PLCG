/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75353
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [(unsigned char)4])))), (((/* implicit */int) arr_2 [i_0]))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_1] [(short)16]);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_15);
    var_19 = ((/* implicit */int) var_5);
    var_20 = ((/* implicit */long long int) max((min((((/* implicit */int) (unsigned short)22568)), (((int) var_8)))), (((/* implicit */int) (unsigned short)65533))));
}
