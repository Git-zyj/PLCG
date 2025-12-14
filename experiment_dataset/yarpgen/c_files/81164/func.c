/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81164
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_9 [i_2] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((562657978) & (2147483647))) != (((((/* implicit */_Bool) 562657993)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))))) | (min((456917223), (((/* implicit */int) (_Bool)1))))));
                    arr_10 [(short)8] [4U] [(short)8] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((+(var_4))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (2924761992U) : (var_4)))) ? (arr_6 [i_0]) : (max((var_5), (((/* implicit */unsigned int) var_9))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            arr_19 [i_2] [i_3] [16U] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (arr_6 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -297920215))))), (((2198789259U) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                            arr_20 [i_1] [i_2] [i_4] = ((/* implicit */_Bool) (-(((int) ((int) var_2)))));
                            arr_21 [i_4] [i_3 - 3] [i_2] [i_3 - 3] [i_2] [i_4] = ((/* implicit */signed char) -562657979);
                            arr_22 [i_2] [i_2] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)47861)) : (((/* implicit */int) (_Bool)0)))))));
                            arr_23 [i_0] [i_2] [i_2] [(_Bool)0] = ((/* implicit */signed char) (unsigned short)40325);
                        }
                        arr_24 [i_2] [i_2] [i_1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 - 2] [i_2] [i_1] [i_0] [i_0] [i_0]))) == (max((arr_3 [i_3 - 2] [i_0]), (arr_3 [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_1] [4U] [i_2] [i_5] = ((/* implicit */unsigned short) arr_7 [i_0] [(signed char)14] [i_0]);
                        arr_29 [i_2] = ((/* implicit */unsigned int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_5] [i_2] [i_5] [i_2])))));
                        arr_30 [i_2] [i_1] [i_2] [i_5] = (~(((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5])));
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            arr_36 [i_7] [i_6] [i_2] [i_1] [i_0] = min((((/* implicit */unsigned int) max((max(((short)1536), (((/* implicit */short) (_Bool)1)))), (arr_32 [i_1] [i_2] [i_6] [i_7])))), (min((arr_12 [i_7] [i_6] [i_2] [i_2] [8U] [i_0]), (arr_12 [i_0] [i_1] [i_2] [i_2] [i_6] [i_7]))));
                            arr_37 [i_2] [i_1] [i_0] [i_6] [0U] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            arr_41 [i_2] [i_1] = ((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_13 [i_0] [i_0] [i_2] [i_0] [i_0]))))));
                            arr_42 [i_6] [i_0] [12] [i_6] = (+((+(2773059706U))));
                        }
                        arr_43 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_38 [i_0] [i_2] [i_2] [i_2] [i_0] [i_2] [i_0])) ? (max((((/* implicit */unsigned int) (short)32736)), (arr_38 [i_6] [i_2] [i_2] [18U] [i_1] [i_2] [i_0]))) : (4294967284U)))));
                    }
                }
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    arr_46 [i_9] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -297920188)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((max((var_0), (((/* implicit */unsigned short) (signed char)-20)))), (((/* implicit */unsigned short) (_Bool)1)))))) : (2685154688U)));
                    arr_47 [i_9] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (signed char)-43)) + (2147483647))) >> (((((((/* implicit */_Bool) (signed char)-97)) ? (2902283388U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_9]))))) - (2902283377U)))));
                }
                arr_48 [i_0] [i_1] = 0U;
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((unsigned short) var_6));
    var_12 = ((/* implicit */unsigned short) max((304120292U), (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_2))))))))));
}
