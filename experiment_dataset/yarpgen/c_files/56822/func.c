/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56822
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
    var_16 *= ((/* implicit */unsigned short) ((var_11) * (((/* implicit */int) ((var_2) <= (((/* implicit */int) var_5)))))));
    var_17 = ((/* implicit */int) ((unsigned short) var_3));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) (short)-6742)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (549755813887LL)))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6736)) ? ((~(arr_6 [i_1]))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-6742)) : (1159188139))))));
                arr_7 [4U] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((unsigned long long int) var_3)) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) * (1159188125))))))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((331374884U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 1]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_14 [7U] [i_1]) : (((/* implicit */unsigned long long int) 1159188142)))))))));
                                arr_15 [i_1] = ((signed char) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (short)-15669)) : (((/* implicit */int) ((unsigned short) 1096717953)))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) (-(max((((/* implicit */unsigned int) ((_Bool) var_6))), (arr_1 [i_0 - 1])))));
            }
        } 
    } 
}
