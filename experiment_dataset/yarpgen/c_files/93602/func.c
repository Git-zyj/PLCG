/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93602
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
    var_16 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (((+(arr_6 [i_1] [i_0 - 1]))) != (max((max((arr_6 [i_0 + 3] [i_1]), (((/* implicit */long long int) var_0)))), (((((/* implicit */_Bool) 69713883)) ? (((/* implicit */long long int) -69713896)) : (9223372036854775807LL))))))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (min((-159824676461166650LL), (((/* implicit */long long int) var_5))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1] [i_1]))))), (((unsigned long long int) var_15))))));
                            }
                        } 
                    } 
                } 
                var_19 += ((long long int) ((((/* implicit */_Bool) 69713899)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_0 + 3]))));
                var_20 = ((/* implicit */int) max((var_20), ((+(((/* implicit */int) arr_2 [1]))))));
            }
        } 
    } 
}
