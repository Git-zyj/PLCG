/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93090
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
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) (unsigned short)65513)))), ((!(((/* implicit */_Bool) 1ULL))))))), (var_9)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((-2147483634), (((/* implicit */int) (short)0))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_1 - 2] [i_1 - 2])) && (((/* implicit */_Bool) (unsigned char)107))))), (var_5))))));
                    var_21 += ((/* implicit */short) (!(arr_0 [i_2])));
                    var_22 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_2] [i_2]);
                    var_23 += ((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)-16323)) / (((/* implicit */int) arr_5 [i_0] [i_0] [i_1 - 1] [i_1])))), (((/* implicit */int) var_16))));
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_1 - 1] [i_1 - 1])) ? (3916975494U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (max((377991787U), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-47)) - (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) | ((-(((/* implicit */int) arr_6 [i_0] [i_2] [i_1 - 1] [i_1 - 1])))))))));
                }
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]))) | (arr_13 [i_0] [i_0] [i_0] [i_0]))))));
                                var_25 = ((/* implicit */_Bool) (+((-(377991801U)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((long long int) 1836073512U)))));
}
