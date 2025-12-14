/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82779
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_17);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)13410)) : (arr_3 [i_0] [i_0])))));
                var_18 += ((/* implicit */long long int) (short)32767);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_10);
    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_12)), (814945061U))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)31373)), (var_4))))))) >= (var_3)));
    var_21 = ((/* implicit */_Bool) (((_Bool)1) ? ((~(5033992401424835995ULL))) : (((/* implicit */unsigned long long int) var_13))));
    var_22 = (-(var_4));
}
