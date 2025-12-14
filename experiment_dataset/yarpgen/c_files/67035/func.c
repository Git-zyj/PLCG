/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67035
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (var_1)));
    var_19 = ((/* implicit */long long int) var_15);
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (((var_13) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4843))) : (var_0)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = var_15;
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((_Bool) (unsigned short)60716)))));
                arr_4 [(unsigned short)4] [i_1] |= ((/* implicit */unsigned char) -6598669912884661744LL);
                var_23 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) >> (((((/* implicit */int) (unsigned short)28370)) - (28358)))))), ((-(arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
}
