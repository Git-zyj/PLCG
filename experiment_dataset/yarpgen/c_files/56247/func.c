/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56247
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
    var_11 = ((/* implicit */signed char) var_2);
    var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-23426))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_4 [i_0] [i_1]))) ? (((/* implicit */long long int) (-(var_10)))) : (((long long int) arr_4 [i_0] [i_1]))));
                arr_7 [i_0] [(_Bool)1] = arr_5 [i_0] [i_0] [(unsigned char)17];
            }
        } 
    } 
    var_13 &= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (16153645647211947227ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))), (var_5))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((unsigned long long int) var_4))));
}
