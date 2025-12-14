/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74074
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 ^= ((/* implicit */long long int) (!((!(((((/* implicit */_Bool) (short)-9463)) || (((/* implicit */_Bool) 473066625))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_15 = var_10;
                                var_16 = ((/* implicit */unsigned int) ((unsigned char) ((arr_5 [i_2 - 2] [i_2 - 2] [0LL]) | (arr_5 [i_2 + 1] [i_3] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 8127792778464442263LL))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned char)116)))))))) : (var_11)))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((/* implicit */unsigned long long int) var_6)), (min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))))))));
}
