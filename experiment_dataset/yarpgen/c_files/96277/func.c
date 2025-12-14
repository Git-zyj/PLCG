/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96277
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
    var_19 ^= ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) min(((short)-12889), (var_9)))), (((((/* implicit */_Bool) -1174813928)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_5 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) (short)5391))));
                    var_20 = ((/* implicit */int) var_3);
                    arr_8 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_10)))));
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */unsigned char) min((((min((((/* implicit */unsigned int) var_10)), (var_17))) / (((((/* implicit */_Bool) 156191253U)) ? (4294967295U) : (1042362871U))))), (((/* implicit */unsigned int) var_5))));
    var_22 -= ((/* implicit */long long int) var_11);
}
