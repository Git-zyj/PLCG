/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76798
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((((/* implicit */_Bool) (short)18426)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) : (335528316962064461ULL));
                arr_7 [i_1] = ((/* implicit */short) (unsigned char)68);
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) var_12)) - (82)))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) 335528316962064461ULL))))))))));
    var_14 &= ((/* implicit */unsigned long long int) var_7);
}
