/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86863
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) 3569088634U)), ((~(max((((/* implicit */long long int) arr_7 [i_0] [(unsigned char)10] [i_2] [i_2])), (-440713449462974876LL)))))));
                                var_11 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) arr_10 [i_2] [i_2 + 2] [i_2 + 2] [i_4] [i_4] [i_4])) * (3401208159U))) | (3401208174U)));
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) min((min((((((/* implicit */long long int) 1328118583)) ^ (arr_6 [i_4] [(signed char)12] [i_1] [i_4]))), (var_8))), (((/* implicit */long long int) ((unsigned char) var_1))))))));
                            }
                        } 
                    } 
                    var_13 = var_8;
                    arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) 3401208174U);
                    arr_16 [i_2] [i_1] = ((/* implicit */long long int) var_9);
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)4))))), (((((/* implicit */_Bool) 3401208174U)) ? (max((((/* implicit */long long int) var_5)), (var_3))) : (((/* implicit */long long int) var_4))))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_1)))) ? ((~(((/* implicit */int) (unsigned short)4)))) : (((/* implicit */int) (unsigned char)167))))), (((((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned char)163)))) ? (173147017086699257ULL) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) var_2))))))))))));
}
