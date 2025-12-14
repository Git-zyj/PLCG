/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63081
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_2))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [(unsigned short)10] [i_1] [i_0] = ((/* implicit */unsigned short) arr_7 [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_9 [(signed char)2] [i_4] [i_3] [i_3]))))) ? (((/* implicit */int) arr_12 [i_4] [i_0] [i_2] [i_0] [i_0])) : (((/* implicit */int) (short)-15885)));
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 1073479680U)) ? (arr_13 [i_0] [i_4] [i_4] [i_0] [i_1] [i_2]) : (var_13))))) ? (((((/* implicit */int) arr_5 [i_0] [(short)13] [(short)13] [(signed char)8])) + (((/* implicit */int) arr_5 [i_0] [i_2] [i_2] [i_4])))) : (((/* implicit */int) arr_7 [i_2] [i_4]))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) : (arr_6 [i_0])))) ? (((((/* implicit */_Bool) (short)-26917)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_4 [i_1])))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [2ULL] [2ULL] = ((/* implicit */long long int) var_10);
                    var_17 += ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) > (((/* implicit */int) var_2)))))))), (((/* implicit */unsigned int) (short)15859))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((-524682991) <= (((/* implicit */int) var_7))))), (((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) > (((((/* implicit */_Bool) ((short) var_13))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12))))))));
}
