/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89877
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
    var_17 = ((/* implicit */unsigned long long int) var_3);
    var_18 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3034124642U)) ? (288230376151711743LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */long long int) (+(arr_1 [i_1])));
                                arr_14 [i_3] [i_3] [i_2 - 3] [i_1] [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) ((min((3034124632U), (((/* implicit */unsigned int) 1426115938)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [(signed char)2] [i_0])) ? (var_4) : (((/* implicit */int) arr_7 [i_4] [i_3] [i_1])))))))) ? (max((min((((/* implicit */unsigned long long int) arr_8 [i_0])), (arr_11 [i_0] [i_0] [i_0] [9LL] [i_4] [i_2] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)28)) : (var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 1950644731)) > (3034124642U))))));
                                var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_1 [i_2 + 1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) var_13);
            }
        } 
    } 
    var_22 |= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */unsigned long long int) var_5)) / (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (var_0)))))));
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_9))));
}
