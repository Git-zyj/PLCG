/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59372
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
    var_17 |= ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_11 [(short)6] [i_2] [i_3] [i_4])) ? (arr_11 [(signed char)6] [(unsigned char)14] [i_2] [(unsigned char)14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (var_12))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_0] [i_0] = ((/* implicit */signed char) min((((unsigned int) ((unsigned int) var_13))), (((/* implicit */unsigned int) max((((var_3) / (var_3))), (((/* implicit */int) arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((unsigned short) arr_5 [i_0] [i_0]));
                                arr_22 [i_6] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (signed char)127))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((unsigned int) var_8)), (((/* implicit */unsigned int) ((int) var_15)))))) ? (max((var_15), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) -1046728520)) < (min((((/* implicit */unsigned int) max((var_7), (((/* implicit */signed char) var_2))))), (1492161117U)))));
}
