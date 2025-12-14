/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55479
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
    var_11 &= ((/* implicit */short) min((((((/* implicit */unsigned int) var_1)) / (((802154656U) << (((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -4572573700324277736LL)) ? (((/* implicit */int) (short)-14193)) : (((/* implicit */int) (signed char)124))))), (max((4294967270U), (3492812639U)))))));
    var_12 = min((2074906181U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)49298)) : (((/* implicit */int) (_Bool)0))))));
    var_13 = ((/* implicit */unsigned int) ((var_3) >> (((((((((/* implicit */_Bool) (unsigned char)161)) && (((/* implicit */_Bool) var_10)))) ? (562949936644096LL) : (((/* implicit */long long int) (-(2596210905U)))))) - (562949936644041LL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */int) var_7)) ^ (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1])) ? (((/* implicit */int) (short)-14193)) : (((/* implicit */int) arr_4 [i_1 + 1] [(short)1] [(signed char)1])))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14192)) ? (max((((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57884))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)112)) || (((/* implicit */_Bool) var_3))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 2])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) max((var_9), (var_9)))))) <= (((/* implicit */int) ((short) ((((-562949936644110LL) + (9223372036854775807LL))) << (((6U) - (6U)))))))));
}
