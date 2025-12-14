/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61495
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) var_7))))) > (var_7)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 8; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (((long long int) arr_7 [i_0 + 1]))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (((+(4378005640693373476LL))) < (arr_13 [i_0] [i_1 - 3] [i_3] [i_3 + 2] [i_4] [i_0]))))) >= (((long long int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) (short)14313)))))));
                                var_18 = (~(((((/* implicit */_Bool) (short)32271)) ? (arr_13 [i_4] [i_4] [0U] [i_4 + 1] [i_4] [i_4]) : (arr_13 [i_4] [i_4 - 2] [(short)8] [i_4 - 2] [i_4] [i_4]))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) (short)14328);
                var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_4)))));
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    for (short i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_21 = (short)511;
                            arr_21 [i_6] = ((/* implicit */short) ((((/* implicit */int) (short)-21884)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5 - 1] [i_1 + 1])))))));
                            arr_22 [i_0] [i_1] [i_5] [i_0 + 1] [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14313)) ? (5277000958457995726LL) : (((/* implicit */long long int) arr_19 [i_6 - 3] [i_6] [i_6] [i_6] [i_1] [i_1]))))) ? (((((469064567U) >= (var_4))) ? (arr_18 [i_1] [i_1] [i_1 - 3] [i_6 - 1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5 + 2]))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_6]))) / (arr_20 [i_0] [i_1] [i_0] [i_6] [i_0]))), (((arr_7 [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (~(var_12)));
}
