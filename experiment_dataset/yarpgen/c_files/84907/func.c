/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84907
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
    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_0)))))) ? (max((((/* implicit */unsigned int) var_13)), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((/* implicit */int) var_4)), ((~(((/* implicit */int) (unsigned char)34)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 2] [i_2] [i_3 + 1] [i_1 - 2] [i_1 - 2] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) : (min((((/* implicit */unsigned int) var_1)), (arr_9 [i_0] [i_1] [i_0] [i_2]))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)222)) / (((/* implicit */int) (unsigned char)230)))))))));
                                var_21 = ((/* implicit */int) min((var_21), ((+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1 + 1] [(unsigned char)10] [i_3] [i_0])) ? (arr_5 [i_0] [i_1] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-(((/* implicit */int) (unsigned char)221)))) : (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (unsigned char)222))));
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) var_11)))), ((+(((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)35))))))));
}
