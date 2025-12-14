/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96431
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_6 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 + 3] [i_4] [i_4])))));
                                arr_10 [6ULL] [i_1] [i_2] [6ULL] [i_4] = ((/* implicit */unsigned long long int) ((min((var_6), (((/* implicit */unsigned int) (short)-214)))) - (((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_4] [i_1] [i_2 - 1] [i_1] [i_0] [i_0]))))) ? (840078936U) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) (unsigned char)0))))))))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((3454888359U), (((/* implicit */unsigned int) arr_6 [i_0] [3ULL] [i_2] [(short)11] [i_4] [(short)11])))))))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_0))))) ? (((int) (unsigned short)15)) : (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((((/* implicit */int) var_12)) - (20416))))))))))));
                                var_15 = ((/* implicit */int) 840078935U);
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0])))));
                    var_16 ^= ((/* implicit */signed char) var_10);
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2 + 2] [i_2 - 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_10)))) : (((((/* implicit */_Bool) arr_9 [(unsigned char)6] [i_2 - 1] [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [(short)3] [i_2 - 3] [i_2 + 2] [i_2 + 2] [(short)3])) : (((/* implicit */int) arr_8 [i_2] [(unsigned short)11] [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2]))))));
                    arr_12 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) 3454888359U))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max((var_18), (var_7)));
    var_19 = ((/* implicit */signed char) (short)256);
    var_20 = ((/* implicit */_Bool) (short)32767);
}
