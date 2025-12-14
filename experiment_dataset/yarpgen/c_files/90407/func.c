/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90407
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
    var_20 = ((/* implicit */int) (~(var_17)));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)65))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((int) var_19)) : (var_8)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_22 -= ((((arr_0 [i_0 + 3]) > (arr_0 [i_0 + 3]))) ? ((+(arr_0 [i_0 + 3]))) : (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_0 [i_0 + 1]))));
                var_23 *= ((/* implicit */_Bool) (-(arr_0 [i_0])));
                var_24 = ((/* implicit */unsigned short) (-(((unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned char)2] [i_1 + 2] [i_1 + 3])) ? (arr_4 [(unsigned short)1] [i_1 + 2]) : (((/* implicit */int) arr_1 [i_0])))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [(_Bool)1] [6LL] [i_0] [i_2] [i_4] = max((((/* implicit */short) ((unsigned char) (unsigned char)157))), ((short)0));
                                var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [(short)4] [i_1 + 2] [i_1 + 2])) ? (arr_12 [i_1 + 1] [i_1 + 1] [i_4 + 1] [i_4]) : (arr_12 [i_1 + 1] [i_1] [i_1] [i_4 + 1])))) ? (min((((/* implicit */int) arr_7 [i_1 + 1] [i_2] [i_3] [i_4])), (arr_12 [i_1 + 1] [(unsigned char)7] [i_1 + 2] [4ULL]))) : ((-(((/* implicit */int) arr_7 [i_1 + 1] [i_3] [i_3] [i_4]))))));
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~((+(((/* implicit */int) var_4))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (unsigned char)125))))) ? (((unsigned int) (unsigned char)116)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_3] [i_0]))))))));
                                var_27 *= ((unsigned short) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1] [i_2])) ? (((/* implicit */unsigned long long int) max((arr_12 [i_4] [i_3] [i_2] [i_1]), (((/* implicit */int) arr_1 [i_3]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [3U]))) : (arr_6 [(_Bool)1] [i_1] [i_1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((var_7) >> (((/* implicit */int) var_19)))) : (min((((/* implicit */unsigned int) -244394487)), (831386995U))))))));
}
