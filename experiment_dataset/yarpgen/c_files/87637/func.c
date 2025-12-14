/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87637
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
    var_13 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (var_7))) > (((/* implicit */int) var_6))))) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= ((+(-615033332))))))));
    var_14 = ((/* implicit */unsigned short) -615033332);
    var_15 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 += max((((((long long int) -615033332)) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (-615033301)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [(short)11] [i_0]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) var_9);
                                var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_0)), (4294967295U))), (1U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_12) : (4294967273U))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
}
