/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75435
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
    var_17 = ((/* implicit */unsigned char) var_4);
    var_18 = ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_19 *= ((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_2])), ((~(((/* implicit */int) min((((/* implicit */short) (signed char)33)), ((short)(-32767 - 1)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned char) (~(((int) arr_0 [i_0]))));
                                var_21 = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) arr_5 [(short)2] [i_2] [i_4])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (arr_5 [i_1] [i_3] [i_1])));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((var_8) < (((/* implicit */int) (short)(-32767 - 1))))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0] [i_2] [i_1] [i_1] [i_1]))) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]))))) != (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_1] [(unsigned char)4])) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) arr_6 [i_1]))))), (arr_3 [(short)3] [(short)3])))));
                }
            } 
        } 
    } 
}
