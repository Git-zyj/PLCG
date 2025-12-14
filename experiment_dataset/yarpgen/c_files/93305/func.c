/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93305
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
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_1 [i_0] [i_1]))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483620)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) == (-1094235057))))))) ? (((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208)))))) : ((-(arr_1 [i_0 - 2] [i_0 + 3])))));
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0 - 1]))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))) | (var_2)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_1);
    var_20 = ((/* implicit */unsigned char) var_7);
    var_21 = var_12;
}
