/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56802
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((long long int) var_14)))))));
    var_18 = ((/* implicit */int) (+(var_8)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((int) (!(((/* implicit */_Bool) var_8))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((int) min((max((((/* implicit */int) var_10)), (var_2))), ((+(((/* implicit */int) var_15)))))));
            }
        } 
    } 
    var_20 = ((signed char) var_10);
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(var_10)))), (((long long int) var_2)))))));
}
