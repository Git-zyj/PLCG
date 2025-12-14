/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93414
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
    var_16 *= ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (-((-(var_15)))));
                                var_17 = ((/* implicit */_Bool) ((((4294967295U) < ((-(arr_2 [i_0]))))) ? (((min((((/* implicit */int) var_8)), (var_15))) & (((/* implicit */int) arr_12 [0U] [i_1] [0U] [0U] [(_Bool)1] [i_4])))) : ((~(((arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4]) ? (((/* implicit */int) arr_7 [i_2] [i_4])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_4]))))))));
                                var_18 = ((/* implicit */signed char) (unsigned short)57811);
                                arr_15 [i_3] [i_1 + 3] [i_2] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_1 + 2] [i_1 + 2] [i_4] [(signed char)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_13 [i_0] [i_4] [i_4] [i_1 - 3] [i_4] [(signed char)11] [i_1 - 3])));
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */_Bool) var_4);
                    arr_16 [i_0] [(unsigned short)11] [i_2] [i_2] = ((/* implicit */unsigned char) ((max((arr_4 [i_0] [i_1 - 1] [i_2]), (arr_4 [i_0] [i_1 + 1] [i_2]))) - (min((arr_4 [i_0] [i_1 - 1] [i_2]), (arr_4 [i_0] [i_1 - 3] [i_1 - 3])))));
                }
            } 
        } 
    } 
}
