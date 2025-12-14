/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57197
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (-(var_1)));
                    arr_12 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0 + 1]))) ? (((/* implicit */int) ((_Bool) (!(var_7))))) : (767511778)));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((var_8) + (2147483647))) << (((((/* implicit */int) arr_6 [i_0] [(unsigned short)6])) - (214)))))) ? (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (unsigned short)18623)) : (((/* implicit */int) (unsigned char)27))))))))));
                }
            } 
        } 
    } 
    var_14 &= var_5;
}
