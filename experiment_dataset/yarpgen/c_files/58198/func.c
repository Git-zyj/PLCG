/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58198
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
    var_17 = ((/* implicit */unsigned int) var_4);
    var_18 += ((/* implicit */_Bool) var_14);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)0)))) << (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1 - 1])) : (((/* implicit */int) (_Bool)1))))) % (((((/* implicit */_Bool) (unsigned short)17345)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) : (var_15)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_20 |= (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_3] [i_1 - 1]))) | (4294967277U))));
                                arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) - (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) 1893637306U);
}
