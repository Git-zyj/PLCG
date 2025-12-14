/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84773
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
    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 36028797018963967ULL)) ? (min((var_1), (((/* implicit */unsigned long long int) var_2)))) : (min((((/* implicit */unsigned long long int) (short)-31173)), (var_8)))))) && (((/* implicit */_Bool) var_3))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((unsigned long long int) (-(((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) - (-1LL))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-((+(var_0))))))));
                                arr_13 [i_2] [i_2] [i_2] [1U] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 77928183U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-30659)), (1209785392)))) ? (var_13) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((var_2) + (((/* implicit */long long int) ((/* implicit */int) (short)3))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_5)) : (var_2)))))));
}
