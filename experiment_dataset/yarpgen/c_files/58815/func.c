/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58815
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [(unsigned short)11] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_4 [i_1 + 3] [i_0])) : (((/* implicit */int) var_2))))));
                    var_10 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11684))) / (arr_7 [i_0 - 1] [i_1] [i_2] [i_2])))) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (signed char)32))))) | (((unsigned long long int) arr_3 [i_0 - 2] [i_0 + 2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)49)) || (((/* implicit */_Bool) (signed char)-1))))), (min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) (signed char)64)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                                var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 ^= max(((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_7)), (16197511500893191915ULL))))));
    var_13 = ((unsigned short) var_5);
    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((+(var_6))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)21))))) : (var_9)))));
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_9), (((65535ULL) / (((/* implicit */unsigned long long int) 31)))))))));
}
