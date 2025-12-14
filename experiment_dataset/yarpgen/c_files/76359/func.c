/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76359
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
    var_20 |= var_5;
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) ((unsigned short) var_7))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) arr_6 [2U]);
                arr_7 [i_0] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [(short)5] [i_0]))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_5);
}
