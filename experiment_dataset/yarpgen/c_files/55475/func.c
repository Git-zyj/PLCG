/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55475
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (unsigned char)103);
                    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_6 [i_0 - 2] [0] [(short)1]), (((/* implicit */unsigned int) (signed char)127)))))))), (((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_5 [i_0 + 1])))));
                    var_18 |= ((int) (-(((/* implicit */int) (short)27884))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) >= (0U))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (short)-10789))))), (var_1)));
    var_20 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13097))) : (((553846684U) - (553846684U))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) <= (1972370641)));
    var_22 = ((/* implicit */int) var_6);
}
