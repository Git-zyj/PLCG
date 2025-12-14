/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9605
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
    var_18 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (((unsigned int) 343678550U))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) 3506432952U)), (var_7)))));
                                var_20 -= ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4896))) - (min((((/* implicit */unsigned long long int) (short)-4890)), (var_5)))))));
                                var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned int) var_17)) : (2616534267U)))), (max((7434288240531415824LL), (((/* implicit */long long int) arr_9 [i_1 + 2] [i_1] [i_2]))))));
                                arr_12 [2ULL] [9LL] [i_1] [(unsigned char)4] = ((/* implicit */_Bool) ((unsigned int) max((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (short)3904)) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (-4205411340815854156LL)))))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) 1678433032U))))), (max((arr_3 [12] [i_1]), (((/* implicit */unsigned long long int) arr_10 [i_1 + 2] [i_1] [(unsigned char)12] [i_1 - 1] [i_1 + 2] [i_1]))))));
                }
            } 
        } 
    } 
}
