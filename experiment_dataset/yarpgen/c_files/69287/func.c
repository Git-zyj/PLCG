/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69287
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    var_18 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) (short)17094)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_2 [i_1]))), (((/* implicit */unsigned int) (short)17113)))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))));
                    var_19 = ((short) var_7);
                    var_20 = ((/* implicit */_Bool) var_2);
                }
                for (unsigned char i_3 = 3; i_3 < 12; i_3 += 3) 
                {
                    arr_15 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [i_3 - 3] [i_3 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_3 - 2] [i_3 + 1]))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)17094)) ? (((/* implicit */int) (short)17094)) : (((/* implicit */int) (unsigned short)31240))))) / ((+(2762516875U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) arr_0 [i_0 - 1])))));
                    arr_16 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) ((arr_9 [i_1] [i_3 - 1] [i_3 - 2] [i_1]) != (arr_9 [i_1] [i_3 - 2] [i_3 - 3] [i_1])))) << (((((arr_9 [i_1] [i_3 - 3] [i_3 - 2] [i_1]) | (arr_9 [i_1] [i_3 - 2] [i_3 - 2] [i_1]))) - (1910728837U)))))) : (((/* implicit */short) ((((/* implicit */int) ((arr_9 [i_1] [i_3 - 1] [i_3 - 2] [i_1]) != (arr_9 [i_1] [i_3 - 2] [i_3 - 3] [i_1])))) << (((((((arr_9 [i_1] [i_3 - 3] [i_3 - 2] [i_1]) | (arr_9 [i_1] [i_3 - 2] [i_3 - 2] [i_1]))) - (1910728837U))) - (2522427351U))))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (short)-15164))));
                    var_23 |= ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    arr_21 [i_1] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_4])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [(short)2])) : (((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_0])))))));
                    arr_22 [i_1] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-17078))));
                    arr_23 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                    var_24 = ((/* implicit */unsigned char) (short)(-32767 - 1));
                    var_25 &= arr_10 [(_Bool)1] [i_4] [i_4] [i_4];
                }
                for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    var_26 = arr_25 [i_1] [i_1] [i_0];
                    arr_26 [i_0 - 1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) - (((/* implicit */int) arr_17 [i_0 - 1] [i_1] [i_5]))));
                    var_27 = (short)-17095;
                    arr_27 [i_1] [i_1] [i_1] = var_8;
                }
                arr_28 [i_1] [i_1] = ((/* implicit */unsigned int) (!((!((_Bool)1)))));
                var_28 = ((/* implicit */long long int) (short)24685);
            }
        } 
    } 
}
