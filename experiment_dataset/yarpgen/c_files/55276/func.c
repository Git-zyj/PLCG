/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55276
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
    var_15 = ((/* implicit */unsigned long long int) var_13);
    var_16 = ((/* implicit */short) max(((~(max((4294967295U), (((/* implicit */unsigned int) var_4)))))), (((/* implicit */unsigned int) ((var_12) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_12)))))));
    var_17 &= ((/* implicit */int) var_13);
    var_18 = ((/* implicit */short) min((max((((/* implicit */unsigned int) var_4)), (((var_9) / (133693440U))))), (var_8)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_0 + 3] [i_0 + 3]))))) / ((+(arr_0 [i_0 - 1])))));
                arr_5 [i_1] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_2) && (((/* implicit */_Bool) 4161273856U)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_1] [i_1] [i_0 - 2]), (arr_4 [i_0] [i_0] [i_0 - 3]))))) : ((+(((var_7) << (((((/* implicit */int) arr_3 [(unsigned short)1] [i_0] [i_1])) + (80))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0 + 4] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)151)) & ((-(((/* implicit */int) arr_9 [i_4 + 1] [i_1] [i_2] [i_1]))))))));
                                var_20 = ((/* implicit */unsigned short) (~((-(((unsigned int) arr_8 [i_2] [(short)6] [i_2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
