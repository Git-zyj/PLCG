/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7494
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
    var_10 = var_4;
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))));
                                arr_15 [i_0 + 1] [i_0] [i_0] [i_3] [i_0] [(unsigned short)2] [i_1 - 1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)-8525)) ? (((/* implicit */int) (short)14904)) : (((/* implicit */int) (_Bool)1))))));
                                var_11 &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_6)))) ? ((~(((/* implicit */int) arr_7 [i_4] [i_1] [i_1] [i_0])))) : (((((/* implicit */_Bool) (short)-2735)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_1] [i_3] [i_1]))))))), (((unsigned int) var_2))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) arr_3 [i_0]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (-(((((/* implicit */int) var_5)) | (((((/* implicit */_Bool) var_9)) ? (-1781137699) : (((/* implicit */int) var_7)))))))))));
    var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) 25701491))) : (((/* implicit */int) var_2))))));
}
