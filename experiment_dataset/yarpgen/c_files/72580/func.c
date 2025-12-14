/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72580
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
    var_11 = ((/* implicit */unsigned short) var_0);
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((var_1) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */int) var_10)) : ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))));
    var_13 = ((/* implicit */long long int) var_7);
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967295U))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_1]) + (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_16 = ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1] [i_2] [i_1 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [(unsigned short)4]))))));
                                arr_14 [i_0] [i_3] [i_2] [i_2] [i_3] [i_2] = (~((+(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (1U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
