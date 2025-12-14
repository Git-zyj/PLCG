/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60396
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
    for (short i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))) : (var_11))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0 - 1] [i_1 - 1]), (arr_1 [i_0 - 4] [i_2])))))));
                    var_14 *= ((/* implicit */unsigned long long int) min(((short)2808), ((short)-2808)));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */short) min((((/* implicit */unsigned int) (short)0)), (((((/* implicit */_Bool) (+(var_7)))) ? (max((((/* implicit */unsigned int) (unsigned char)48)), (var_9))) : (var_9)))));
    var_16 = ((/* implicit */short) var_9);
}
