/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7917
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((_Bool) (+(arr_4 [i_0] [i_0]))));
                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (short)-12165)) : (((/* implicit */int) var_7))))) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) ((short) var_14))));
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_15)))) ? (((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */int) var_2))))) : (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (var_3)))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))))));
    var_21 ^= ((/* implicit */signed char) max((((((/* implicit */int) ((short) var_7))) / (var_17))), (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)12176)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) 6855561428299281228LL)))))))));
}
