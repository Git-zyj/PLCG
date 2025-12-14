/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71542
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_9))));
    var_18 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_3)))))));
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((unsigned long long int) var_8)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1]))), (((((/* implicit */int) ((short) (short)16))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (var_4))))))));
                var_21 -= var_4;
                var_22 = ((/* implicit */_Bool) var_6);
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_1);
}
