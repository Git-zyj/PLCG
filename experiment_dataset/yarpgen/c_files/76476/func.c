/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76476
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
    var_12 = ((/* implicit */signed char) ((var_3) | (((/* implicit */long long int) 1231851823))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */_Bool) (((+(var_4))) >> ((((+(((/* implicit */int) arr_10 [i_0 + 2] [i_1 - 1] [i_2 - 1] [i_3])))) - (58470)))));
                        arr_13 [i_0] [2U] [i_1 + 1] [i_2] [i_2 - 2] [(unsigned char)10] |= ((/* implicit */long long int) var_10);
                    }
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        var_14 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))))));
                        var_15 = ((/* implicit */int) max((var_15), ((-((-(arr_11 [i_0 + 2] [i_1] [i_2 + 1])))))));
                        arr_16 [i_0] [i_1] [i_0] = ((1610689244) | (((/* implicit */int) arr_7 [i_2 + 3] [i_2 + 3] [i_1] [i_1])));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((((/* implicit */_Bool) arr_2 [i_1 - 2])) && (((/* implicit */_Bool) arr_2 [i_4 - 1]))))));
                        arr_17 [i_0] [i_0 - 1] [i_1] [i_2] [i_2 + 1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_1 - 1])) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) arr_14 [i_2] [i_1] [i_2] [i_1]))))) : ((+(var_7))))), (max((((/* implicit */unsigned int) arr_2 [i_0 + 1])), (var_8)))));
                    }
                    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1 - 2] [i_0 + 1] [i_1]))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)139)) / (((/* implicit */int) (signed char)21))))), (var_8)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_10);
}
