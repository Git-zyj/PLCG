/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83270
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
    var_13 &= ((/* implicit */unsigned int) (((((~(var_0))) | (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (2001587366U)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_6))))) & ((~(((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = (((~(((/* implicit */int) max((((/* implicit */short) arr_3 [(short)18] [i_1] [(short)18])), (var_6)))))) != (((/* implicit */int) (short)29410)));
                    arr_8 [i_0] [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) arr_2 [i_2] [5U]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) var_7)) : (var_0)))))));
    var_15 = ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned long long int) ((((var_4) + (2147483647))) << (((((((/* implicit */int) var_12)) / (((/* implicit */int) var_11)))) - (1))))))));
}
