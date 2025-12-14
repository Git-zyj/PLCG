/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9416
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
    var_13 += ((/* implicit */_Bool) ((((((4294967287U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2656))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    var_14 = var_8;
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_11))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [(unsigned char)10] = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_1] [i_0]) && (arr_3 [i_1] [i_0])));
                var_16 += ((arr_3 [i_0] [i_0]) && (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (arr_2 [i_1] [i_1])));
            }
        } 
    } 
}
